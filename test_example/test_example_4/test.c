NTSTATUS DiskPerfAddDevice(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT PhysicalDeviceObject ) 
{ NTSTATUS status ;
  PDEVICE_OBJECT filterDeviceObject ;
  PDEVICE_EXTENSION deviceExtension ;
  ULONG registrationFlag ;
  PWMILIB_CONTEXT wmilibContext ;
  PCHAR buffer ;
  ULONG buffersize ;
  PVOID tmp ;

  {
#line 9612
  registrationFlag = (ULONG )0;
#line 9621
  status = IoCreateDevice(DriverObject, (unsigned long )sizeof(DEVICE_EXTENSION ),
                          (UNICODE_STRING *)((void *)0), 7UL, 0UL, (unsigned char)0,
                          & filterDeviceObject);
#line 9624
  if (! (status >= 0L)) {
#line 9628
    return (status);
  }
#line 9631
  filterDeviceObject->Flags |= 16UL;
#line 9633
  deviceExtension = (struct _DEVICE_EXTENSION *)filterDeviceObject->DeviceExtension;
#line 9635
  memset((void *)deviceExtension, 0, sizeof(DEVICE_EXTENSION ));
#line 9636
  deviceExtension->LastIdleClock = KeQueryPerformanceCounter((LARGE_INTEGER *)((void *)0));
#line 9640
  deviceExtension->Processors = (unsigned long )*KeNumberProcessors;
#line 9641
  buffersize = (ULONG )((long )(& ((DISK_PERFORMANCE *)0)->QueryTime)) * deviceExtension->Processors;
#line 9644
  tmp = ExAllocatePoolWithTag(0, buffersize, 1718767684UL);
#line 9644
  buffer = (CHAR *)tmp;
#line 9647
  if ((unsigned int )buffer != (unsigned int )((void *)0)) {
#line 9650
    memset((void *)buffer, 0, (unsigned int )buffersize);
#line 9651
    deviceExtension->DiskCounters = (struct _DISK_PERFORMANCE *)buffer;
  } else {
#line 9656
    DiskPerfLogError(filterDeviceObject, 513UL, 0L, -1073479678L);
  }
#line 9660
  deviceExtension->PhysicalDeviceObject = PhysicalDeviceObject;
#line 9662
  deviceExtension->TargetDeviceObject = IoAttachDeviceToDeviceStack(filterDeviceObject,
                                                                    PhysicalDeviceObject);
#line 9665
  if ((unsigned int )deviceExtension->TargetDeviceObject == (unsigned int )((void *)0)) {
#line 9668
    IoDeleteDevice(filterDeviceObject);
#line 9671
    return (-1073741810L);
  }
#line 9674
  deviceExtension->DeviceObject = filterDeviceObject;
#line 9676
  deviceExtension->PhysicalDeviceName.Buffer = deviceExtension->PhysicalDeviceNameBuffer;
#line 9679
  KeInitializeEvent(& deviceExtension->PagingPathCountEvent, 0, (unsigned char)1);
#line 9682
  wmilibContext = & deviceExtension->WmilibContext;
#line 9683
  memset((void *)wmilibContext, 0, sizeof(WMILIB_CONTEXT ));
#line 9684
  wmilibContext->GuidCount = (unsigned long )(sizeof(DiskperfGuidList) / sizeof(WMIGUIDREGINFO ));
#line 9687
  wmilibContext->GuidList = DiskperfGuidList;
#line 9688
  wmilibContext->QueryWmiRegInfo = & DiskperfQueryWmiRegInfo;
#line 9689
  wmilibContext->QueryWmiDataBlock = & DiskperfQueryWmiDataBlock;
#line 9690
  wmilibContext->WmiFunctionControl = & DiskperfWmiFunctionControl;
#line 9692
  filterDeviceObject->Flags |= 8192UL;
#line 9694
  filterDeviceObject->Flags &= 4294967167UL;
#line 9696
  return (0L);
}
}
$
NTSTATUS DiskPerfReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp ) 
{ PDEVICE_EXTENSION deviceExtension ;
  PIO_STACK_LOCATION currentIrpStack ;
  PIO_STACK_LOCATION nextIrpStack ;
  ULONG processor ;
  ULONG tmp ;
  PDISK_PERFORMANCE partitionCounters ;
  LONG queueLen ;
  PLARGE_INTEGER timeStamp ;
  NTSTATUS tmp___0 ;
  PIO_STACK_LOCATION irpSp ;
  NTSTATUS tmp___1 ;

  {
#line 10091
  deviceExtension = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
#line 10092
  currentIrpStack = girp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
#line 10095
  nextIrpStack = girp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
#line 10098
  tmp = KeGetCurrentProcessorNumber();
#line 10098
  processor = tmp;
#line 10099
  partitionCounters = (PDISK_PERFORMANCE )((void *)0);
#line 10103
  if ((unsigned int )deviceExtension->DiskCounters != (unsigned int )((void *)0)) {
#line 10106
    partitionCounters = (struct _DISK_PERFORMANCE *)((CHAR *)deviceExtension->DiskCounters + processor * (ULONG )((long )(& ((DISK_PERFORMANCE *)0)->QueryTime)));
  }
#line 10111
  if (deviceExtension->CountersEnabled <= 0L) {
#line 10116
    tmp___0 = DiskPerfSendToNextDriver(DeviceObject);
#line 10116
    return (tmp___0);
  } else {
#line 10111
    if ((int )deviceExtension->PhysicalDeviceNameBuffer[0] == 0) {
#line 10116
      tmp___0 = DiskPerfSendToNextDriver(DeviceObject);
#line 10116
      return (tmp___0);
    } else {
#line 10111
      if ((unsigned int )partitionCounters == (unsigned int )((void *)0)) {
#line 10116
        tmp___0 = DiskPerfSendToNextDriver(DeviceObject);
#line 10116
        return (tmp___0);
      }
    }
  }
#line 10119
  queueLen = InterlockedIncrement(& deviceExtension->QueueDepth);
#line 10121
  *nextIrpStack = *currentIrpStack;
#line 10123
  timeStamp = (LARGE_INTEGER *)(& currentIrpStack->Parameters.Read);
#line 10124
  *timeStamp = KeQueryPerformanceCounter((LARGE_INTEGER *)((void *)0));
#line 10127
  if (queueLen == 1L) {
#line 10130
    partitionCounters->IdleTime.QuadPart += timeStamp->QuadPart - deviceExtension->LastIdleClock.QuadPart;
#line 10133
    deviceExtension->LastIdleClock.QuadPart = timeStamp->QuadPart;
  }
#line 10136
  if (s != NP) {
#line 10138
     //fail(); //1400
  } else {
#line 10142
    if (compRegistered != 0) {
#line 10144
       //fail();
    } else {
#line 10148
      compRegistered = 1;
#line 10149
      compFptr = & DiskPerfIoCompletion;
#line 10150
      routine = 1;
    }
  }
#line 10159
  irpSp = girp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
#line 10161
  irpSp->CompletionRoutine = & DiskPerfIoCompletion;
#line 10163
  irpSp->Context = (void *)DeviceObject;
#line 10165
  irpSp->Control = (unsigned char)0;
#line 10170
  irpSp->Control = (unsigned char)64;
#line 10176
  irpSp->Control = (unsigned char )((int )irpSp->Control | 128);
#line 10182
  irpSp->Control = (unsigned char )((int )irpSp->Control | 32);
#line 10188
  tmp___1 = IofCallDriver(deviceExtension->TargetDeviceObject);
#line 10188
  return (tmp___1);
}
}
@