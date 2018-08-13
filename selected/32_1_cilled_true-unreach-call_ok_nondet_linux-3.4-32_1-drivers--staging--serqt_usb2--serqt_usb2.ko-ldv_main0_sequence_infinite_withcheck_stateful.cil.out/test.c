static struct usb_serial *get_usb_serial(struct usb_serial_port *port , char const   *function ) 
{ int tmp___7 ;
  int tmp___8 ;
  void *__cil_tmp5 ;
  void *__cil_tmp6 ;
  struct usb_serial *__cil_tmp7 ;
  void *__cil_tmp8 ;

  {
  if (! port) {
    {
    __cil_tmp5 = (void *)0;
    return ((struct usb_serial *)__cil_tmp5);
    }
  } else {
    {
    tmp___7 = port_paranoia_check(port, function);
    }
    if (tmp___7) {
      {
      __cil_tmp6 = (void *)0;
      return ((struct usb_serial *)__cil_tmp6);
      }
    } else {
      {
      __cil_tmp7 = *((struct usb_serial **)port);
      tmp___8 = serial_paranoia_check(__cil_tmp7, function);
      }
      if (tmp___8) {
        {
        __cil_tmp8 = (void *)0;
        return ((struct usb_serial *)__cil_tmp8);
        }
      } else {

      }
    }
  }
  return (*((struct usb_serial **)port));
}
}
$
static void qt_write_bulk_callback(struct urb *urb ) 
{ struct tty_struct *tty ;
  int status ;
  struct quatech_port *quatech_port ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  bool *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  void *__cil_tmp10 ;
  bool *__cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  struct usb_serial_port *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct tty_port *__cil_tmp18 ;

  {
  __cil_tmp5 = (unsigned long )urb;
  __cil_tmp6 = __cil_tmp5 + 96;
  status = *((int *)__cil_tmp6);
  if (status) {
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      __cil_tmp7 = & debug;
      if (*__cil_tmp7) {
        {
        printk("<7>%s: nonzero write bulk status received:%d\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               status);
        }
      } else {

      }
      }
      goto while_break;
    }
    while_break: /* CIL Label */ ;
    }
    return;
  } else {

  }
  __cil_tmp8 = (unsigned long )urb;
  __cil_tmp9 = __cil_tmp8 + 176;
  __cil_tmp10 = *((void **)__cil_tmp9);
  quatech_port = (struct quatech_port *)__cil_tmp10;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
    __cil_tmp11 = & debug;
    if (*__cil_tmp11) {
      {
      __cil_tmp12 = *((int *)quatech_port);
      printk("<7>%s: %s - port %d\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
             "qt_write_bulk_callback", __cil_tmp12);
      }
    } else {

    }
    }
    goto while_break___0;
  }
  while_break___0: /* CIL Label */ ;
  }
  {
  __cil_tmp13 = (unsigned long )quatech_port;
  __cil_tmp14 = __cil_tmp13 + 176;
  __cil_tmp15 = *((struct usb_serial_port **)__cil_tmp14);
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = __cil_tmp16 + 8;
  __cil_tmp18 = (struct tty_port *)__cil_tmp17;
  tty = tty_port_tty_get(__cil_tmp18);
  }
  if (tty) {
    {
    tty_wakeup(tty);
    }
  } else {

  }
  {
  tty_kref_put(tty);
  }
  return;
}
}
$
static void qt_read_bulk_callback(struct urb *urb ) 
{ struct usb_serial_port *port ;
  struct usb_serial *serial ;
  struct usb_serial *tmp___7 ;
  struct quatech_port *qt_port ;
  struct quatech_port *tmp___8 ;
  unsigned char *data ;
  struct tty_struct *tty ;
  unsigned int index ;
  unsigned int RxCount ;
  int i ;
  int result ;
  int flag ;
  int flag_data ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  void *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  bool *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  int __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct tty_port *__cil_tmp30 ;
  bool *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  void *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  unsigned char __cil_tmp39 ;
  int __cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  bool *__cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  unsigned char __cil_tmp48 ;
  int __cil_tmp49 ;
  bool *__cil_tmp50 ;
  unsigned long __cil_tmp51 ;
  unsigned long __cil_tmp52 ;
  int __cil_tmp53 ;
  bool *__cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  bool *__cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  unsigned long __cil_tmp59 ;
  char __cil_tmp60 ;
  int __cil_tmp61 ;
  bool *__cil_tmp62 ;
  unsigned long __cil_tmp63 ;
  unsigned long __cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  unsigned long __cil_tmp66 ;
  int __cil_tmp67 ;
  unsigned long __cil_tmp68 ;
  unsigned long __cil_tmp69 ;
  unsigned long __cil_tmp70 ;
  unsigned long __cil_tmp71 ;
  unsigned long __cil_tmp72 ;
  unsigned long __cil_tmp73 ;
  bool *__cil_tmp74 ;
  unsigned long __cil_tmp75 ;
  unsigned long __cil_tmp76 ;
  int __cil_tmp77 ;
  unsigned int __cil_tmp78 ;
  unsigned int __cil_tmp79 ;
  unsigned int __cil_tmp80 ;
  unsigned char *__cil_tmp81 ;
  unsigned char __cil_tmp82 ;
  int __cil_tmp83 ;
  int __cil_tmp84 ;
  unsigned char *__cil_tmp85 ;
  unsigned char __cil_tmp86 ;
  int __cil_tmp87 ;
  int __cil_tmp88 ;
  unsigned char *__cil_tmp89 ;
  unsigned char __cil_tmp90 ;
  unsigned int __cil_tmp91 ;
  unsigned int __cil_tmp92 ;
  bool *__cil_tmp93 ;
  int __cil_tmp94 ;
  unsigned char *__cil_tmp95 ;
  unsigned char __cil_tmp96 ;
  bool *__cil_tmp97 ;
  unsigned int __cil_tmp98 ;
  unsigned int __cil_tmp99 ;
  bool *__cil_tmp100 ;
  int __cil_tmp101 ;
  unsigned char *__cil_tmp102 ;
  unsigned char __cil_tmp103 ;
  bool *__cil_tmp104 ;
  unsigned char *__cil_tmp105 ;
  unsigned char __cil_tmp106 ;
  int __cil_tmp107 ;
  unsigned char *__cil_tmp108 ;
  unsigned char __cil_tmp109 ;
  unsigned long __cil_tmp110 ;
  unsigned long __cil_tmp111 ;
  unsigned char *__cil_tmp112 ;
  unsigned char __cil_tmp113 ;
  struct usb_device *__cil_tmp114 ;
  unsigned long __cil_tmp115 ;
  unsigned long __cil_tmp116 ;
  __u8 __cil_tmp117 ;
  unsigned int __cil_tmp118 ;
  unsigned long __cil_tmp119 ;
  unsigned long __cil_tmp120 ;
  struct urb *__cil_tmp121 ;
  struct usb_device *__cil_tmp122 ;
  int __cil_tmp123 ;
  unsigned int __cil_tmp124 ;
  unsigned int __cil_tmp125 ;
  unsigned int __cil_tmp126 ;
  unsigned long __cil_tmp127 ;
  unsigned long __cil_tmp128 ;
  struct urb *__cil_tmp129 ;
  unsigned long __cil_tmp130 ;
  unsigned long __cil_tmp131 ;
  void *__cil_tmp132 ;
  unsigned long __cil_tmp133 ;
  unsigned long __cil_tmp134 ;
  struct urb *__cil_tmp135 ;
  unsigned long __cil_tmp136 ;
  unsigned long __cil_tmp137 ;
  u32 __cil_tmp138 ;
  int __cil_tmp139 ;
  void *__cil_tmp140 ;
  unsigned long __cil_tmp141 ;
  unsigned long __cil_tmp142 ;
  struct urb *__cil_tmp143 ;
  bool *__cil_tmp144 ;
  unsigned long __cil_tmp145 ;
  unsigned long __cil_tmp146 ;
  struct work_struct *__cil_tmp147 ;

  {
  {
  __cil_tmp17 = (unsigned long )urb;
  __cil_tmp18 = __cil_tmp17 + 176;
  __cil_tmp19 = *((void **)__cil_tmp18);
  port = (struct usb_serial_port *)__cil_tmp19;
  tmp___7 = get_usb_serial(port, "qt_read_bulk_callback");
  serial = tmp___7;
  tmp___8 = qt_get_port_private(port);
  qt_port = tmp___8;
  }
  {
  __cil_tmp20 = (unsigned long )urb;
  __cil_tmp21 = __cil_tmp20 + 96;
  if (*((int *)__cil_tmp21)) {
    __cil_tmp22 = (unsigned long )qt_port;
    __cil_tmp23 = __cil_tmp22 + 272;
    *((int *)__cil_tmp23) = 1;
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      __cil_tmp24 = & debug;
      if (*__cil_tmp24) {
        {
        __cil_tmp25 = (unsigned long )urb;
        __cil_tmp26 = __cil_tmp25 + 96;
        __cil_tmp27 = *((int *)__cil_tmp26);
        printk("<7>%s: %s - nonzero write bulk status received: %d\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback", __cil_tmp27);
        }
      } else {

      }
      }
      goto while_break;
    }
    while_break: /* CIL Label */ ;
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp28 = (unsigned long )port;
  __cil_tmp29 = __cil_tmp28 + 8;
  __cil_tmp30 = (struct tty_port *)__cil_tmp29;
  tty = tty_port_tty_get(__cil_tmp30);
  }
  if (! tty) {
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      __cil_tmp31 = & debug;
      if (*__cil_tmp31) {
        {
        printk("<7>%s: %s - bad tty pointer - exiting\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback");
        }
      } else {

      }
      }
      goto while_break___0;
    }
    while_break___0: /* CIL Label */ ;
    }
    return;
  } else {

  }
  __cil_tmp32 = (unsigned long )urb;
  __cil_tmp33 = __cil_tmp32 + 104;
  __cil_tmp34 = *((void **)__cil_tmp33);
  data = (unsigned char *)__cil_tmp34;
  __cil_tmp35 = (unsigned long )urb;
  __cil_tmp36 = __cil_tmp35 + 140;
  RxCount = *((u32 *)__cil_tmp36);
  __cil_tmp37 = (unsigned long )serial;
  __cil_tmp38 = __cil_tmp37 + 25;
  __cil_tmp39 = *((unsigned char *)__cil_tmp38);
  __cil_tmp40 = (int )__cil_tmp39;
  __cil_tmp41 = (unsigned long )tty;
  __cil_tmp42 = __cil_tmp41 + 32;
  __cil_tmp43 = *((int *)__cil_tmp42);
  __cil_tmp44 = __cil_tmp43 - __cil_tmp40;
  index = (unsigned int )__cil_tmp44;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;
    {
    __cil_tmp45 = & debug;
    if (*__cil_tmp45) {
      {
      __cil_tmp46 = (unsigned long )port;
      __cil_tmp47 = __cil_tmp46 + 384;
      __cil_tmp48 = *((unsigned char *)__cil_tmp47);
      __cil_tmp49 = (int )__cil_tmp48;
      printk("<7>%s: %s - port %d\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
             "qt_read_bulk_callback", __cil_tmp49);
      }
    } else {

    }
    }
    goto while_break___1;
  }
  while_break___1: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___2: /* CIL Label */ ;
    {
    __cil_tmp50 = & debug;
    if (*__cil_tmp50) {
      {
      __cil_tmp51 = (unsigned long )qt_port;
      __cil_tmp52 = __cil_tmp51 + 268;
      __cil_tmp53 = *((int *)__cil_tmp52);
      printk("<7>%s: %s - port->RxHolding = %d\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
             "qt_read_bulk_callback", __cil_tmp53);
      }
    } else {

    }
    }
    goto while_break___2;
  }
  while_break___2: /* CIL Label */ ;
  }
  {
  tmp___9 = port_paranoia_check(port, "qt_read_bulk_callback");
  }
  if (tmp___9 != 0) {
    {
    while (1) {
      while_continue___3: /* CIL Label */ ;
      {
      __cil_tmp54 = & debug;
      if (*__cil_tmp54) {
        {
        printk("<7>%s: %s - port_paranoia_check, exiting\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback");
        }
      } else {

      }
      }
      goto while_break___3;
    }
    while_break___3: /* CIL Label */ ;
    }
    __cil_tmp55 = (unsigned long )qt_port;
    __cil_tmp56 = __cil_tmp55 + 272;
    *((int *)__cil_tmp56) = 1;
    goto exit;
  } else {

  }
  if (! serial) {
    {
    while (1) {
      while_continue___4: /* CIL Label */ ;
      {
      __cil_tmp57 = & debug;
      if (*__cil_tmp57) {
        {
        printk("<7>%s: %s - bad serial pointer, exiting\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback");
        }
      } else {

      }
      }
      goto while_break___4;
    }
    while_break___4: /* CIL Label */ ;
    }
    goto exit;
  } else {

  }
  {
  __cil_tmp58 = (unsigned long )qt_port;
  __cil_tmp59 = __cil_tmp58 + 276;
  __cil_tmp60 = *((char *)__cil_tmp59);
  __cil_tmp61 = (int )__cil_tmp60;
  if (__cil_tmp61 == 1) {
    {
    while (1) {
      while_continue___5: /* CIL Label */ ;
      {
      __cil_tmp62 = & debug;
      if (*__cil_tmp62) {
        {
        printk("<7>%s: %s - (qt_port->closepending == 1\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback");
        }
      } else {

      }
      }
      goto while_break___5;
    }
    while_break___5: /* CIL Label */ ;
    }
    __cil_tmp63 = (unsigned long )qt_port;
    __cil_tmp64 = __cil_tmp63 + 272;
    *((int *)__cil_tmp64) = 1;
    goto exit;
  } else {

  }
  }
  {
  __cil_tmp65 = (unsigned long )qt_port;
  __cil_tmp66 = __cil_tmp65 + 268;
  __cil_tmp67 = *((int *)__cil_tmp66);
  if (__cil_tmp67 == 1) {
    __cil_tmp68 = (unsigned long )qt_port;
    __cil_tmp69 = __cil_tmp68 + 272;
    *((int *)__cil_tmp69) = 1;
    goto exit;
  } else {

  }
  }
  {
  __cil_tmp70 = (unsigned long )urb;
  __cil_tmp71 = __cil_tmp70 + 96;
  if (*((int *)__cil_tmp71)) {
    __cil_tmp72 = (unsigned long )qt_port;
    __cil_tmp73 = __cil_tmp72 + 272;
    *((int *)__cil_tmp73) = 1;
    {
    while (1) {
      while_continue___6: /* CIL Label */ ;
      {
      __cil_tmp74 = & debug;
      if (*__cil_tmp74) {
        {
        __cil_tmp75 = (unsigned long )urb;
        __cil_tmp76 = __cil_tmp75 + 96;
        __cil_tmp77 = *((int *)__cil_tmp76);
        printk("<7>%s: %s - nonzero read bulk status received: %d\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback", __cil_tmp77);
        }
      } else {

      }
      }
      goto while_break___6;
    }
    while_break___6: /* CIL Label */ ;
    }
    goto exit;
  } else {

  }
  }
  if (tty) {
    if (RxCount) {
      flag_data = 0;
      i = 0;
      {
      while (1) {
        while_continue___7: /* CIL Label */ ;
        {
        __cil_tmp78 = (unsigned int )i;
        if (__cil_tmp78 < RxCount) {

        } else {
          goto while_break___7;
        }
        }
        {
        __cil_tmp79 = RxCount - 3U;
        __cil_tmp80 = (unsigned int )i;
        if (__cil_tmp80 <= __cil_tmp79) {
          {
          __cil_tmp81 = data + i;
          __cil_tmp82 = *__cil_tmp81;
          __cil_tmp83 = (int )__cil_tmp82;
          if (__cil_tmp83 == 27) {
            {
            __cil_tmp84 = i + 1;
            __cil_tmp85 = data + __cil_tmp84;
            __cil_tmp86 = *__cil_tmp85;
            __cil_tmp87 = (int )__cil_tmp86;
            if (__cil_tmp87 == 27) {
              flag = 0;
              {
              __cil_tmp88 = i + 2;
              __cil_tmp89 = data + __cil_tmp88;
              __cil_tmp90 = *__cil_tmp89;
              if ((int )__cil_tmp90 == 0) {
                goto case_0;
              } else
              if ((int )__cil_tmp90 == 1) {
                goto case_1;
              } else
              if ((int )__cil_tmp90 == 255) {
                goto case_255;
              } else
              if (0) {
                case_0: /* CIL Label */ 
                {
                __cil_tmp91 = RxCount - 4U;
                __cil_tmp92 = (unsigned int )i;
                if (__cil_tmp92 > __cil_tmp91) {
                  {
                  while (1) {
                    while_continue___8: /* CIL Label */ ;
                    {
                    __cil_tmp93 = & debug;
                    if (*__cil_tmp93) {
                      {
                      printk("<7>%s: Illegal escape seuences in received data\n\n",
                             "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c");
                      }
                    } else {

                    }
                    }
                    goto while_break___8;
                  }
                  while_break___8: /* CIL Label */ ;
                  }
                  goto switch_break;
                } else {

                }
                }
                {
                __cil_tmp94 = i + 3;
                __cil_tmp95 = data + __cil_tmp94;
                __cil_tmp96 = *__cil_tmp95;
                ProcessLineStatus(qt_port, __cil_tmp96);
                i = i + 3;
                flag = 1;
                }
                goto switch_break;
                case_1: /* CIL Label */ 
                {
                while (1) {
                  while_continue___9: /* CIL Label */ ;
                  {
                  __cil_tmp97 = & debug;
                  if (*__cil_tmp97) {
                    {
                    printk("<7>%s: Modem status status.\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c");
                    }
                  } else {

                  }
                  }
                  goto while_break___9;
                }
                while_break___9: /* CIL Label */ ;
                }
                {
                __cil_tmp98 = RxCount - 4U;
                __cil_tmp99 = (unsigned int )i;
                if (__cil_tmp99 > __cil_tmp98) {
                  {
                  while (1) {
                    while_continue___10: /* CIL Label */ ;
                    {
                    __cil_tmp100 = & debug;
                    if (*__cil_tmp100) {
                      {
                      printk("<7>%s: Illegal escape sequences in received data\n\n",
                             "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c");
                      }
                    } else {

                    }
                    }
                    goto while_break___10;
                  }
                  while_break___10: /* CIL Label */ ;
                  }
                  goto switch_break;
                } else {

                }
                }
                {
                __cil_tmp101 = i + 3;
                __cil_tmp102 = data + __cil_tmp101;
                __cil_tmp103 = *__cil_tmp102;
                ProcessModemStatus(qt_port, __cil_tmp103);
                i = i + 3;
                flag = 1;
                }
                goto switch_break;
                case_255: /* CIL Label */ 
                {
                while (1) {
                  while_continue___11: /* CIL Label */ ;
                  {
                  __cil_tmp104 = & debug;
                  if (*__cil_tmp104) {
                    {
                    printk("<7>%s: No status sequence.\n\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c");
                    }
                  } else {

                  }
                  }
                  goto while_break___11;
                }
                while_break___11: /* CIL Label */ ;
                }
                if (tty) {
                  {
                  __cil_tmp105 = data + i;
                  __cil_tmp106 = *__cil_tmp105;
                  ProcessRxChar(tty, port, __cil_tmp106);
                  __cil_tmp107 = i + 1;
                  __cil_tmp108 = data + __cil_tmp107;
                  __cil_tmp109 = *__cil_tmp108;
                  ProcessRxChar(tty, port, __cil_tmp109);
                  }
                } else {

                }
                i = i + 2;
                goto switch_break;
              } else {
                switch_break: /* CIL Label */ ;
              }
              }
              if (flag == 1) {
                goto __Cont;
              } else {

              }
            } else {

            }
            }
          } else {

          }
          }
        } else {

        }
        }
        if (tty) {
          {
          __cil_tmp110 = (unsigned long )urb;
          __cil_tmp111 = __cil_tmp110 + 140;
          if (*((u32 *)__cil_tmp111)) {
            {
            __cil_tmp112 = data + i;
            __cil_tmp113 = *__cil_tmp112;
            tty_insert_flip_char(tty, __cil_tmp113, (char)0);
            }
          } else {

          }
          }
        } else {

        }
        __Cont: /* CIL Label */ 
        i = i + 1;
      }
      while_break___7: /* CIL Label */ ;
      }
      {
      tty_flip_buffer_push(tty);
      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp114 = *((struct usb_device **)serial);
  __cil_tmp115 = (unsigned long )port;
  __cil_tmp116 = __cil_tmp115 + 472;
  __cil_tmp117 = *((__u8 *)__cil_tmp116);
  __cil_tmp118 = (unsigned int )__cil_tmp117;
  tmp___10 = __create_pipe(__cil_tmp114, __cil_tmp118);
  __cil_tmp119 = (unsigned long )port;
  __cil_tmp120 = __cil_tmp119 + 464;
  __cil_tmp121 = *((struct urb **)__cil_tmp120);
  __cil_tmp122 = *((struct usb_device **)serial);
  __cil_tmp123 = 3 << 30;
  __cil_tmp124 = (unsigned int )__cil_tmp123;
  __cil_tmp125 = __cil_tmp124 | tmp___10;
  __cil_tmp126 = __cil_tmp125 | 128U;
  __cil_tmp127 = (unsigned long )port;
  __cil_tmp128 = __cil_tmp127 + 464;
  __cil_tmp129 = *((struct urb **)__cil_tmp128);
  __cil_tmp130 = (unsigned long )__cil_tmp129;
  __cil_tmp131 = __cil_tmp130 + 104;
  __cil_tmp132 = *((void **)__cil_tmp131);
  __cil_tmp133 = (unsigned long )port;
  __cil_tmp134 = __cil_tmp133 + 464;
  __cil_tmp135 = *((struct urb **)__cil_tmp134);
  __cil_tmp136 = (unsigned long )__cil_tmp135;
  __cil_tmp137 = __cil_tmp136 + 136;
  __cil_tmp138 = *((u32 *)__cil_tmp137);
  __cil_tmp139 = (int )__cil_tmp138;
  __cil_tmp140 = (void *)port;
  usb_fill_bulk_urb(__cil_tmp121, __cil_tmp122, __cil_tmp126, __cil_tmp132, __cil_tmp139,
                    & qt_read_bulk_callback, __cil_tmp140);
  __cil_tmp141 = (unsigned long )port;
  __cil_tmp142 = __cil_tmp141 + 464;
  __cil_tmp143 = *((struct urb **)__cil_tmp142);
  result = usb_submit_urb(__cil_tmp143, 32U);
  }
  if (result) {
    {
    while (1) {
      while_continue___12: /* CIL Label */ ;
      {
      __cil_tmp144 = & debug;
      if (*__cil_tmp144) {
        {
        printk("<7>%s: %s - failed resubmitting read urb, error %d\n", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1659/dscv_tempdir/dscv/ri/32_1/drivers/staging/serqt_usb2/serqt_usb2.c.common.c",
               "qt_read_bulk_callback", result);
        }
      } else {

      }
      }
      goto while_break___12;
    }
    while_break___12: /* CIL Label */ ;
    }
  } else
  if (tty) {
    if (RxCount) {
      {
      tty_flip_buffer_push(tty);
      tty_schedule_flip(tty);
      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp145 = (unsigned long )port;
  __cil_tmp146 = __cil_tmp145 + 664;
  __cil_tmp147 = (struct work_struct *)__cil_tmp146;
  schedule_work(__cil_tmp147);
  }
  exit: 
  {
  tty_kref_put(tty);
  }
  return;
}
}
@