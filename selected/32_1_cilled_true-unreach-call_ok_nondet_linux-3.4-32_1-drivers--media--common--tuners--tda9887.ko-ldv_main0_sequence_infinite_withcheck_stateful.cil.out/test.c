static void dump_write_message(struct dvb_frontend *fe , unsigned char *buf ) 
{ struct tda9887_priv *priv ;
  int tmp___7 ;
  int tmp___8 ;
  char const   *tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  char const   *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  char const   *tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  char const   *tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  char const   *tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  char const   *tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  char const   *tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  char const   *tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  int tmp___46 ;
  char const   *tmp___47 ;
  char const   *tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  char const   *tmp___53 ;
  char const   *tmp___54 ;
  char const   *tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  char const   *tmp___58 ;
  char const   *tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int tmp___63 ;
  unsigned long __cil_tmp61 ;
  unsigned long __cil_tmp62 ;
  void *__cil_tmp63 ;
  unsigned long __cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  unsigned long __cil_tmp66 ;
  unsigned long __cil_tmp67 ;
  unsigned long __cil_tmp68 ;
  unsigned long __cil_tmp69 ;
  struct i2c_adapter *__cil_tmp70 ;
  unsigned long __cil_tmp71 ;
  unsigned long __cil_tmp72 ;
  unsigned long __cil_tmp73 ;
  char *__cil_tmp74 ;
  u8 __cil_tmp75 ;
  int __cil_tmp76 ;
  unsigned char *__cil_tmp77 ;
  unsigned char __cil_tmp78 ;
  int __cil_tmp79 ;
  unsigned char *__cil_tmp80 ;
  unsigned char __cil_tmp81 ;
  int __cil_tmp82 ;
  unsigned long __cil_tmp83 ;
  unsigned long __cil_tmp84 ;
  unsigned long __cil_tmp85 ;
  unsigned long __cil_tmp86 ;
  unsigned long __cil_tmp87 ;
  unsigned long __cil_tmp88 ;
  struct i2c_adapter *__cil_tmp89 ;
  unsigned long __cil_tmp90 ;
  unsigned long __cil_tmp91 ;
  unsigned long __cil_tmp92 ;
  char *__cil_tmp93 ;
  u8 __cil_tmp94 ;
  int __cil_tmp95 ;
  unsigned char *__cil_tmp96 ;
  unsigned char __cil_tmp97 ;
  int __cil_tmp98 ;
  unsigned long __cil_tmp99 ;
  unsigned long __cil_tmp100 ;
  unsigned long __cil_tmp101 ;
  unsigned long __cil_tmp102 ;
  unsigned long __cil_tmp103 ;
  unsigned long __cil_tmp104 ;
  struct i2c_adapter *__cil_tmp105 ;
  unsigned long __cil_tmp106 ;
  unsigned long __cil_tmp107 ;
  unsigned long __cil_tmp108 ;
  char *__cil_tmp109 ;
  u8 __cil_tmp110 ;
  int __cil_tmp111 ;
  unsigned char *__cil_tmp112 ;
  unsigned char __cil_tmp113 ;
  int __cil_tmp114 ;
  unsigned long __cil_tmp115 ;
  unsigned long __cil_tmp116 ;
  unsigned long __cil_tmp117 ;
  unsigned long __cil_tmp118 ;
  unsigned long __cil_tmp119 ;
  unsigned long __cil_tmp120 ;
  struct i2c_adapter *__cil_tmp121 ;
  unsigned long __cil_tmp122 ;
  unsigned long __cil_tmp123 ;
  unsigned long __cil_tmp124 ;
  char *__cil_tmp125 ;
  u8 __cil_tmp126 ;
  int __cil_tmp127 ;
  unsigned long __cil_tmp128 ;
  unsigned long __cil_tmp129 ;
  unsigned long __cil_tmp130 ;
  unsigned long __cil_tmp131 ;
  unsigned long __cil_tmp132 ;
  unsigned long __cil_tmp133 ;
  struct i2c_adapter *__cil_tmp134 ;
  unsigned long __cil_tmp135 ;
  unsigned long __cil_tmp136 ;
  unsigned long __cil_tmp137 ;
  char *__cil_tmp138 ;
  u8 __cil_tmp139 ;
  int __cil_tmp140 ;
  unsigned char *__cil_tmp141 ;
  unsigned char __cil_tmp142 ;
  int __cil_tmp143 ;
  int __cil_tmp144 ;
  int __cil_tmp145 ;
  unsigned long __cil_tmp146 ;
  unsigned long __cil_tmp147 ;
  char *__cil_tmp148 ;
  unsigned char *__cil_tmp149 ;
  unsigned char __cil_tmp150 ;
  int __cil_tmp151 ;
  unsigned long __cil_tmp152 ;
  unsigned long __cil_tmp153 ;
  unsigned long __cil_tmp154 ;
  unsigned long __cil_tmp155 ;
  unsigned long __cil_tmp156 ;
  unsigned long __cil_tmp157 ;
  struct i2c_adapter *__cil_tmp158 ;
  unsigned long __cil_tmp159 ;
  unsigned long __cil_tmp160 ;
  unsigned long __cil_tmp161 ;
  char *__cil_tmp162 ;
  u8 __cil_tmp163 ;
  int __cil_tmp164 ;
  unsigned char *__cil_tmp165 ;
  unsigned char __cil_tmp166 ;
  int __cil_tmp167 ;
  unsigned long __cil_tmp168 ;
  unsigned long __cil_tmp169 ;
  unsigned long __cil_tmp170 ;
  unsigned long __cil_tmp171 ;
  unsigned long __cil_tmp172 ;
  unsigned long __cil_tmp173 ;
  struct i2c_adapter *__cil_tmp174 ;
  unsigned long __cil_tmp175 ;
  unsigned long __cil_tmp176 ;
  unsigned long __cil_tmp177 ;
  char *__cil_tmp178 ;
  u8 __cil_tmp179 ;
  int __cil_tmp180 ;
  unsigned char *__cil_tmp181 ;
  unsigned char __cil_tmp182 ;
  int __cil_tmp183 ;
  unsigned long __cil_tmp184 ;
  unsigned long __cil_tmp185 ;
  unsigned long __cil_tmp186 ;
  unsigned long __cil_tmp187 ;
  unsigned long __cil_tmp188 ;
  unsigned long __cil_tmp189 ;
  struct i2c_adapter *__cil_tmp190 ;
  unsigned long __cil_tmp191 ;
  unsigned long __cil_tmp192 ;
  unsigned long __cil_tmp193 ;
  char *__cil_tmp194 ;
  u8 __cil_tmp195 ;
  int __cil_tmp196 ;
  unsigned long __cil_tmp197 ;
  unsigned long __cil_tmp198 ;
  unsigned long __cil_tmp199 ;
  unsigned long __cil_tmp200 ;
  unsigned long __cil_tmp201 ;
  unsigned long __cil_tmp202 ;
  struct i2c_adapter *__cil_tmp203 ;
  unsigned long __cil_tmp204 ;
  unsigned long __cil_tmp205 ;
  unsigned long __cil_tmp206 ;
  char *__cil_tmp207 ;
  u8 __cil_tmp208 ;
  int __cil_tmp209 ;
  unsigned char *__cil_tmp210 ;
  unsigned char __cil_tmp211 ;
  int __cil_tmp212 ;
  unsigned long __cil_tmp213 ;
  unsigned long __cil_tmp214 ;
  unsigned long __cil_tmp215 ;
  unsigned long __cil_tmp216 ;
  unsigned long __cil_tmp217 ;
  unsigned long __cil_tmp218 ;
  struct i2c_adapter *__cil_tmp219 ;
  unsigned long __cil_tmp220 ;
  unsigned long __cil_tmp221 ;
  unsigned long __cil_tmp222 ;
  char *__cil_tmp223 ;
  u8 __cil_tmp224 ;
  int __cil_tmp225 ;
  unsigned char *__cil_tmp226 ;
  unsigned char __cil_tmp227 ;
  int __cil_tmp228 ;
  int __cil_tmp229 ;
  unsigned long __cil_tmp230 ;
  unsigned long __cil_tmp231 ;
  char *__cil_tmp232 ;
  unsigned long __cil_tmp233 ;
  unsigned long __cil_tmp234 ;
  unsigned long __cil_tmp235 ;
  unsigned long __cil_tmp236 ;
  unsigned long __cil_tmp237 ;
  unsigned long __cil_tmp238 ;
  struct i2c_adapter *__cil_tmp239 ;
  unsigned long __cil_tmp240 ;
  unsigned long __cil_tmp241 ;
  unsigned long __cil_tmp242 ;
  char *__cil_tmp243 ;
  u8 __cil_tmp244 ;
  int __cil_tmp245 ;
  unsigned char *__cil_tmp246 ;
  unsigned char __cil_tmp247 ;
  int __cil_tmp248 ;
  int __cil_tmp249 ;
  int __cil_tmp250 ;
  unsigned long __cil_tmp251 ;
  unsigned long __cil_tmp252 ;
  char *__cil_tmp253 ;
  unsigned char *__cil_tmp254 ;
  unsigned char __cil_tmp255 ;
  int __cil_tmp256 ;
  unsigned long __cil_tmp257 ;
  unsigned long __cil_tmp258 ;
  unsigned long __cil_tmp259 ;
  unsigned long __cil_tmp260 ;
  unsigned long __cil_tmp261 ;
  unsigned long __cil_tmp262 ;
  struct i2c_adapter *__cil_tmp263 ;
  unsigned long __cil_tmp264 ;
  unsigned long __cil_tmp265 ;
  unsigned long __cil_tmp266 ;
  char *__cil_tmp267 ;
  u8 __cil_tmp268 ;
  int __cil_tmp269 ;
  unsigned long __cil_tmp270 ;
  unsigned long __cil_tmp271 ;
  unsigned long __cil_tmp272 ;
  unsigned long __cil_tmp273 ;
  unsigned long __cil_tmp274 ;
  unsigned long __cil_tmp275 ;
  struct i2c_adapter *__cil_tmp276 ;
  unsigned long __cil_tmp277 ;
  unsigned long __cil_tmp278 ;
  unsigned long __cil_tmp279 ;
  char *__cil_tmp280 ;
  u8 __cil_tmp281 ;
  int __cil_tmp282 ;
  unsigned char *__cil_tmp283 ;
  unsigned char __cil_tmp284 ;
  int __cil_tmp285 ;
  unsigned long __cil_tmp286 ;
  unsigned long __cil_tmp287 ;
  unsigned long __cil_tmp288 ;
  unsigned long __cil_tmp289 ;
  unsigned long __cil_tmp290 ;
  unsigned long __cil_tmp291 ;
  struct i2c_adapter *__cil_tmp292 ;
  unsigned long __cil_tmp293 ;
  unsigned long __cil_tmp294 ;
  unsigned long __cil_tmp295 ;
  char *__cil_tmp296 ;
  u8 __cil_tmp297 ;
  int __cil_tmp298 ;
  unsigned char *__cil_tmp299 ;
  unsigned char __cil_tmp300 ;
  int __cil_tmp301 ;
  int __cil_tmp302 ;
  unsigned long __cil_tmp303 ;
  unsigned long __cil_tmp304 ;
  char *__cil_tmp305 ;
  unsigned char *__cil_tmp306 ;
  unsigned char __cil_tmp307 ;
  int __cil_tmp308 ;
  unsigned long __cil_tmp309 ;
  unsigned long __cil_tmp310 ;
  unsigned long __cil_tmp311 ;
  unsigned long __cil_tmp312 ;
  unsigned long __cil_tmp313 ;
  unsigned long __cil_tmp314 ;
  struct i2c_adapter *__cil_tmp315 ;
  unsigned long __cil_tmp316 ;
  unsigned long __cil_tmp317 ;
  unsigned long __cil_tmp318 ;
  char *__cil_tmp319 ;
  u8 __cil_tmp320 ;
  int __cil_tmp321 ;
  unsigned char *__cil_tmp322 ;
  unsigned char __cil_tmp323 ;
  int __cil_tmp324 ;
  unsigned long __cil_tmp325 ;
  unsigned long __cil_tmp326 ;
  unsigned long __cil_tmp327 ;
  unsigned long __cil_tmp328 ;
  unsigned long __cil_tmp329 ;
  unsigned long __cil_tmp330 ;
  struct i2c_adapter *__cil_tmp331 ;
  unsigned long __cil_tmp332 ;
  unsigned long __cil_tmp333 ;
  unsigned long __cil_tmp334 ;
  char *__cil_tmp335 ;
  u8 __cil_tmp336 ;
  int __cil_tmp337 ;
  unsigned char *__cil_tmp338 ;
  unsigned char __cil_tmp339 ;
  int __cil_tmp340 ;
  int __cil_tmp341 ;
  int __cil_tmp342 ;
  unsigned long __cil_tmp343 ;
  unsigned long __cil_tmp344 ;
  char *__cil_tmp345 ;
  unsigned char *__cil_tmp346 ;
  unsigned char __cil_tmp347 ;
  int __cil_tmp348 ;
  unsigned char *__cil_tmp349 ;
  unsigned char __cil_tmp350 ;
  int __cil_tmp351 ;
  unsigned long __cil_tmp352 ;
  unsigned long __cil_tmp353 ;
  unsigned long __cil_tmp354 ;
  unsigned long __cil_tmp355 ;
  unsigned long __cil_tmp356 ;
  unsigned long __cil_tmp357 ;
  struct i2c_adapter *__cil_tmp358 ;
  unsigned long __cil_tmp359 ;
  unsigned long __cil_tmp360 ;
  unsigned long __cil_tmp361 ;
  char *__cil_tmp362 ;
  u8 __cil_tmp363 ;
  int __cil_tmp364 ;
  unsigned long __cil_tmp365 ;
  unsigned long __cil_tmp366 ;
  unsigned long __cil_tmp367 ;
  unsigned long __cil_tmp368 ;
  unsigned long __cil_tmp369 ;
  unsigned long __cil_tmp370 ;
  struct i2c_adapter *__cil_tmp371 ;
  unsigned long __cil_tmp372 ;
  unsigned long __cil_tmp373 ;
  unsigned long __cil_tmp374 ;
  char *__cil_tmp375 ;
  u8 __cil_tmp376 ;
  int __cil_tmp377 ;
  unsigned char *__cil_tmp378 ;
  unsigned char __cil_tmp379 ;
  int __cil_tmp380 ;
  int __cil_tmp381 ;
  int __cil_tmp382 ;
  unsigned long __cil_tmp383 ;
  unsigned long __cil_tmp384 ;
  char *__cil_tmp385 ;
  unsigned char *__cil_tmp386 ;
  unsigned char __cil_tmp387 ;
  int __cil_tmp388 ;
  unsigned char *__cil_tmp389 ;
  unsigned char __cil_tmp390 ;
  int __cil_tmp391 ;
  unsigned char *__cil_tmp392 ;
  unsigned char __cil_tmp393 ;
  int __cil_tmp394 ;
  unsigned long __cil_tmp395 ;
  unsigned long __cil_tmp396 ;
  unsigned long __cil_tmp397 ;
  unsigned long __cil_tmp398 ;
  unsigned long __cil_tmp399 ;
  unsigned long __cil_tmp400 ;
  struct i2c_adapter *__cil_tmp401 ;
  unsigned long __cil_tmp402 ;
  unsigned long __cil_tmp403 ;
  unsigned long __cil_tmp404 ;
  char *__cil_tmp405 ;
  u8 __cil_tmp406 ;
  int __cil_tmp407 ;
  unsigned char *__cil_tmp408 ;
  unsigned char __cil_tmp409 ;
  int __cil_tmp410 ;
  unsigned char *__cil_tmp411 ;
  unsigned char __cil_tmp412 ;
  int __cil_tmp413 ;
  unsigned long __cil_tmp414 ;
  unsigned long __cil_tmp415 ;
  unsigned long __cil_tmp416 ;
  unsigned long __cil_tmp417 ;
  unsigned long __cil_tmp418 ;
  unsigned long __cil_tmp419 ;
  struct i2c_adapter *__cil_tmp420 ;
  unsigned long __cil_tmp421 ;
  unsigned long __cil_tmp422 ;
  unsigned long __cil_tmp423 ;
  char *__cil_tmp424 ;
  u8 __cil_tmp425 ;
  int __cil_tmp426 ;
  unsigned long __cil_tmp427 ;
  unsigned long __cil_tmp428 ;
  unsigned long __cil_tmp429 ;
  unsigned long __cil_tmp430 ;
  unsigned long __cil_tmp431 ;
  unsigned long __cil_tmp432 ;
  struct i2c_adapter *__cil_tmp433 ;
  unsigned long __cil_tmp434 ;
  unsigned long __cil_tmp435 ;
  unsigned long __cil_tmp436 ;
  char *__cil_tmp437 ;
  u8 __cil_tmp438 ;
  int __cil_tmp439 ;

  {
  __cil_tmp61 = (unsigned long )fe;
  __cil_tmp62 = __cil_tmp61 + 792;
  __cil_tmp63 = *((void **)__cil_tmp62);
  priv = (struct tda9887_priv *)__cil_tmp63;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      __cil_tmp64 = 0 + 8;
      __cil_tmp65 = (unsigned long )priv;
      __cil_tmp66 = __cil_tmp65 + __cil_tmp64;
      if (*((struct i2c_adapter **)__cil_tmp66)) {
        {
        __cil_tmp67 = 0 + 8;
        __cil_tmp68 = (unsigned long )priv;
        __cil_tmp69 = __cil_tmp68 + __cil_tmp67;
        __cil_tmp70 = *((struct i2c_adapter **)__cil_tmp69);
        tmp___7 = i2c_adapter_id(__cil_tmp70);
        tmp___8 = tmp___7;
        }
      } else {
        tmp___8 = -1;
      }
      }
      {
      __cil_tmp71 = 0 + 24;
      __cil_tmp72 = (unsigned long )priv;
      __cil_tmp73 = __cil_tmp72 + __cil_tmp71;
      __cil_tmp74 = *((char **)__cil_tmp73);
      __cil_tmp75 = *((u8 *)priv);
      __cil_tmp76 = (int )__cil_tmp75;
      __cil_tmp77 = buf + 1;
      __cil_tmp78 = *__cil_tmp77;
      __cil_tmp79 = (int )__cil_tmp78;
      printk("<6>%s %d-%04x: write: byte B 0x%02x\n", __cil_tmp74, tmp___8, __cil_tmp76,
             __cil_tmp79);
      }
      goto while_break___0;
    }
    while_break___0: /* CIL Label */ ;
    }
    goto while_break;
  }
  while_break: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;
      {
      __cil_tmp80 = buf + 1;
      __cil_tmp81 = *__cil_tmp80;
      __cil_tmp82 = (int )__cil_tmp81;
      if (__cil_tmp82 & 1) {
        tmp___9 = "video trap";
      } else {
        tmp___9 = "sound trap";
      }
      }
      {
      __cil_tmp83 = 0 + 8;
      __cil_tmp84 = (unsigned long )priv;
      __cil_tmp85 = __cil_tmp84 + __cil_tmp83;
      if (*((struct i2c_adapter **)__cil_tmp85)) {
        {
        __cil_tmp86 = 0 + 8;
        __cil_tmp87 = (unsigned long )priv;
        __cil_tmp88 = __cil_tmp87 + __cil_tmp86;
        __cil_tmp89 = *((struct i2c_adapter **)__cil_tmp88);
        tmp___10 = i2c_adapter_id(__cil_tmp89);
        tmp___11 = tmp___10;
        }
      } else {
        tmp___11 = -1;
      }
      }
      {
      __cil_tmp90 = 0 + 24;
      __cil_tmp91 = (unsigned long )priv;
      __cil_tmp92 = __cil_tmp91 + __cil_tmp90;
      __cil_tmp93 = *((char **)__cil_tmp92);
      __cil_tmp94 = *((u8 *)priv);
      __cil_tmp95 = (int )__cil_tmp94;
      printk("<6>%s %d-%04x:   B0   video mode      : %s\n", __cil_tmp93, tmp___11,
             __cil_tmp95, tmp___9);
      }
      goto while_break___2;
    }
    while_break___2: /* CIL Label */ ;
    }
    goto while_break___1;
  }
  while_break___1: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;
    {
    while (1) {
      while_continue___4: /* CIL Label */ ;
      {
      __cil_tmp96 = buf + 1;
      __cil_tmp97 = *__cil_tmp96;
      __cil_tmp98 = (int )__cil_tmp97;
      if (__cil_tmp98 & 2) {
        tmp___12 = "yes";
      } else {
        tmp___12 = "no";
      }
      }
      {
      __cil_tmp99 = 0 + 8;
      __cil_tmp100 = (unsigned long )priv;
      __cil_tmp101 = __cil_tmp100 + __cil_tmp99;
      if (*((struct i2c_adapter **)__cil_tmp101)) {
        {
        __cil_tmp102 = 0 + 8;
        __cil_tmp103 = (unsigned long )priv;
        __cil_tmp104 = __cil_tmp103 + __cil_tmp102;
        __cil_tmp105 = *((struct i2c_adapter **)__cil_tmp104);
        tmp___13 = i2c_adapter_id(__cil_tmp105);
        tmp___14 = tmp___13;
        }
      } else {
        tmp___14 = -1;
      }
      }
      {
      __cil_tmp106 = 0 + 24;
      __cil_tmp107 = (unsigned long )priv;
      __cil_tmp108 = __cil_tmp107 + __cil_tmp106;
      __cil_tmp109 = *((char **)__cil_tmp108);
      __cil_tmp110 = *((u8 *)priv);
      __cil_tmp111 = (int )__cil_tmp110;
      printk("<6>%s %d-%04x:   B1   auto mute fm    : %s\n", __cil_tmp109, tmp___14,
             __cil_tmp111, tmp___12);
      }
      goto while_break___4;
    }
    while_break___4: /* CIL Label */ ;
    }
    goto while_break___3;
  }
  while_break___3: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___5: /* CIL Label */ ;
    {
    while (1) {
      while_continue___6: /* CIL Label */ ;
      {
      __cil_tmp112 = buf + 1;
      __cil_tmp113 = *__cil_tmp112;
      __cil_tmp114 = (int )__cil_tmp113;
      if (__cil_tmp114 & 4) {
        tmp___15 = "QSS";
      } else {
        tmp___15 = "Intercarrier";
      }
      }
      {
      __cil_tmp115 = 0 + 8;
      __cil_tmp116 = (unsigned long )priv;
      __cil_tmp117 = __cil_tmp116 + __cil_tmp115;
      if (*((struct i2c_adapter **)__cil_tmp117)) {
        {
        __cil_tmp118 = 0 + 8;
        __cil_tmp119 = (unsigned long )priv;
        __cil_tmp120 = __cil_tmp119 + __cil_tmp118;
        __cil_tmp121 = *((struct i2c_adapter **)__cil_tmp120);
        tmp___16 = i2c_adapter_id(__cil_tmp121);
        tmp___17 = tmp___16;
        }
      } else {
        tmp___17 = -1;
      }
      }
      {
      __cil_tmp122 = 0 + 24;
      __cil_tmp123 = (unsigned long )priv;
      __cil_tmp124 = __cil_tmp123 + __cil_tmp122;
      __cil_tmp125 = *((char **)__cil_tmp124);
      __cil_tmp126 = *((u8 *)priv);
      __cil_tmp127 = (int )__cil_tmp126;
      printk("<6>%s %d-%04x:   B2   carrier mode    : %s\n", __cil_tmp125, tmp___17,
             __cil_tmp127, tmp___15);
      }
      goto while_break___6;
    }
    while_break___6: /* CIL Label */ ;
    }
    goto while_break___5;
  }
  while_break___5: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___7: /* CIL Label */ ;
    {
    while (1) {
      while_continue___8: /* CIL Label */ ;
      {
      __cil_tmp128 = 0 + 8;
      __cil_tmp129 = (unsigned long )priv;
      __cil_tmp130 = __cil_tmp129 + __cil_tmp128;
      if (*((struct i2c_adapter **)__cil_tmp130)) {
        {
        __cil_tmp131 = 0 + 8;
        __cil_tmp132 = (unsigned long )priv;
        __cil_tmp133 = __cil_tmp132 + __cil_tmp131;
        __cil_tmp134 = *((struct i2c_adapter **)__cil_tmp133);
        tmp___18 = i2c_adapter_id(__cil_tmp134);
        tmp___19 = tmp___18;
        }
      } else {
        tmp___19 = -1;
      }
      }
      {
      __cil_tmp135 = 0 + 24;
      __cil_tmp136 = (unsigned long )priv;
      __cil_tmp137 = __cil_tmp136 + __cil_tmp135;
      __cil_tmp138 = *((char **)__cil_tmp137);
      __cil_tmp139 = *((u8 *)priv);
      __cil_tmp140 = (int )__cil_tmp139;
      __cil_tmp141 = buf + 1;
      __cil_tmp142 = *__cil_tmp141;
      __cil_tmp143 = (int )__cil_tmp142;
      __cil_tmp144 = __cil_tmp143 & 24;
      __cil_tmp145 = __cil_tmp144 >> 3;
      __cil_tmp146 = __cil_tmp145 * 8UL;
      __cil_tmp147 = (unsigned long )(sound) + __cil_tmp146;
      __cil_tmp148 = *((char **)__cil_tmp147);
      printk("<6>%s %d-%04x:   B3-4 tv sound/radio  : %s\n", __cil_tmp138, tmp___19,
             __cil_tmp140, __cil_tmp148);
      }
      goto while_break___8;
    }
    while_break___8: /* CIL Label */ ;
    }
    goto while_break___7;
  }
  while_break___7: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___9: /* CIL Label */ ;
    {
    while (1) {
      while_continue___10: /* CIL Label */ ;
      {
      __cil_tmp149 = buf + 1;
      __cil_tmp150 = *__cil_tmp149;
      __cil_tmp151 = (int )__cil_tmp150;
      if (__cil_tmp151 & 32) {
        tmp___20 = "yes";
      } else {
        tmp___20 = "no";
      }
      }
      {
      __cil_tmp152 = 0 + 8;
      __cil_tmp153 = (unsigned long )priv;
      __cil_tmp154 = __cil_tmp153 + __cil_tmp152;
      if (*((struct i2c_adapter **)__cil_tmp154)) {
        {
        __cil_tmp155 = 0 + 8;
        __cil_tmp156 = (unsigned long )priv;
        __cil_tmp157 = __cil_tmp156 + __cil_tmp155;
        __cil_tmp158 = *((struct i2c_adapter **)__cil_tmp157);
        tmp___21 = i2c_adapter_id(__cil_tmp158);
        tmp___22 = tmp___21;
        }
      } else {
        tmp___22 = -1;
      }
      }
      {
      __cil_tmp159 = 0 + 24;
      __cil_tmp160 = (unsigned long )priv;
      __cil_tmp161 = __cil_tmp160 + __cil_tmp159;
      __cil_tmp162 = *((char **)__cil_tmp161);
      __cil_tmp163 = *((u8 *)priv);
      __cil_tmp164 = (int )__cil_tmp163;
      printk("<6>%s %d-%04x:   B5   force mute audio: %s\n", __cil_tmp162, tmp___22,
             __cil_tmp164, tmp___20);
      }
      goto while_break___10;
    }
    while_break___10: /* CIL Label */ ;
    }
    goto while_break___9;
  }
  while_break___9: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___11: /* CIL Label */ ;
    {
    while (1) {
      while_continue___12: /* CIL Label */ ;
      {
      __cil_tmp165 = buf + 1;
      __cil_tmp166 = *__cil_tmp165;
      __cil_tmp167 = (int )__cil_tmp166;
      if (__cil_tmp167 & 64) {
        tmp___23 = "high (inactive)";
      } else {
        tmp___23 = "low (active)";
      }
      }
      {
      __cil_tmp168 = 0 + 8;
      __cil_tmp169 = (unsigned long )priv;
      __cil_tmp170 = __cil_tmp169 + __cil_tmp168;
      if (*((struct i2c_adapter **)__cil_tmp170)) {
        {
        __cil_tmp171 = 0 + 8;
        __cil_tmp172 = (unsigned long )priv;
        __cil_tmp173 = __cil_tmp172 + __cil_tmp171;
        __cil_tmp174 = *((struct i2c_adapter **)__cil_tmp173);
        tmp___24 = i2c_adapter_id(__cil_tmp174);
        tmp___25 = tmp___24;
        }
      } else {
        tmp___25 = -1;
      }
      }
      {
      __cil_tmp175 = 0 + 24;
      __cil_tmp176 = (unsigned long )priv;
      __cil_tmp177 = __cil_tmp176 + __cil_tmp175;
      __cil_tmp178 = *((char **)__cil_tmp177);
      __cil_tmp179 = *((u8 *)priv);
      __cil_tmp180 = (int )__cil_tmp179;
      printk("<6>%s %d-%04x:   B6   output port 1   : %s\n", __cil_tmp178, tmp___25,
             __cil_tmp180, tmp___23);
      }
      goto while_break___12;
    }
    while_break___12: /* CIL Label */ ;
    }
    goto while_break___11;
  }
  while_break___11: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___13: /* CIL Label */ ;
    {
    while (1) {
      while_continue___14: /* CIL Label */ ;
      {
      __cil_tmp181 = buf + 1;
      __cil_tmp182 = *__cil_tmp181;
      __cil_tmp183 = (int )__cil_tmp182;
      if (__cil_tmp183 & 128) {
        tmp___26 = "high (inactive)";
      } else {
        tmp___26 = "low (active)";
      }
      }
      {
      __cil_tmp184 = 0 + 8;
      __cil_tmp185 = (unsigned long )priv;
      __cil_tmp186 = __cil_tmp185 + __cil_tmp184;
      if (*((struct i2c_adapter **)__cil_tmp186)) {
        {
        __cil_tmp187 = 0 + 8;
        __cil_tmp188 = (unsigned long )priv;
        __cil_tmp189 = __cil_tmp188 + __cil_tmp187;
        __cil_tmp190 = *((struct i2c_adapter **)__cil_tmp189);
        tmp___27 = i2c_adapter_id(__cil_tmp190);
        tmp___28 = tmp___27;
        }
      } else {
        tmp___28 = -1;
      }
      }
      {
      __cil_tmp191 = 0 + 24;
      __cil_tmp192 = (unsigned long )priv;
      __cil_tmp193 = __cil_tmp192 + __cil_tmp191;
      __cil_tmp194 = *((char **)__cil_tmp193);
      __cil_tmp195 = *((u8 *)priv);
      __cil_tmp196 = (int )__cil_tmp195;
      printk("<6>%s %d-%04x:   B7   output port 2   : %s\n", __cil_tmp194, tmp___28,
             __cil_tmp196, tmp___26);
      }
      goto while_break___14;
    }
    while_break___14: /* CIL Label */ ;
    }
    goto while_break___13;
  }
  while_break___13: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___15: /* CIL Label */ ;
    {
    while (1) {
      while_continue___16: /* CIL Label */ ;
      {
      __cil_tmp197 = 0 + 8;
      __cil_tmp198 = (unsigned long )priv;
      __cil_tmp199 = __cil_tmp198 + __cil_tmp197;
      if (*((struct i2c_adapter **)__cil_tmp199)) {
        {
        __cil_tmp200 = 0 + 8;
        __cil_tmp201 = (unsigned long )priv;
        __cil_tmp202 = __cil_tmp201 + __cil_tmp200;
        __cil_tmp203 = *((struct i2c_adapter **)__cil_tmp202);
        tmp___29 = i2c_adapter_id(__cil_tmp203);
        tmp___30 = tmp___29;
        }
      } else {
        tmp___30 = -1;
      }
      }
      {
      __cil_tmp204 = 0 + 24;
      __cil_tmp205 = (unsigned long )priv;
      __cil_tmp206 = __cil_tmp205 + __cil_tmp204;
      __cil_tmp207 = *((char **)__cil_tmp206);
      __cil_tmp208 = *((u8 *)priv);
      __cil_tmp209 = (int )__cil_tmp208;
      __cil_tmp210 = buf + 2;
      __cil_tmp211 = *__cil_tmp210;
      __cil_tmp212 = (int )__cil_tmp211;
      printk("<6>%s %d-%04x: write: byte C 0x%02x\n", __cil_tmp207, tmp___30, __cil_tmp209,
             __cil_tmp212);
      }
      goto while_break___16;
    }
    while_break___16: /* CIL Label */ ;
    }
    goto while_break___15;
  }
  while_break___15: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___17: /* CIL Label */ ;
    {
    while (1) {
      while_continue___18: /* CIL Label */ ;
      {
      __cil_tmp213 = 0 + 8;
      __cil_tmp214 = (unsigned long )priv;
      __cil_tmp215 = __cil_tmp214 + __cil_tmp213;
      if (*((struct i2c_adapter **)__cil_tmp215)) {
        {
        __cil_tmp216 = 0 + 8;
        __cil_tmp217 = (unsigned long )priv;
        __cil_tmp218 = __cil_tmp217 + __cil_tmp216;
        __cil_tmp219 = *((struct i2c_adapter **)__cil_tmp218);
        tmp___31 = i2c_adapter_id(__cil_tmp219);
        tmp___32 = tmp___31;
        }
      } else {
        tmp___32 = -1;
      }
      }
      {
      __cil_tmp220 = 0 + 24;
      __cil_tmp221 = (unsigned long )priv;
      __cil_tmp222 = __cil_tmp221 + __cil_tmp220;
      __cil_tmp223 = *((char **)__cil_tmp222);
      __cil_tmp224 = *((u8 *)priv);
      __cil_tmp225 = (int )__cil_tmp224;
      __cil_tmp226 = buf + 2;
      __cil_tmp227 = *__cil_tmp226;
      __cil_tmp228 = (int )__cil_tmp227;
      __cil_tmp229 = __cil_tmp228 & 31;
      __cil_tmp230 = __cil_tmp229 * 8UL;
      __cil_tmp231 = (unsigned long )(adjust___0) + __cil_tmp230;
      __cil_tmp232 = *((char **)__cil_tmp231);
      printk("<6>%s %d-%04x:   C0-4 top adjustment  : %s dB\n", __cil_tmp223, tmp___32,
             __cil_tmp225, __cil_tmp232);
      }
      goto while_break___18;
    }
    while_break___18: /* CIL Label */ ;
    }
    goto while_break___17;
  }
  while_break___17: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___19: /* CIL Label */ ;
    {
    while (1) {
      while_continue___20: /* CIL Label */ ;
      {
      __cil_tmp233 = 0 + 8;
      __cil_tmp234 = (unsigned long )priv;
      __cil_tmp235 = __cil_tmp234 + __cil_tmp233;
      if (*((struct i2c_adapter **)__cil_tmp235)) {
        {
        __cil_tmp236 = 0 + 8;
        __cil_tmp237 = (unsigned long )priv;
        __cil_tmp238 = __cil_tmp237 + __cil_tmp236;
        __cil_tmp239 = *((struct i2c_adapter **)__cil_tmp238);
        tmp___33 = i2c_adapter_id(__cil_tmp239);
        tmp___34 = tmp___33;
        }
      } else {
        tmp___34 = -1;
      }
      }
      {
      __cil_tmp240 = 0 + 24;
      __cil_tmp241 = (unsigned long )priv;
      __cil_tmp242 = __cil_tmp241 + __cil_tmp240;
      __cil_tmp243 = *((char **)__cil_tmp242);
      __cil_tmp244 = *((u8 *)priv);
      __cil_tmp245 = (int )__cil_tmp244;
      __cil_tmp246 = buf + 2;
      __cil_tmp247 = *__cil_tmp246;
      __cil_tmp248 = (int )__cil_tmp247;
      __cil_tmp249 = __cil_tmp248 & 96;
      __cil_tmp250 = __cil_tmp249 >> 5;
      __cil_tmp251 = __cil_tmp250 * 8UL;
      __cil_tmp252 = (unsigned long )(deemph) + __cil_tmp251;
      __cil_tmp253 = *((char **)__cil_tmp252);
      printk("<6>%s %d-%04x:   C5-6 de-emphasis     : %s\n", __cil_tmp243, tmp___34,
             __cil_tmp245, __cil_tmp253);
      }
      goto while_break___20;
    }
    while_break___20: /* CIL Label */ ;
    }
    goto while_break___19;
  }
  while_break___19: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___21: /* CIL Label */ ;
    {
    while (1) {
      while_continue___22: /* CIL Label */ ;
      {
      __cil_tmp254 = buf + 2;
      __cil_tmp255 = *__cil_tmp254;
      __cil_tmp256 = (int )__cil_tmp255;
      if (__cil_tmp256 & 128) {
        tmp___35 = "-6";
      } else {
        tmp___35 = "0";
      }
      }
      {
      __cil_tmp257 = 0 + 8;
      __cil_tmp258 = (unsigned long )priv;
      __cil_tmp259 = __cil_tmp258 + __cil_tmp257;
      if (*((struct i2c_adapter **)__cil_tmp259)) {
        {
        __cil_tmp260 = 0 + 8;
        __cil_tmp261 = (unsigned long )priv;
        __cil_tmp262 = __cil_tmp261 + __cil_tmp260;
        __cil_tmp263 = *((struct i2c_adapter **)__cil_tmp262);
        tmp___36 = i2c_adapter_id(__cil_tmp263);
        tmp___37 = tmp___36;
        }
      } else {
        tmp___37 = -1;
      }
      }
      {
      __cil_tmp264 = 0 + 24;
      __cil_tmp265 = (unsigned long )priv;
      __cil_tmp266 = __cil_tmp265 + __cil_tmp264;
      __cil_tmp267 = *((char **)__cil_tmp266);
      __cil_tmp268 = *((u8 *)priv);
      __cil_tmp269 = (int )__cil_tmp268;
      printk("<6>%s %d-%04x:   C7   audio gain      : %s\n", __cil_tmp267, tmp___37,
             __cil_tmp269, tmp___35);
      }
      goto while_break___22;
    }
    while_break___22: /* CIL Label */ ;
    }
    goto while_break___21;
  }
  while_break___21: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___23: /* CIL Label */ ;
    {
    while (1) {
      while_continue___24: /* CIL Label */ ;
      {
      __cil_tmp270 = 0 + 8;
      __cil_tmp271 = (unsigned long )priv;
      __cil_tmp272 = __cil_tmp271 + __cil_tmp270;
      if (*((struct i2c_adapter **)__cil_tmp272)) {
        {
        __cil_tmp273 = 0 + 8;
        __cil_tmp274 = (unsigned long )priv;
        __cil_tmp275 = __cil_tmp274 + __cil_tmp273;
        __cil_tmp276 = *((struct i2c_adapter **)__cil_tmp275);
        tmp___38 = i2c_adapter_id(__cil_tmp276);
        tmp___39 = tmp___38;
        }
      } else {
        tmp___39 = -1;
      }
      }
      {
      __cil_tmp277 = 0 + 24;
      __cil_tmp278 = (unsigned long )priv;
      __cil_tmp279 = __cil_tmp278 + __cil_tmp277;
      __cil_tmp280 = *((char **)__cil_tmp279);
      __cil_tmp281 = *((u8 *)priv);
      __cil_tmp282 = (int )__cil_tmp281;
      __cil_tmp283 = buf + 3;
      __cil_tmp284 = *__cil_tmp283;
      __cil_tmp285 = (int )__cil_tmp284;
      printk("<6>%s %d-%04x: write: byte E 0x%02x\n", __cil_tmp280, tmp___39, __cil_tmp282,
             __cil_tmp285);
      }
      goto while_break___24;
    }
    while_break___24: /* CIL Label */ ;
    }
    goto while_break___23;
  }
  while_break___23: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___25: /* CIL Label */ ;
    {
    while (1) {
      while_continue___26: /* CIL Label */ ;
      {
      __cil_tmp286 = 0 + 8;
      __cil_tmp287 = (unsigned long )priv;
      __cil_tmp288 = __cil_tmp287 + __cil_tmp286;
      if (*((struct i2c_adapter **)__cil_tmp288)) {
        {
        __cil_tmp289 = 0 + 8;
        __cil_tmp290 = (unsigned long )priv;
        __cil_tmp291 = __cil_tmp290 + __cil_tmp289;
        __cil_tmp292 = *((struct i2c_adapter **)__cil_tmp291);
        tmp___40 = i2c_adapter_id(__cil_tmp292);
        tmp___41 = tmp___40;
        }
      } else {
        tmp___41 = -1;
      }
      }
      {
      __cil_tmp293 = 0 + 24;
      __cil_tmp294 = (unsigned long )priv;
      __cil_tmp295 = __cil_tmp294 + __cil_tmp293;
      __cil_tmp296 = *((char **)__cil_tmp295);
      __cil_tmp297 = *((u8 *)priv);
      __cil_tmp298 = (int )__cil_tmp297;
      __cil_tmp299 = buf + 3;
      __cil_tmp300 = *__cil_tmp299;
      __cil_tmp301 = (int )__cil_tmp300;
      __cil_tmp302 = __cil_tmp301 & 3;
      __cil_tmp303 = __cil_tmp302 * 8UL;
      __cil_tmp304 = (unsigned long )(carrier) + __cil_tmp303;
      __cil_tmp305 = *((char **)__cil_tmp304);
      printk("<6>%s %d-%04x:   E0-1 sound carrier   : %s\n", __cil_tmp296, tmp___41,
             __cil_tmp298, __cil_tmp305);
      }
      goto while_break___26;
    }
    while_break___26: /* CIL Label */ ;
    }
    goto while_break___25;
  }
  while_break___25: /* CIL Label */ ;
  }
  {
  while (1) {
    while_continue___27: /* CIL Label */ ;
    {
    while (1) {
      while_continue___28: /* CIL Label */ ;
      {
      __cil_tmp306 = buf + 3;
      __cil_tmp307 = *__cil_tmp306;
      __cil_tmp308 = (int )__cil_tmp307;
      if (__cil_tmp308 & 64) {
        tmp___42 = "36";
      } else {
        tmp___42 = "13";
      }
      }
      {
      __cil_tmp309 = 0 + 8;
      __cil_tmp310 = (unsigned long )priv;
      __cil_tmp311 = __cil_tmp310 + __cil_tmp309;
      if (*((struct i2c_adapter **)__cil_tmp311)) {
        {
        __cil_tmp312 = 0 + 8;
        __cil_tmp313 = (unsigned long )priv;
        __cil_tmp314 = __cil_tmp313 + __cil_tmp312;
        __cil_tmp315 = *((struct i2c_adapter **)__cil_tmp314);
        tmp___43 = i2c_adapter_id(__cil_tmp315);
        tmp___44 = tmp___43;
        }
      } else {
        tmp___44 = -1;
      }
      }
      {
      __cil_tmp316 = 0 + 24;
      __cil_tmp317 = (unsigned long )priv;
      __cil_tmp318 = __cil_tmp317 + __cil_tmp316;
      __cil_tmp319 = *((char **)__cil_tmp318);
      __cil_tmp320 = *((u8 *)priv);
      __cil_tmp321 = (int )__cil_tmp320;
      printk("<6>%s %d-%04x:   E6   l pll gating   : %s\n", __cil_tmp319, tmp___44,
             __cil_tmp321, tmp___42);
      }
      goto while_break___28;
    }
    while_break___28: /* CIL Label */ ;
    }
    goto while_break___27;
  }
  while_break___27: /* CIL Label */ ;
  }
  {
  __cil_tmp322 = buf + 1;
  __cil_tmp323 = *__cil_tmp322;
  __cil_tmp324 = (int )__cil_tmp323;
  if (__cil_tmp324 & 8) {
    {
    while (1) {
      while_continue___29: /* CIL Label */ ;
      {
      while (1) {
        while_continue___30: /* CIL Label */ ;
        {
        __cil_tmp325 = 0 + 8;
        __cil_tmp326 = (unsigned long )priv;
        __cil_tmp327 = __cil_tmp326 + __cil_tmp325;
        if (*((struct i2c_adapter **)__cil_tmp327)) {
          {
          __cil_tmp328 = 0 + 8;
          __cil_tmp329 = (unsigned long )priv;
          __cil_tmp330 = __cil_tmp329 + __cil_tmp328;
          __cil_tmp331 = *((struct i2c_adapter **)__cil_tmp330);
          tmp___45 = i2c_adapter_id(__cil_tmp331);
          tmp___46 = tmp___45;
          }
        } else {
          tmp___46 = -1;
        }
        }
        {
        __cil_tmp332 = 0 + 24;
        __cil_tmp333 = (unsigned long )priv;
        __cil_tmp334 = __cil_tmp333 + __cil_tmp332;
        __cil_tmp335 = *((char **)__cil_tmp334);
        __cil_tmp336 = *((u8 *)priv);
        __cil_tmp337 = (int )__cil_tmp336;
        __cil_tmp338 = buf + 3;
        __cil_tmp339 = *__cil_tmp338;
        __cil_tmp340 = (int )__cil_tmp339;
        __cil_tmp341 = __cil_tmp340 & 12;
        __cil_tmp342 = __cil_tmp341 >> 2;
        __cil_tmp343 = __cil_tmp342 * 8UL;
        __cil_tmp344 = (unsigned long )(rif) + __cil_tmp343;
        __cil_tmp345 = *((char **)__cil_tmp344);
        printk("<6>%s %d-%04x:   E2-4 video if        : %s\n", __cil_tmp335, tmp___46,
               __cil_tmp337, __cil_tmp345);
        }
        goto while_break___30;
      }
      while_break___30: /* CIL Label */ ;
      }
      goto while_break___29;
    }
    while_break___29: /* CIL Label */ ;
    }
    {
    while (1) {
      while_continue___31: /* CIL Label */ ;
      {
      while (1) {
        while_continue___32: /* CIL Label */ ;
        {
        __cil_tmp346 = buf + 3;
        __cil_tmp347 = *__cil_tmp346;
        __cil_tmp348 = (int )__cil_tmp347;
        if (__cil_tmp348 & 128) {
          {
          __cil_tmp349 = buf + 3;
          __cil_tmp350 = *__cil_tmp349;
          __cil_tmp351 = (int )__cil_tmp350;
          if (__cil_tmp351 & 16) {
            tmp___47 = "fm-agc radio";
          } else {
            tmp___47 = "sif-agc radio";
          }
          }
          tmp___48 = tmp___47;
        } else {
          tmp___48 = "fm radio carrier afc";
        }
        }
        {
        __cil_tmp352 = 0 + 8;
        __cil_tmp353 = (unsigned long )priv;
        __cil_tmp354 = __cil_tmp353 + __cil_tmp352;
        if (*((struct i2c_adapter **)__cil_tmp354)) {
          {
          __cil_tmp355 = 0 + 8;
          __cil_tmp356 = (unsigned long )priv;
          __cil_tmp357 = __cil_tmp356 + __cil_tmp355;
          __cil_tmp358 = *((struct i2c_adapter **)__cil_tmp357);
          tmp___49 = i2c_adapter_id(__cil_tmp358);
          tmp___50 = tmp___49;
          }
        } else {
          tmp___50 = -1;
        }
        }
        {
        __cil_tmp359 = 0 + 24;
        __cil_tmp360 = (unsigned long )priv;
        __cil_tmp361 = __cil_tmp360 + __cil_tmp359;
        __cil_tmp362 = *((char **)__cil_tmp361);
        __cil_tmp363 = *((u8 *)priv);
        __cil_tmp364 = (int )__cil_tmp363;
        printk("<6>%s %d-%04x:   E7   vif agc output  : %s\n", __cil_tmp362, tmp___50,
               __cil_tmp364, tmp___48);
        }
        goto while_break___32;
      }
      while_break___32: /* CIL Label */ ;
      }
      goto while_break___31;
    }
    while_break___31: /* CIL Label */ ;
    }
  } else {
    {
    while (1) {
      while_continue___33: /* CIL Label */ ;
      {
      while (1) {
        while_continue___34: /* CIL Label */ ;
        {
        __cil_tmp365 = 0 + 8;
        __cil_tmp366 = (unsigned long )priv;
        __cil_tmp367 = __cil_tmp366 + __cil_tmp365;
        if (*((struct i2c_adapter **)__cil_tmp367)) {
          {
          __cil_tmp368 = 0 + 8;
          __cil_tmp369 = (unsigned long )priv;
          __cil_tmp370 = __cil_tmp369 + __cil_tmp368;
          __cil_tmp371 = *((struct i2c_adapter **)__cil_tmp370);
          tmp___51 = i2c_adapter_id(__cil_tmp371);
          tmp___52 = tmp___51;
          }
        } else {
          tmp___52 = -1;
        }
        }
        {
        __cil_tmp372 = 0 + 24;
        __cil_tmp373 = (unsigned long )priv;
        __cil_tmp374 = __cil_tmp373 + __cil_tmp372;
        __cil_tmp375 = *((char **)__cil_tmp374);
        __cil_tmp376 = *((u8 *)priv);
        __cil_tmp377 = (int )__cil_tmp376;
        __cil_tmp378 = buf + 3;
        __cil_tmp379 = *__cil_tmp378;
        __cil_tmp380 = (int )__cil_tmp379;
        __cil_tmp381 = __cil_tmp380 & 28;
        __cil_tmp382 = __cil_tmp381 >> 2;
        __cil_tmp383 = __cil_tmp382 * 8UL;
        __cil_tmp384 = (unsigned long )(vif) + __cil_tmp383;
        __cil_tmp385 = *((char **)__cil_tmp384);
        printk("<6>%s %d-%04x:   E2-4 video if        : %s\n", __cil_tmp375, tmp___52,
               __cil_tmp377, __cil_tmp385);
        }
        goto while_break___34;
      }
      while_break___34: /* CIL Label */ ;
      }
      goto while_break___33;
    }
    while_break___33: /* CIL Label */ ;
    }
    {
    while (1) {
      while_continue___35: /* CIL Label */ ;
      {
      while (1) {
        while_continue___36: /* CIL Label */ ;
        {
        __cil_tmp386 = buf + 3;
        __cil_tmp387 = *__cil_tmp386;
        __cil_tmp388 = (int )__cil_tmp387;
        if (__cil_tmp388 & 128) {
          {
          __cil_tmp389 = buf + 3;
          __cil_tmp390 = *__cil_tmp389;
          __cil_tmp391 = (int )__cil_tmp390;
          if (__cil_tmp391 & 32) {
            tmp___53 = "external";
          } else {
            tmp___53 = "normal";
          }
          }
          tmp___55 = tmp___53;
        } else {
          {
          __cil_tmp392 = buf + 3;
          __cil_tmp393 = *__cil_tmp392;
          __cil_tmp394 = (int )__cil_tmp393;
          if (__cil_tmp394 & 32) {
            tmp___54 = "minimum";
          } else {
            tmp___54 = "normal";
          }
          }
          tmp___55 = tmp___54;
        }
        }
        {
        __cil_tmp395 = 0 + 8;
        __cil_tmp396 = (unsigned long )priv;
        __cil_tmp397 = __cil_tmp396 + __cil_tmp395;
        if (*((struct i2c_adapter **)__cil_tmp397)) {
          {
          __cil_tmp398 = 0 + 8;
          __cil_tmp399 = (unsigned long )priv;
          __cil_tmp400 = __cil_tmp399 + __cil_tmp398;
          __cil_tmp401 = *((struct i2c_adapter **)__cil_tmp400);
          tmp___56 = i2c_adapter_id(__cil_tmp401);
          tmp___57 = tmp___56;
          }
        } else {
          tmp___57 = -1;
        }
        }
        {
        __cil_tmp402 = 0 + 24;
        __cil_tmp403 = (unsigned long )priv;
        __cil_tmp404 = __cil_tmp403 + __cil_tmp402;
        __cil_tmp405 = *((char **)__cil_tmp404);
        __cil_tmp406 = *((u8 *)priv);
        __cil_tmp407 = (int )__cil_tmp406;
        printk("<6>%s %d-%04x:   E5   tuner gain      : %s\n", __cil_tmp405, tmp___57,
               __cil_tmp407, tmp___55);
        }
        goto while_break___36;
      }
      while_break___36: /* CIL Label */ ;
      }
      goto while_break___35;
    }
    while_break___35: /* CIL Label */ ;
    }
    {
    while (1) {
      while_continue___37: /* CIL Label */ ;
      {
      while (1) {
        while_continue___38: /* CIL Label */ ;
        {
        __cil_tmp408 = buf + 3;
        __cil_tmp409 = *__cil_tmp408;
        __cil_tmp410 = (int )__cil_tmp409;
        if (__cil_tmp410 & 128) {
          {
          __cil_tmp411 = buf + 3;
          __cil_tmp412 = *__cil_tmp411;
          __cil_tmp413 = (int )__cil_tmp412;
          if (__cil_tmp413 & 32) {
            tmp___58 = "pin3 port, pin22 vif agc out";
          } else {
            tmp___58 = "pin22 port, pin3 vif acg ext in";
          }
          }
          tmp___59 = tmp___58;
        } else {
          tmp___59 = "pin3+pin22 port";
        }
        }
        {
        __cil_tmp414 = 0 + 8;
        __cil_tmp415 = (unsigned long )priv;
        __cil_tmp416 = __cil_tmp415 + __cil_tmp414;
        if (*((struct i2c_adapter **)__cil_tmp416)) {
          {
          __cil_tmp417 = 0 + 8;
          __cil_tmp418 = (unsigned long )priv;
          __cil_tmp419 = __cil_tmp418 + __cil_tmp417;
          __cil_tmp420 = *((struct i2c_adapter **)__cil_tmp419);
          tmp___60 = i2c_adapter_id(__cil_tmp420);
          tmp___61 = tmp___60;
          }
        } else {
          tmp___61 = -1;
        }
        }
        {
        __cil_tmp421 = 0 + 24;
        __cil_tmp422 = (unsigned long )priv;
        __cil_tmp423 = __cil_tmp422 + __cil_tmp421;
        __cil_tmp424 = *((char **)__cil_tmp423);
        __cil_tmp425 = *((u8 *)priv);
        __cil_tmp426 = (int )__cil_tmp425;
        printk("<6>%s %d-%04x:   E7   vif agc output  : %s\n", __cil_tmp424, tmp___61,
               __cil_tmp426, tmp___59);
        }
        goto while_break___38;
      }
      while_break___38: /* CIL Label */ ;
      }
      goto while_break___37;
    }
    while_break___37: /* CIL Label */ ;
    }
  }
  }
  {
  while (1) {
    while_continue___39: /* CIL Label */ ;
    {
    while (1) {
      while_continue___40: /* CIL Label */ ;
      {
      __cil_tmp427 = 0 + 8;
      __cil_tmp428 = (unsigned long )priv;
      __cil_tmp429 = __cil_tmp428 + __cil_tmp427;
      if (*((struct i2c_adapter **)__cil_tmp429)) {
        {
        __cil_tmp430 = 0 + 8;
        __cil_tmp431 = (unsigned long )priv;
        __cil_tmp432 = __cil_tmp431 + __cil_tmp430;
        __cil_tmp433 = *((struct i2c_adapter **)__cil_tmp432);
        tmp___62 = i2c_adapter_id(__cil_tmp433);
        tmp___63 = tmp___62;
        }
      } else {
        tmp___63 = -1;
      }
      }
      {
      __cil_tmp434 = 0 + 24;
      __cil_tmp435 = (unsigned long )priv;
      __cil_tmp436 = __cil_tmp435 + __cil_tmp434;
      __cil_tmp437 = *((char **)__cil_tmp436);
      __cil_tmp438 = *((u8 *)priv);
      __cil_tmp439 = (int )__cil_tmp438;
      printk("<6>%s %d-%04x: --\n", __cil_tmp437, tmp___63, __cil_tmp439);
      }
      goto while_break___40;
    }
    while_break___40: /* CIL Label */ ;
    }
    goto while_break___39;
  }
  while_break___39: /* CIL Label */ ;
  }
  return;
}
}
@