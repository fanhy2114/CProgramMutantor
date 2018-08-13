int rtl2830_wr_reg_mask(struct rtl2830_priv *priv , u16 reg , u8 val , u8 mask ) 
{ int ret ;
  u8 tmp ;
  int tmp___0 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;
  u16 __cil_tmp10 ;
  u8 *__cil_tmp11 ;
  int __cil_tmp12 ;
  u8 *__cil_tmp13 ;
  u8 __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  u8 *__cil_tmp17 ;
  u8 *__cil_tmp18 ;
  u8 __cil_tmp19 ;
  signed char __cil_tmp20 ;
  int __cil_tmp21 ;
  signed char __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  u8 *__cil_tmp26 ;
  u8 *__cil_tmp27 ;
  u8 __cil_tmp28 ;
  int __cil_tmp29 ;
  u8 *__cil_tmp30 ;
  u8 __cil_tmp31 ;
  int __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  u16 __cil_tmp35 ;

  {
  {
  __cil_tmp8 = (unsigned int )mask;
  if (__cil_tmp8 != 255U) {
    {
    __cil_tmp9 = (int )reg;
    __cil_tmp10 = (u16 )__cil_tmp9;
    ret = rtl2830_rd_regs(priv, __cil_tmp10, & tmp, 1);
    }
    if (ret != 0) {
      return (ret);
    } else {

    }
    __cil_tmp11 = & val;
    __cil_tmp12 = (int )mask;
    __cil_tmp13 = & val;
    __cil_tmp14 = *__cil_tmp13;
    __cil_tmp15 = (int )__cil_tmp14;
    __cil_tmp16 = __cil_tmp15 & __cil_tmp12;
    *__cil_tmp11 = (u8 )__cil_tmp16;
    __cil_tmp17 = & tmp;
    __cil_tmp18 = & tmp;
    __cil_tmp19 = *__cil_tmp18;
    __cil_tmp20 = (signed char )__cil_tmp19;
    __cil_tmp21 = (int )__cil_tmp20;
    __cil_tmp22 = (signed char )mask;
    __cil_tmp23 = (int )__cil_tmp22;
    __cil_tmp24 = ~ __cil_tmp23;
    __cil_tmp25 = __cil_tmp24 & __cil_tmp21;
    *__cil_tmp17 = (u8 )__cil_tmp25;
    __cil_tmp26 = & val;
    __cil_tmp27 = & tmp;
    __cil_tmp28 = *__cil_tmp27;
    __cil_tmp29 = (int )__cil_tmp28;
    __cil_tmp30 = & val;
    __cil_tmp31 = *__cil_tmp30;
    __cil_tmp32 = (int )__cil_tmp31;
    __cil_tmp33 = __cil_tmp32 | __cil_tmp29;
    *__cil_tmp26 = (u8 )__cil_tmp33;
  } else {

  }
  }
  {
  __cil_tmp34 = (int )reg;
  __cil_tmp35 = (u16 )__cil_tmp34;
  tmp___0 = rtl2830_wr_regs(priv, __cil_tmp35, & val, 1);
  }
  return (tmp___0);
}
}
$
static int rtl2830_read_status(struct dvb_frontend *fe , fe_status_t *status ) 
{ struct rtl2830_priv *priv ;
  int ret ;
  u8 tmp ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  void *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  bool __cil_tmp11 ;
  u16 __cil_tmp12 ;
  u8 __cil_tmp13 ;
  u8 *__cil_tmp14 ;
  u8 __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  fe_status_t __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  u8 *__cil_tmp20 ;
  u8 __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  fe_status_t __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  int *__cil_tmp26 ;
  int __cil_tmp27 ;

  {
  __cil_tmp6 = (unsigned long )fe;
  __cil_tmp7 = __cil_tmp6 + 760;
  __cil_tmp8 = *((void **)__cil_tmp7);
  priv = (struct rtl2830_priv *)__cil_tmp8;
  *status = (fe_status_t )0;
  {
  __cil_tmp9 = (unsigned long )priv;
  __cil_tmp10 = __cil_tmp9 + 2656;
  __cil_tmp11 = *((bool *)__cil_tmp10);
  if ((int )__cil_tmp11) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp12 = (u16 )849;
  __cil_tmp13 = (u8 )120;
  ret = rtl2830_rd_reg_mask(priv, __cil_tmp12, & tmp, __cil_tmp13);
  }
  if (ret != 0) {
    goto err;
  } else {

  }
  {
  __cil_tmp14 = & tmp;
  __cil_tmp15 = *__cil_tmp14;
  __cil_tmp16 = (unsigned int )__cil_tmp15;
  if (__cil_tmp16 == 11U) {
    __cil_tmp17 = *status;
    __cil_tmp18 = (unsigned int )__cil_tmp17;
    __cil_tmp19 = __cil_tmp18 | 31U;
    *status = (fe_status_t )__cil_tmp19;
  } else {
    {
    __cil_tmp20 = & tmp;
    __cil_tmp21 = *__cil_tmp20;
    __cil_tmp22 = (unsigned int )__cil_tmp21;
    if (__cil_tmp22 == 10U) {
      __cil_tmp23 = *status;
      __cil_tmp24 = (unsigned int )__cil_tmp23;
      __cil_tmp25 = __cil_tmp24 | 7U;
      *status = (fe_status_t )__cil_tmp25;
    } else {

    }
    }
  }
  }
  return (ret);
  err: ;
  {
  __cil_tmp26 = & rtl2830_debug;
  __cil_tmp27 = *__cil_tmp26;
  if (__cil_tmp27 != 0) {
    {
    printk("<6>rtl2830: %s: failed=%d\n", "rtl2830_read_status", ret);
    }
  } else {

  }
  }
  return (ret);
}
}
@