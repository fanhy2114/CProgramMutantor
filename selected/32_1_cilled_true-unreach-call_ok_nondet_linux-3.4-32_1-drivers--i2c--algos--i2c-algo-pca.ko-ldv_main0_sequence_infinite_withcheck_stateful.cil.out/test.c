static int pca_address(struct i2c_algo_pca_data *adap , struct i2c_msg *msg ) 
{ int sta ;
  int tmp___7 ;
  int addr ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int (*__cil_tmp10)(void *data , int reg ) ;
  void *__cil_tmp11 ;
  __u16 __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  __u16 __cil_tmp17 ;
  int __cil_tmp18 ;
  int *__cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  __u16 __cil_tmp23 ;
  int __cil_tmp24 ;
  __u16 __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  void (*__cil_tmp29)(void *data , int reg , int val ) ;
  void *__cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  void (*__cil_tmp33)(void *data , int reg , int val ) ;
  void *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  int (*__cil_tmp37)(void *data ) ;
  void *__cil_tmp38 ;

  {
  {
  __cil_tmp8 = (unsigned long )adap;
  __cil_tmp9 = __cil_tmp8 + 16;
  __cil_tmp10 = *((int (**)(void *data , int reg ))__cil_tmp9);
  __cil_tmp11 = *((void **)adap);
  tmp___7 = (*__cil_tmp10)(__cil_tmp11, 3);
  sta = tmp___7;
  __cil_tmp12 = *((__u16 *)msg);
  __cil_tmp13 = (int )__cil_tmp12;
  __cil_tmp14 = 127 & __cil_tmp13;
  addr = __cil_tmp14 << 1;
  }
  {
  __cil_tmp15 = (unsigned long )msg;
  __cil_tmp16 = __cil_tmp15 + 2;
  __cil_tmp17 = *((__u16 *)__cil_tmp16);
  __cil_tmp18 = (int )__cil_tmp17;
  if (__cil_tmp18 & 1) {
    addr = addr | 1;
  } else {

  }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    __cil_tmp19 = & i2c_debug;
    __cil_tmp20 = *__cil_tmp19;
    if (__cil_tmp20 >= 2) {
      {
      __cil_tmp21 = (unsigned long )msg;
      __cil_tmp22 = __cil_tmp21 + 2;
      __cil_tmp23 = *((__u16 *)__cil_tmp22);
      __cil_tmp24 = (int )__cil_tmp23;
      if (__cil_tmp24 & 1) {
        tmp___8 = 'R';
      } else {
        tmp___8 = 'W';
      }
      }
      {
      __cil_tmp25 = *((__u16 *)msg);
      __cil_tmp26 = (int )__cil_tmp25;
      printk("<7>=== SLAVE ADDRESS %#04x+%c=%#04x\n", __cil_tmp26, tmp___8, addr);
      }
    } else {

    }
    }
    goto while_break;
  }
  while_break: /* CIL Label */ ;
  }
  {
  __cil_tmp27 = (unsigned long )adap;
  __cil_tmp28 = __cil_tmp27 + 8;
  __cil_tmp29 = *((void (**)(void *data , int reg , int val ))__cil_tmp28);
  __cil_tmp30 = *((void **)adap);
  (*__cil_tmp29)(__cil_tmp30, 1, addr);
  sta = sta & -57;
  __cil_tmp31 = (unsigned long )adap;
  __cil_tmp32 = __cil_tmp31 + 8;
  __cil_tmp33 = *((void (**)(void *data , int reg , int val ))__cil_tmp32);
  __cil_tmp34 = *((void **)adap);
  (*__cil_tmp33)(__cil_tmp34, 3, sta);
  __cil_tmp35 = (unsigned long )adap;
  __cil_tmp36 = __cil_tmp35 + 24;
  __cil_tmp37 = *((int (**)(void *data ))__cil_tmp36);
  __cil_tmp38 = *((void **)adap);
  tmp___9 = (*__cil_tmp37)(__cil_tmp38);
  }
  return (tmp___9);
}
}
$
static int pca_rx_ack(struct i2c_algo_pca_data *adap , int ack ) 
{ int sta ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int (*__cil_tmp8)(void *data , int reg ) ;
  void *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  void (*__cil_tmp12)(void *data , int reg , int val ) ;
  void *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int (*__cil_tmp16)(void *data ) ;
  void *__cil_tmp17 ;

  {
  {
  __cil_tmp6 = (unsigned long )adap;
  __cil_tmp7 = __cil_tmp6 + 16;
  __cil_tmp8 = *((int (**)(void *data , int reg ))__cil_tmp7);
  __cil_tmp9 = *((void **)adap);
  tmp___7 = (*__cil_tmp8)(__cil_tmp9, 3);
  sta = tmp___7;
  sta = sta & -185;
  }
  if (ack) {
    sta = sta | 128;
  } else {

  }
  {
  __cil_tmp10 = (unsigned long )adap;
  __cil_tmp11 = __cil_tmp10 + 8;
  __cil_tmp12 = *((void (**)(void *data , int reg , int val ))__cil_tmp11);
  __cil_tmp13 = *((void **)adap);
  (*__cil_tmp12)(__cil_tmp13, 3, sta);
  __cil_tmp14 = (unsigned long )adap;
  __cil_tmp15 = __cil_tmp14 + 24;
  __cil_tmp16 = *((int (**)(void *data ))__cil_tmp15);
  __cil_tmp17 = *((void **)adap);
  tmp___8 = (*__cil_tmp16)(__cil_tmp17);
  }
  return (tmp___8);
}
}
@