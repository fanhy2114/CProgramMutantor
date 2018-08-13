static int zf_ioctl(struct inode *inode , struct file *file , unsigned int cmd , unsigned long arg ) 
{ void *argp ;
  int *p ;
  unsigned long tmp ;
  int tmp___0 ;
  void const   *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  void *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  unsigned long __cil_tmp30 ;

  {
#line 316
  argp = (void *)arg;
#line 317
  p = (int *)argp;
#line 319
  if ((int )cmd == (__cil_tmp15 | __cil_tmp10)) {
    goto switch_2_exp_0;
  } else {
#line 324
    if ((int )cmd == (__cil_tmp23 | __cil_tmp17)) {
      goto switch_2_exp_1;
    } else {
#line 327
      if ((int )cmd == (__cil_tmp30 | __cil_tmp24)) {
        goto switch_2_exp_2;
      } else {
        {
        goto switch_2_default;
#line 318
        if (0) {
          switch_2_exp_0: /* CIL Label */ 
          {
#line 320
          __cil_tmp10 = 40UL << 16;
#line 320
          __cil_tmp11 = 87 << 8;
#line 320
          __cil_tmp12 = (unsigned int )__cil_tmp11;
#line 320
          __cil_tmp13 = 2U << 30;
#line 320
          __cil_tmp14 = __cil_tmp13 | __cil_tmp12;
#line 320
          __cil_tmp15 = (unsigned long )__cil_tmp14;
          {
#line 320
          __cil_tmp9 = (void const   *)(& zf_info);
#line 320
          tmp = copy_to_user(argp, __cil_tmp9, 40UL);
          }
          }
#line 320
          if (tmp) {
#line 321
            return (-14);
          } else {

          }
          goto switch_2_break;
          switch_2_exp_1: /* CIL Label */ 
          {
#line 325
          __cil_tmp17 = 4UL << 16;
#line 325
          __cil_tmp18 = 87 << 8;
#line 325
          __cil_tmp19 = (unsigned int )__cil_tmp18;
#line 325
          __cil_tmp20 = 2U << 30;
#line 325
          __cil_tmp21 = __cil_tmp20 | __cil_tmp19;
#line 325
          __cil_tmp22 = __cil_tmp21 | 1U;
#line 325
          __cil_tmp23 = (unsigned long )__cil_tmp22;
          {
#line 325
          __cil_tmp16 = (void *)p;
#line 325
          tmp___0 = put_user(0, __cil_tmp16);
          }
          }
#line 325
          return (tmp___0);
          switch_2_exp_2: /* CIL Label */ 
          {
#line 328
          __cil_tmp24 = 4UL << 16;
#line 328
          __cil_tmp25 = 87 << 8;
#line 328
          __cil_tmp26 = (unsigned int )__cil_tmp25;
#line 328
          __cil_tmp27 = 2U << 30;
#line 328
          __cil_tmp28 = __cil_tmp27 | __cil_tmp26;
#line 328
          __cil_tmp29 = __cil_tmp28 | 5U;
#line 328
          __cil_tmp30 = (unsigned long )__cil_tmp29;
          {
#line 328
          zf_ping(0UL);
          }
          }
          goto switch_2_break;
          switch_2_default: /* CIL Label */ ;
#line 332
          return (-25);
        } else {
          switch_2_break: /* CIL Label */ ;
        }
        }
      }
    }
  }
#line 335
  return (0);
}
}
$
void call_genhd_functions(void) 
{ unsigned short genhd_no ;
  unsigned short function_no ;
  unsigned int uint_value ;
  unsigned long ulong_value ;
  void *tmp ;
  struct hd_geometry hdg ;
  struct block_device blk_dev ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  struct block_device_operations *__cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  struct block_device_operations *__cil_tmp16 ;
  int (*__cil_tmp17)(struct inode * , struct file * ) ;
  struct inode *__cil_tmp18 ;
  struct file *__cil_tmp19 ;
  struct block_device_operations *__cil_tmp20 ;
  struct block_device_operations *__cil_tmp21 ;
  int (*__cil_tmp22)(struct inode * , struct file * ) ;
  struct inode *__cil_tmp23 ;
  struct file *__cil_tmp24 ;
  struct block_device_operations *__cil_tmp25 ;
  struct block_device_operations *__cil_tmp26 ;
  int (*__cil_tmp27)(struct inode * , struct file * , unsigned int  , unsigned long  ) ;
  struct inode *__cil_tmp28 ;
  struct file *__cil_tmp29 ;
  struct block_device_operations *__cil_tmp30 ;
  struct block_device_operations *__cil_tmp31 ;
  int (*__cil_tmp32)(struct gendisk * ) ;
  struct block_device_operations *__cil_tmp33 ;
  struct block_device_operations *__cil_tmp34 ;
  int (*__cil_tmp35)(struct gendisk * ) ;
  struct block_device_operations *__cil_tmp36 ;
  struct block_device_operations *__cil_tmp37 ;
  int (*__cil_tmp38)(struct block_device * , struct hd_geometry * ) ;

  {
  {
#line 321
  __cil_tmp9 = (int )number_genhd_registered;
#line 321
  if (__cil_tmp9 == 0) {
#line 322
    return;
  } else {

  }
  }
  {
#line 325
  genhd_no = __VERIFIER_nondet_ushort();
#line 326
  __cil_tmp10 = (int )number_genhd_registered;
#line 326
  __cil_tmp11 = (int )genhd_no;
#line 326
  __cil_tmp12 = __cil_tmp11 < __cil_tmp10;
#line 326
  __VERIFIER_assume(__cil_tmp12);
#line 329
  function_no = __VERIFIER_nondet_ushort();
  }
#line 332
  if ((int )function_no == 0) {
    goto switch_8_0;
  } else {
#line 336
    if ((int )function_no == 1) {
      goto switch_8_1;
    } else {
#line 346
      if ((int )function_no == 2) {
        goto switch_8_2;
      } else {
#line 353
        if ((int )function_no == 3) {
          goto switch_8_3;
        } else {
#line 364
          if ((int )function_no == 4) {
            goto switch_8_4;
          } else {
#line 370
            if ((int )function_no == 5) {
              goto switch_8_5;
            } else {
#line 376
              if ((int )function_no == 6) {
                goto switch_8_6;
              } else {
                {
                goto switch_8_default;
#line 331
                if (0) {
                  switch_8_0: /* CIL Label */ 
                  {
#line 333
                  __cil_tmp13 = (int )genhd_no;
#line 333
                  call_rq_function(__cil_tmp13);
                  }
                  goto switch_8_break;
                  switch_8_1: /* CIL Label */ 
                  {
#line 337
                  __cil_tmp14 = (genhd_registered[genhd_no].gd)->fops;
#line 337
                  if (__cil_tmp14->open) {
                    {
#line 338
                    __cil_tmp15 = (unsigned int )32UL;
#line 338
                    tmp = malloc(__cil_tmp15);
#line 338
                    genhd_registered[genhd_no].inode.i_bdev = (struct block_device *)tmp;
#line 339
                    (genhd_registered[genhd_no].inode.i_bdev)->bd_disk = genhd_registered[genhd_no].gd;
#line 341
                    __cil_tmp16 = (genhd_registered[genhd_no].gd)->fops;
#line 341
                    __cil_tmp17 = __cil_tmp16->open;
#line 341
                    __cil_tmp18 = & genhd_registered[genhd_no].inode;
#line 341
                    __cil_tmp19 = & genhd_registered[genhd_no].file;
#line 341
                    (*__cil_tmp17)(__cil_tmp18, __cil_tmp19);
                    }
                  } else {

                  }
                  }
                  goto switch_8_break;
                  switch_8_2: /* CIL Label */ 
                  {
#line 347
                  __cil_tmp20 = (genhd_registered[genhd_no].gd)->fops;
#line 347
                  if (__cil_tmp20->release) {
                    {
#line 348
                    __cil_tmp21 = (genhd_registered[genhd_no].gd)->fops;
#line 348
                    __cil_tmp22 = __cil_tmp21->release;
#line 348
                    __cil_tmp23 = & genhd_registered[genhd_no].inode;
#line 348
                    __cil_tmp24 = & genhd_registered[genhd_no].file;
#line 348
                    (*__cil_tmp22)(__cil_tmp23, __cil_tmp24);
                    }
                  } else {

                  }
                  }
                  goto switch_8_break;
                  switch_8_3: /* CIL Label */ 
                  {
#line 354
                  __cil_tmp25 = (genhd_registered[genhd_no].gd)->fops;
#line 354
                  if (__cil_tmp25->ioctl) {
                    {
#line 355
                    uint_value = __VERIFIER_nondet_uint();
#line 356
                    ulong_value = __VERIFIER_nondet_ulong();
#line 357
                    __cil_tmp26 = (genhd_registered[genhd_no].gd)->fops;
#line 357
                    __cil_tmp27 = __cil_tmp26->ioctl;
#line 357
                    __cil_tmp28 = & genhd_registered[genhd_no].inode;
#line 357
                    __cil_tmp29 = & genhd_registered[genhd_no].file;
#line 357
                    (*__cil_tmp27)(__cil_tmp28, __cil_tmp29, uint_value, ulong_value);
                    }
                  } else {

                  }
                  }
                  goto switch_8_break;
                  switch_8_4: /* CIL Label */ 
                  {
#line 365
                  __cil_tmp30 = (genhd_registered[genhd_no].gd)->fops;
#line 365
                  if (__cil_tmp30->media_changed) {
                    {
#line 366
                    __cil_tmp31 = (genhd_registered[genhd_no].gd)->fops;
#line 366
                    __cil_tmp32 = __cil_tmp31->media_changed;
#line 366
                    (*__cil_tmp32)(genhd_registered[genhd_no].gd);
                    }
                  } else {

                  }
                  }
                  goto switch_8_break;
                  switch_8_5: /* CIL Label */ 
                  {
#line 371
                  __cil_tmp33 = (genhd_registered[genhd_no].gd)->fops;
#line 371
                  if (__cil_tmp33->revalidate_disk) {
                    {
#line 372
                    __cil_tmp34 = (genhd_registered[genhd_no].gd)->fops;
#line 372
                    __cil_tmp35 = __cil_tmp34->revalidate_disk;
#line 372
                    (*__cil_tmp35)(genhd_registered[genhd_no].gd);
                    }
                  } else {

                  }
                  }
                  goto switch_8_break;
                  switch_8_6: /* CIL Label */ 
                  {
#line 377
                  __cil_tmp36 = (genhd_registered[genhd_no].gd)->fops;
#line 377
                  if (__cil_tmp36->getgeo) {
                    {
#line 381
                    blk_dev.bd_disk = genhd_registered[genhd_no].gd;
#line 383
                    __cil_tmp37 = (genhd_registered[genhd_no].gd)->fops;
#line 383
                    __cil_tmp38 = __cil_tmp37->getgeo;
#line 383
                    (*__cil_tmp38)(& blk_dev, & hdg);
                    }
                  } else {

                  }
                  }
                  goto switch_8_break;
                  switch_8_default: /* CIL Label */ ;
                  goto switch_8_break;
                } else {
                  switch_8_break: /* CIL Label */ ;
                }
                }
              }
            }
          }
        }
      }
    }
  }
#line 390
  return;
}
}
@