void __utac__exception__cf_handler_reset(void *exception ) 
{ struct __UTAC__EXCEPTION *excep ;
  struct __UTAC__CFLOW_FUNC *cf ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct __UTAC__CFLOW_FUNC *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int (*__cil_tmp10)(int  , int  ) ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct __UTAC__CFLOW_FUNC **mem_16 ;
  int (**mem_17)(int  , int  ) ;
  int *mem_18 ;
  struct __UTAC__CFLOW_FUNC **mem_19 ;

  {
  excep = (struct __UTAC__EXCEPTION *)exception;
  __cil_tmp5 = (unsigned long )excep;
  __cil_tmp6 = __cil_tmp5 + 24;
  mem_16 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp6;
  cf = *mem_16;
  {
  while (1) {
    while_3_continue: /* CIL Label */ ;
    {
    __cil_tmp7 = (struct __UTAC__CFLOW_FUNC *)0;
    __cil_tmp8 = (unsigned long )__cil_tmp7;
    __cil_tmp9 = (unsigned long )cf;
    if (__cil_tmp9 != __cil_tmp8) {

    } else {
      goto while_3_break;
    }
    }
    {
    mem_17 = (int (**)(int  , int  ))cf;
    __cil_tmp10 = *mem_17;
    __cil_tmp11 = (unsigned long )cf;
    __cil_tmp12 = __cil_tmp11 + 8;
    mem_18 = (int *)__cil_tmp12;
    __cil_tmp13 = *mem_18;
    (*__cil_tmp10)(4, __cil_tmp13);
    __cil_tmp14 = (unsigned long )cf;
    __cil_tmp15 = __cil_tmp14 + 16;
    mem_19 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp15;
    cf = *mem_19;
    }
  }
  while_3_break: /* CIL Label */ ;
  }
  {
  __utac__exception__cf_handler_free(exception);
  }
  return;
}
}
$
void *__utac__get_this_arg(int i , struct JoinPoint *this ) 
{ void *retValue_acc ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  void **__cil_tmp10 ;
  void **__cil_tmp11 ;
  int *mem_12 ;
  void ***mem_13 ;

  {
  if (i > 0) {
    {
    __cil_tmp4 = (unsigned long )this;
    __cil_tmp5 = __cil_tmp4 + 16;
    mem_12 = (int *)__cil_tmp5;
    __cil_tmp6 = *mem_12;
    if (i <= __cil_tmp6) {

    } else {
      {
      __assert_fail("i > 0 && i <= this->argsCount", "libacc.c",
                    123U, "__utac__get_this_arg");
      }
    }
    }
  } else {
    {
    __assert_fail("i > 0 && i <= this->argsCount", "libacc.c",
                  123U, "__utac__get_this_arg");
    }
  }
  __cil_tmp7 = i - 1;
  __cil_tmp8 = (unsigned long )this;
  __cil_tmp9 = __cil_tmp8 + 8;
  mem_13 = (void ***)__cil_tmp9;
  __cil_tmp10 = *mem_13;
  __cil_tmp11 = __cil_tmp10 + __cil_tmp7;
  retValue_acc = *__cil_tmp11;
  return (retValue_acc);
  return (retValue_acc);
}
}
@