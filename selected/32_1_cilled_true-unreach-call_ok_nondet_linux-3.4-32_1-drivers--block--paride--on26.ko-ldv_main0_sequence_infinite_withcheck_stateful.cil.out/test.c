static void on26_write_regr(PIA *pi , int cont , int regr , int val ) 
{ int r ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  int __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  int __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  int __cil_tmp41 ;
  int __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  unsigned long __cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  int __cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  int __cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  unsigned long __cil_tmp59 ;
  unsigned long __cil_tmp60 ;
  int __cil_tmp61 ;
  int __cil_tmp62 ;
  unsigned long __cil_tmp63 ;
  unsigned long __cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  unsigned long __cil_tmp66 ;
  int __cil_tmp67 ;
  unsigned long __cil_tmp68 ;
  unsigned long __cil_tmp69 ;
  unsigned long __cil_tmp70 ;
  int __cil_tmp71 ;
  int __cil_tmp72 ;
  unsigned long __cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  unsigned long __cil_tmp75 ;
  unsigned long __cil_tmp76 ;
  int __cil_tmp77 ;
  unsigned long __cil_tmp78 ;
  unsigned char __cil_tmp79 ;
  unsigned long __cil_tmp80 ;
  unsigned long __cil_tmp81 ;
  int __cil_tmp82 ;
  unsigned long __cil_tmp83 ;
  unsigned long __cil_tmp84 ;
  unsigned long __cil_tmp85 ;
  unsigned long __cil_tmp86 ;
  int __cil_tmp87 ;
  unsigned long __cil_tmp88 ;
  unsigned long __cil_tmp89 ;
  unsigned long __cil_tmp90 ;
  int __cil_tmp91 ;
  int __cil_tmp92 ;
  unsigned long __cil_tmp93 ;
  unsigned long __cil_tmp94 ;
  unsigned long __cil_tmp95 ;
  unsigned long __cil_tmp96 ;
  int __cil_tmp97 ;
  unsigned long __cil_tmp98 ;
  unsigned long __cil_tmp99 ;
  unsigned long __cil_tmp100 ;
  int __cil_tmp101 ;
  int __cil_tmp102 ;
  unsigned long __cil_tmp103 ;
  unsigned long __cil_tmp104 ;
  unsigned long __cil_tmp105 ;
  unsigned long __cil_tmp106 ;
  int __cil_tmp107 ;
  unsigned long __cil_tmp108 ;
  unsigned long __cil_tmp109 ;
  unsigned long __cil_tmp110 ;
  int __cil_tmp111 ;
  int __cil_tmp112 ;
  unsigned long __cil_tmp113 ;
  unsigned long __cil_tmp114 ;
  unsigned long __cil_tmp115 ;
  unsigned long __cil_tmp116 ;
  int __cil_tmp117 ;
  unsigned long __cil_tmp118 ;
  unsigned long __cil_tmp119 ;
  unsigned long __cil_tmp120 ;
  int __cil_tmp121 ;
  int __cil_tmp122 ;
  unsigned long __cil_tmp123 ;
  unsigned long __cil_tmp124 ;
  unsigned long __cil_tmp125 ;
  unsigned long __cil_tmp126 ;
  int __cil_tmp127 ;
  unsigned long __cil_tmp128 ;
  unsigned long __cil_tmp129 ;
  unsigned long __cil_tmp130 ;
  int __cil_tmp131 ;
  unsigned long __cil_tmp132 ;
  unsigned long __cil_tmp133 ;
  unsigned long __cil_tmp134 ;
  unsigned long __cil_tmp135 ;
  int __cil_tmp136 ;
  unsigned long __cil_tmp137 ;
  unsigned long __cil_tmp138 ;
  unsigned long __cil_tmp139 ;
  int __cil_tmp140 ;
  int __cil_tmp141 ;
  unsigned long __cil_tmp142 ;
  unsigned long __cil_tmp143 ;
  unsigned long __cil_tmp144 ;
  unsigned long __cil_tmp145 ;
  int __cil_tmp146 ;
  unsigned long __cil_tmp147 ;
  unsigned long __cil_tmp148 ;
  unsigned long __cil_tmp149 ;
  int __cil_tmp150 ;
  int __cil_tmp151 ;
  unsigned long __cil_tmp152 ;
  unsigned long __cil_tmp153 ;
  unsigned long __cil_tmp154 ;
  unsigned long __cil_tmp155 ;
  int __cil_tmp156 ;
  unsigned long __cil_tmp157 ;
  unsigned long __cil_tmp158 ;
  unsigned long __cil_tmp159 ;
  int __cil_tmp160 ;
  int __cil_tmp161 ;
  unsigned long __cil_tmp162 ;
  unsigned long __cil_tmp163 ;
  unsigned long __cil_tmp164 ;
  unsigned long __cil_tmp165 ;
  int __cil_tmp166 ;
  unsigned long __cil_tmp167 ;
  unsigned long __cil_tmp168 ;
  unsigned long __cil_tmp169 ;
  int __cil_tmp170 ;
  int __cil_tmp171 ;
  unsigned long __cil_tmp172 ;
  unsigned long __cil_tmp173 ;
  unsigned long __cil_tmp174 ;
  unsigned long __cil_tmp175 ;
  int __cil_tmp176 ;
  unsigned long __cil_tmp177 ;
  unsigned long __cil_tmp178 ;
  unsigned long __cil_tmp179 ;
  int __cil_tmp180 ;
  int __cil_tmp181 ;
  unsigned long __cil_tmp182 ;
  unsigned long __cil_tmp183 ;
  unsigned long __cil_tmp184 ;
  unsigned long __cil_tmp185 ;
  int __cil_tmp186 ;
  unsigned long __cil_tmp187 ;
  unsigned long __cil_tmp188 ;
  unsigned long __cil_tmp189 ;
  int __cil_tmp190 ;
  int __cil_tmp191 ;
  unsigned long __cil_tmp192 ;
  unsigned long __cil_tmp193 ;
  unsigned long __cil_tmp194 ;
  unsigned long __cil_tmp195 ;
  int __cil_tmp196 ;
  unsigned long __cil_tmp197 ;
  unsigned char __cil_tmp198 ;
  unsigned long __cil_tmp199 ;
  unsigned long __cil_tmp200 ;
  int __cil_tmp201 ;
  unsigned long __cil_tmp202 ;
  unsigned long __cil_tmp203 ;
  unsigned long __cil_tmp204 ;
  unsigned long __cil_tmp205 ;
  int __cil_tmp206 ;
  unsigned long __cil_tmp207 ;
  unsigned long __cil_tmp208 ;
  unsigned long __cil_tmp209 ;
  int __cil_tmp210 ;
  int __cil_tmp211 ;
  unsigned long __cil_tmp212 ;
  unsigned long __cil_tmp213 ;
  unsigned long __cil_tmp214 ;
  unsigned long __cil_tmp215 ;
  int __cil_tmp216 ;
  unsigned long __cil_tmp217 ;
  unsigned long __cil_tmp218 ;
  unsigned long __cil_tmp219 ;
  int __cil_tmp220 ;
  int __cil_tmp221 ;
  unsigned long __cil_tmp222 ;
  unsigned long __cil_tmp223 ;
  unsigned long __cil_tmp224 ;
  unsigned long __cil_tmp225 ;
  int __cil_tmp226 ;
  unsigned long __cil_tmp227 ;
  unsigned long __cil_tmp228 ;
  unsigned long __cil_tmp229 ;
  int __cil_tmp230 ;
  int __cil_tmp231 ;
  unsigned long __cil_tmp232 ;
  unsigned long __cil_tmp233 ;
  unsigned long __cil_tmp234 ;
  unsigned long __cil_tmp235 ;
  int __cil_tmp236 ;
  unsigned long __cil_tmp237 ;
  unsigned long __cil_tmp238 ;
  unsigned long __cil_tmp239 ;
  int __cil_tmp240 ;
  int __cil_tmp241 ;
  unsigned long __cil_tmp242 ;
  unsigned long __cil_tmp243 ;
  unsigned long __cil_tmp244 ;
  unsigned long __cil_tmp245 ;
  int __cil_tmp246 ;
  unsigned long __cil_tmp247 ;
  unsigned char __cil_tmp248 ;
  unsigned long __cil_tmp249 ;
  unsigned long __cil_tmp250 ;
  int __cil_tmp251 ;
  unsigned long __cil_tmp252 ;
  unsigned long __cil_tmp253 ;
  unsigned long __cil_tmp254 ;
  unsigned long __cil_tmp255 ;
  int __cil_tmp256 ;
  unsigned long __cil_tmp257 ;
  unsigned long __cil_tmp258 ;
  unsigned long __cil_tmp259 ;
  int __cil_tmp260 ;
  int __cil_tmp261 ;
  unsigned long __cil_tmp262 ;
  unsigned long __cil_tmp263 ;
  unsigned long __cil_tmp264 ;
  unsigned long __cil_tmp265 ;
  int __cil_tmp266 ;
  unsigned long __cil_tmp267 ;
  unsigned long __cil_tmp268 ;
  unsigned long __cil_tmp269 ;
  int __cil_tmp270 ;
  int __cil_tmp271 ;
  unsigned long __cil_tmp272 ;
  unsigned long __cil_tmp273 ;
  unsigned long __cil_tmp274 ;
  unsigned long __cil_tmp275 ;
  int __cil_tmp276 ;
  unsigned long __cil_tmp277 ;
  unsigned long __cil_tmp278 ;
  unsigned long __cil_tmp279 ;
  int __cil_tmp280 ;
  int __cil_tmp281 ;
  unsigned long __cil_tmp282 ;
  unsigned long __cil_tmp283 ;
  unsigned long __cil_tmp284 ;
  unsigned long __cil_tmp285 ;
  int __cil_tmp286 ;
  unsigned long __cil_tmp287 ;
  unsigned long __cil_tmp288 ;
  unsigned long __cil_tmp289 ;
  int __cil_tmp290 ;
  int __cil_tmp291 ;
  unsigned long __cil_tmp292 ;
  unsigned long __cil_tmp293 ;
  unsigned long __cil_tmp294 ;
  unsigned long __cil_tmp295 ;
  int __cil_tmp296 ;
  unsigned long __cil_tmp297 ;
  unsigned long __cil_tmp298 ;
  unsigned long __cil_tmp299 ;
  int __cil_tmp300 ;
  int __cil_tmp301 ;
  unsigned long __cil_tmp302 ;
  unsigned long __cil_tmp303 ;
  unsigned long __cil_tmp304 ;
  unsigned long __cil_tmp305 ;
  int __cil_tmp306 ;
  unsigned long __cil_tmp307 ;
  unsigned long __cil_tmp308 ;
  unsigned long __cil_tmp309 ;
  int __cil_tmp310 ;
  int __cil_tmp311 ;
  unsigned long __cil_tmp312 ;
  unsigned long __cil_tmp313 ;
  unsigned long __cil_tmp314 ;
  unsigned long __cil_tmp315 ;
  int __cil_tmp316 ;
  unsigned long __cil_tmp317 ;
  unsigned long __cil_tmp318 ;
  unsigned long __cil_tmp319 ;
  int __cil_tmp320 ;
  int __cil_tmp321 ;
  unsigned long __cil_tmp322 ;
  unsigned long __cil_tmp323 ;
  unsigned long __cil_tmp324 ;
  unsigned long __cil_tmp325 ;
  int __cil_tmp326 ;
  unsigned long __cil_tmp327 ;
  unsigned char __cil_tmp328 ;
  unsigned long __cil_tmp329 ;
  unsigned long __cil_tmp330 ;
  int __cil_tmp331 ;
  int __cil_tmp332 ;
  unsigned long __cil_tmp333 ;
  unsigned long __cil_tmp334 ;
  unsigned long __cil_tmp335 ;
  unsigned long __cil_tmp336 ;
  int __cil_tmp337 ;
  unsigned long __cil_tmp338 ;
  unsigned long __cil_tmp339 ;
  unsigned long __cil_tmp340 ;
  int __cil_tmp341 ;
  int __cil_tmp342 ;
  unsigned long __cil_tmp343 ;
  unsigned long __cil_tmp344 ;
  unsigned long __cil_tmp345 ;
  unsigned long __cil_tmp346 ;
  int __cil_tmp347 ;
  unsigned long __cil_tmp348 ;
  unsigned long __cil_tmp349 ;
  unsigned long __cil_tmp350 ;
  int __cil_tmp351 ;
  int __cil_tmp352 ;
  unsigned long __cil_tmp353 ;
  unsigned long __cil_tmp354 ;
  unsigned long __cil_tmp355 ;
  unsigned long __cil_tmp356 ;
  int __cil_tmp357 ;
  unsigned long __cil_tmp358 ;
  unsigned long __cil_tmp359 ;
  unsigned long __cil_tmp360 ;
  int __cil_tmp361 ;
  int __cil_tmp362 ;
  unsigned long __cil_tmp363 ;
  unsigned long __cil_tmp364 ;
  unsigned long __cil_tmp365 ;
  unsigned long __cil_tmp366 ;
  int __cil_tmp367 ;
  unsigned long __cil_tmp368 ;
  unsigned long __cil_tmp369 ;
  unsigned long __cil_tmp370 ;
  int __cil_tmp371 ;
  int __cil_tmp372 ;
  unsigned long __cil_tmp373 ;
  unsigned long __cil_tmp374 ;
  unsigned long __cil_tmp375 ;
  unsigned long __cil_tmp376 ;
  int __cil_tmp377 ;
  unsigned long __cil_tmp378 ;
  unsigned char __cil_tmp379 ;
  unsigned long __cil_tmp380 ;
  unsigned long __cil_tmp381 ;
  int __cil_tmp382 ;
  int __cil_tmp383 ;
  unsigned long __cil_tmp384 ;
  unsigned long __cil_tmp385 ;
  unsigned long __cil_tmp386 ;
  unsigned long __cil_tmp387 ;
  int __cil_tmp388 ;
  unsigned long __cil_tmp389 ;
  unsigned long __cil_tmp390 ;
  unsigned long __cil_tmp391 ;
  int __cil_tmp392 ;
  int __cil_tmp393 ;
  unsigned long __cil_tmp394 ;
  unsigned long __cil_tmp395 ;
  unsigned long __cil_tmp396 ;
  unsigned long __cil_tmp397 ;
  int __cil_tmp398 ;
  unsigned long __cil_tmp399 ;
  unsigned long __cil_tmp400 ;
  unsigned long __cil_tmp401 ;
  int __cil_tmp402 ;
  int __cil_tmp403 ;
  unsigned long __cil_tmp404 ;
  unsigned long __cil_tmp405 ;
  unsigned long __cil_tmp406 ;
  unsigned long __cil_tmp407 ;
  int __cil_tmp408 ;
  unsigned long __cil_tmp409 ;
  unsigned char __cil_tmp410 ;
  unsigned long __cil_tmp411 ;
  unsigned long __cil_tmp412 ;
  int __cil_tmp413 ;
  int __cil_tmp414 ;
  unsigned long __cil_tmp415 ;
  unsigned long __cil_tmp416 ;
  unsigned long __cil_tmp417 ;
  unsigned long __cil_tmp418 ;
  int __cil_tmp419 ;
  unsigned long __cil_tmp420 ;
  unsigned long __cil_tmp421 ;
  unsigned long __cil_tmp422 ;
  int __cil_tmp423 ;
  int __cil_tmp424 ;
  unsigned long __cil_tmp425 ;
  unsigned long __cil_tmp426 ;
  unsigned long __cil_tmp427 ;
  unsigned long __cil_tmp428 ;
  int __cil_tmp429 ;
  unsigned long __cil_tmp430 ;

  {
  __cil_tmp6 = regr << 2;
  __cil_tmp7 = __cil_tmp6 + 1;
  r = __cil_tmp7 + cont;
  {
  __cil_tmp8 = (unsigned long )pi;
  __cil_tmp9 = __cil_tmp8 + 12;
  if (*((int *)__cil_tmp9) == 0) {
    goto case_0;
  } else
  if (*((int *)__cil_tmp9) == 1) {
    goto case_0;
  } else
  if (*((int *)__cil_tmp9) == 2) {
    goto case_2;
  } else
  if (*((int *)__cil_tmp9) == 3) {
    goto case_2;
  } else
  if (*((int *)__cil_tmp9) == 4) {
    goto case_2;
  } else
  if (0) {
    case_0: /* CIL Label */ 
    case_1: /* CIL Label */ 
    {
    __cil_tmp10 = (unsigned long )pi;
    __cil_tmp11 = __cil_tmp10 + 8;
    __cil_tmp12 = *((int *)__cil_tmp11);
    outb((unsigned char)1, __cil_tmp12);
    }
    {
    __cil_tmp13 = (unsigned long )pi;
    __cil_tmp14 = __cil_tmp13 + 16;
    if (*((int *)__cil_tmp14)) {
      {
      __cil_tmp15 = (unsigned long )pi;
      __cil_tmp16 = __cil_tmp15 + 16;
      __cil_tmp17 = *((int *)__cil_tmp16);
      __cil_tmp18 = (unsigned long )__cil_tmp17;
      __udelay(__cil_tmp18);
      }
    } else {

    }
    }
    {
    __cil_tmp19 = (unsigned long )pi;
    __cil_tmp20 = __cil_tmp19 + 8;
    __cil_tmp21 = *((int *)__cil_tmp20);
    __cil_tmp22 = __cil_tmp21 + 2;
    outb((unsigned char)5, __cil_tmp22);
    }
    {
    __cil_tmp23 = (unsigned long )pi;
    __cil_tmp24 = __cil_tmp23 + 16;
    if (*((int *)__cil_tmp24)) {
      {
      __cil_tmp25 = (unsigned long )pi;
      __cil_tmp26 = __cil_tmp25 + 16;
      __cil_tmp27 = *((int *)__cil_tmp26);
      __cil_tmp28 = (unsigned long )__cil_tmp27;
      __udelay(__cil_tmp28);
      }
    } else {

    }
    }
    {
    __cil_tmp29 = (unsigned long )pi;
    __cil_tmp30 = __cil_tmp29 + 8;
    __cil_tmp31 = *((int *)__cil_tmp30);
    __cil_tmp32 = __cil_tmp31 + 2;
    outb((unsigned char)13, __cil_tmp32);
    }
    {
    __cil_tmp33 = (unsigned long )pi;
    __cil_tmp34 = __cil_tmp33 + 16;
    if (*((int *)__cil_tmp34)) {
      {
      __cil_tmp35 = (unsigned long )pi;
      __cil_tmp36 = __cil_tmp35 + 16;
      __cil_tmp37 = *((int *)__cil_tmp36);
      __cil_tmp38 = (unsigned long )__cil_tmp37;
      __udelay(__cil_tmp38);
      }
    } else {

    }
    }
    {
    __cil_tmp39 = (unsigned long )pi;
    __cil_tmp40 = __cil_tmp39 + 8;
    __cil_tmp41 = *((int *)__cil_tmp40);
    __cil_tmp42 = __cil_tmp41 + 2;
    outb((unsigned char)5, __cil_tmp42);
    }
    {
    __cil_tmp43 = (unsigned long )pi;
    __cil_tmp44 = __cil_tmp43 + 16;
    if (*((int *)__cil_tmp44)) {
      {
      __cil_tmp45 = (unsigned long )pi;
      __cil_tmp46 = __cil_tmp45 + 16;
      __cil_tmp47 = *((int *)__cil_tmp46);
      __cil_tmp48 = (unsigned long )__cil_tmp47;
      __udelay(__cil_tmp48);
      }
    } else {

    }
    }
    {
    __cil_tmp49 = (unsigned long )pi;
    __cil_tmp50 = __cil_tmp49 + 8;
    __cil_tmp51 = *((int *)__cil_tmp50);
    __cil_tmp52 = __cil_tmp51 + 2;
    outb((unsigned char)13, __cil_tmp52);
    }
    {
    __cil_tmp53 = (unsigned long )pi;
    __cil_tmp54 = __cil_tmp53 + 16;
    if (*((int *)__cil_tmp54)) {
      {
      __cil_tmp55 = (unsigned long )pi;
      __cil_tmp56 = __cil_tmp55 + 16;
      __cil_tmp57 = *((int *)__cil_tmp56);
      __cil_tmp58 = (unsigned long )__cil_tmp57;
      __udelay(__cil_tmp58);
      }
    } else {

    }
    }
    {
    __cil_tmp59 = (unsigned long )pi;
    __cil_tmp60 = __cil_tmp59 + 8;
    __cil_tmp61 = *((int *)__cil_tmp60);
    __cil_tmp62 = __cil_tmp61 + 2;
    outb((unsigned char)5, __cil_tmp62);
    }
    {
    __cil_tmp63 = (unsigned long )pi;
    __cil_tmp64 = __cil_tmp63 + 16;
    if (*((int *)__cil_tmp64)) {
      {
      __cil_tmp65 = (unsigned long )pi;
      __cil_tmp66 = __cil_tmp65 + 16;
      __cil_tmp67 = *((int *)__cil_tmp66);
      __cil_tmp68 = (unsigned long )__cil_tmp67;
      __udelay(__cil_tmp68);
      }
    } else {

    }
    }
    {
    __cil_tmp69 = (unsigned long )pi;
    __cil_tmp70 = __cil_tmp69 + 8;
    __cil_tmp71 = *((int *)__cil_tmp70);
    __cil_tmp72 = __cil_tmp71 + 2;
    outb((unsigned char)4, __cil_tmp72);
    }
    {
    __cil_tmp73 = (unsigned long )pi;
    __cil_tmp74 = __cil_tmp73 + 16;
    if (*((int *)__cil_tmp74)) {
      {
      __cil_tmp75 = (unsigned long )pi;
      __cil_tmp76 = __cil_tmp75 + 16;
      __cil_tmp77 = *((int *)__cil_tmp76);
      __cil_tmp78 = (unsigned long )__cil_tmp77;
      __udelay(__cil_tmp78);
      }
    } else {

    }
    }
    {
    __cil_tmp79 = (unsigned char )r;
    __cil_tmp80 = (unsigned long )pi;
    __cil_tmp81 = __cil_tmp80 + 8;
    __cil_tmp82 = *((int *)__cil_tmp81);
    outb(__cil_tmp79, __cil_tmp82);
    }
    {
    __cil_tmp83 = (unsigned long )pi;
    __cil_tmp84 = __cil_tmp83 + 16;
    if (*((int *)__cil_tmp84)) {
      {
      __cil_tmp85 = (unsigned long )pi;
      __cil_tmp86 = __cil_tmp85 + 16;
      __cil_tmp87 = *((int *)__cil_tmp86);
      __cil_tmp88 = (unsigned long )__cil_tmp87;
      __udelay(__cil_tmp88);
      }
    } else {

    }
    }
    {
    __cil_tmp89 = (unsigned long )pi;
    __cil_tmp90 = __cil_tmp89 + 8;
    __cil_tmp91 = *((int *)__cil_tmp90);
    __cil_tmp92 = __cil_tmp91 + 2;
    outb((unsigned char)5, __cil_tmp92);
    }
    {
    __cil_tmp93 = (unsigned long )pi;
    __cil_tmp94 = __cil_tmp93 + 16;
    if (*((int *)__cil_tmp94)) {
      {
      __cil_tmp95 = (unsigned long )pi;
      __cil_tmp96 = __cil_tmp95 + 16;
      __cil_tmp97 = *((int *)__cil_tmp96);
      __cil_tmp98 = (unsigned long )__cil_tmp97;
      __udelay(__cil_tmp98);
      }
    } else {

    }
    }
    {
    __cil_tmp99 = (unsigned long )pi;
    __cil_tmp100 = __cil_tmp99 + 8;
    __cil_tmp101 = *((int *)__cil_tmp100);
    __cil_tmp102 = __cil_tmp101 + 2;
    outb((unsigned char)7, __cil_tmp102);
    }
    {
    __cil_tmp103 = (unsigned long )pi;
    __cil_tmp104 = __cil_tmp103 + 16;
    if (*((int *)__cil_tmp104)) {
      {
      __cil_tmp105 = (unsigned long )pi;
      __cil_tmp106 = __cil_tmp105 + 16;
      __cil_tmp107 = *((int *)__cil_tmp106);
      __cil_tmp108 = (unsigned long )__cil_tmp107;
      __udelay(__cil_tmp108);
      }
    } else {

    }
    }
    {
    __cil_tmp109 = (unsigned long )pi;
    __cil_tmp110 = __cil_tmp109 + 8;
    __cil_tmp111 = *((int *)__cil_tmp110);
    __cil_tmp112 = __cil_tmp111 + 2;
    outb((unsigned char)5, __cil_tmp112);
    }
    {
    __cil_tmp113 = (unsigned long )pi;
    __cil_tmp114 = __cil_tmp113 + 16;
    if (*((int *)__cil_tmp114)) {
      {
      __cil_tmp115 = (unsigned long )pi;
      __cil_tmp116 = __cil_tmp115 + 16;
      __cil_tmp117 = *((int *)__cil_tmp116);
      __cil_tmp118 = (unsigned long )__cil_tmp117;
      __udelay(__cil_tmp118);
      }
    } else {

    }
    }
    {
    __cil_tmp119 = (unsigned long )pi;
    __cil_tmp120 = __cil_tmp119 + 8;
    __cil_tmp121 = *((int *)__cil_tmp120);
    __cil_tmp122 = __cil_tmp121 + 2;
    outb((unsigned char)4, __cil_tmp122);
    }
    {
    __cil_tmp123 = (unsigned long )pi;
    __cil_tmp124 = __cil_tmp123 + 16;
    if (*((int *)__cil_tmp124)) {
      {
      __cil_tmp125 = (unsigned long )pi;
      __cil_tmp126 = __cil_tmp125 + 16;
      __cil_tmp127 = *((int *)__cil_tmp126);
      __cil_tmp128 = (unsigned long )__cil_tmp127;
      __udelay(__cil_tmp128);
      }
    } else {

    }
    }
    {
    __cil_tmp129 = (unsigned long )pi;
    __cil_tmp130 = __cil_tmp129 + 8;
    __cil_tmp131 = *((int *)__cil_tmp130);
    outb((unsigned char)0, __cil_tmp131);
    }
    {
    __cil_tmp132 = (unsigned long )pi;
    __cil_tmp133 = __cil_tmp132 + 16;
    if (*((int *)__cil_tmp133)) {
      {
      __cil_tmp134 = (unsigned long )pi;
      __cil_tmp135 = __cil_tmp134 + 16;
      __cil_tmp136 = *((int *)__cil_tmp135);
      __cil_tmp137 = (unsigned long )__cil_tmp136;
      __udelay(__cil_tmp137);
      }
    } else {

    }
    }
    {
    __cil_tmp138 = (unsigned long )pi;
    __cil_tmp139 = __cil_tmp138 + 8;
    __cil_tmp140 = *((int *)__cil_tmp139);
    __cil_tmp141 = __cil_tmp140 + 2;
    outb((unsigned char)5, __cil_tmp141);
    }
    {
    __cil_tmp142 = (unsigned long )pi;
    __cil_tmp143 = __cil_tmp142 + 16;
    if (*((int *)__cil_tmp143)) {
      {
      __cil_tmp144 = (unsigned long )pi;
      __cil_tmp145 = __cil_tmp144 + 16;
      __cil_tmp146 = *((int *)__cil_tmp145);
      __cil_tmp147 = (unsigned long )__cil_tmp146;
      __udelay(__cil_tmp147);
      }
    } else {

    }
    }
    {
    __cil_tmp148 = (unsigned long )pi;
    __cil_tmp149 = __cil_tmp148 + 8;
    __cil_tmp150 = *((int *)__cil_tmp149);
    __cil_tmp151 = __cil_tmp150 + 2;
    outb((unsigned char)13, __cil_tmp151);
    }
    {
    __cil_tmp152 = (unsigned long )pi;
    __cil_tmp153 = __cil_tmp152 + 16;
    if (*((int *)__cil_tmp153)) {
      {
      __cil_tmp154 = (unsigned long )pi;
      __cil_tmp155 = __cil_tmp154 + 16;
      __cil_tmp156 = *((int *)__cil_tmp155);
      __cil_tmp157 = (unsigned long )__cil_tmp156;
      __udelay(__cil_tmp157);
      }
    } else {

    }
    }
    {
    __cil_tmp158 = (unsigned long )pi;
    __cil_tmp159 = __cil_tmp158 + 8;
    __cil_tmp160 = *((int *)__cil_tmp159);
    __cil_tmp161 = __cil_tmp160 + 2;
    outb((unsigned char)5, __cil_tmp161);
    }
    {
    __cil_tmp162 = (unsigned long )pi;
    __cil_tmp163 = __cil_tmp162 + 16;
    if (*((int *)__cil_tmp163)) {
      {
      __cil_tmp164 = (unsigned long )pi;
      __cil_tmp165 = __cil_tmp164 + 16;
      __cil_tmp166 = *((int *)__cil_tmp165);
      __cil_tmp167 = (unsigned long )__cil_tmp166;
      __udelay(__cil_tmp167);
      }
    } else {

    }
    }
    {
    __cil_tmp168 = (unsigned long )pi;
    __cil_tmp169 = __cil_tmp168 + 8;
    __cil_tmp170 = *((int *)__cil_tmp169);
    __cil_tmp171 = __cil_tmp170 + 2;
    outb((unsigned char)13, __cil_tmp171);
    }
    {
    __cil_tmp172 = (unsigned long )pi;
    __cil_tmp173 = __cil_tmp172 + 16;
    if (*((int *)__cil_tmp173)) {
      {
      __cil_tmp174 = (unsigned long )pi;
      __cil_tmp175 = __cil_tmp174 + 16;
      __cil_tmp176 = *((int *)__cil_tmp175);
      __cil_tmp177 = (unsigned long )__cil_tmp176;
      __udelay(__cil_tmp177);
      }
    } else {

    }
    }
    {
    __cil_tmp178 = (unsigned long )pi;
    __cil_tmp179 = __cil_tmp178 + 8;
    __cil_tmp180 = *((int *)__cil_tmp179);
    __cil_tmp181 = __cil_tmp180 + 2;
    outb((unsigned char)5, __cil_tmp181);
    }
    {
    __cil_tmp182 = (unsigned long )pi;
    __cil_tmp183 = __cil_tmp182 + 16;
    if (*((int *)__cil_tmp183)) {
      {
      __cil_tmp184 = (unsigned long )pi;
      __cil_tmp185 = __cil_tmp184 + 16;
      __cil_tmp186 = *((int *)__cil_tmp185);
      __cil_tmp187 = (unsigned long )__cil_tmp186;
      __udelay(__cil_tmp187);
      }
    } else {

    }
    }
    {
    __cil_tmp188 = (unsigned long )pi;
    __cil_tmp189 = __cil_tmp188 + 8;
    __cil_tmp190 = *((int *)__cil_tmp189);
    __cil_tmp191 = __cil_tmp190 + 2;
    outb((unsigned char)4, __cil_tmp191);
    }
    {
    __cil_tmp192 = (unsigned long )pi;
    __cil_tmp193 = __cil_tmp192 + 16;
    if (*((int *)__cil_tmp193)) {
      {
      __cil_tmp194 = (unsigned long )pi;
      __cil_tmp195 = __cil_tmp194 + 16;
      __cil_tmp196 = *((int *)__cil_tmp195);
      __cil_tmp197 = (unsigned long )__cil_tmp196;
      __udelay(__cil_tmp197);
      }
    } else {

    }
    }
    {
    __cil_tmp198 = (unsigned char )val;
    __cil_tmp199 = (unsigned long )pi;
    __cil_tmp200 = __cil_tmp199 + 8;
    __cil_tmp201 = *((int *)__cil_tmp200);
    outb(__cil_tmp198, __cil_tmp201);
    }
    {
    __cil_tmp202 = (unsigned long )pi;
    __cil_tmp203 = __cil_tmp202 + 16;
    if (*((int *)__cil_tmp203)) {
      {
      __cil_tmp204 = (unsigned long )pi;
      __cil_tmp205 = __cil_tmp204 + 16;
      __cil_tmp206 = *((int *)__cil_tmp205);
      __cil_tmp207 = (unsigned long )__cil_tmp206;
      __udelay(__cil_tmp207);
      }
    } else {

    }
    }
    {
    __cil_tmp208 = (unsigned long )pi;
    __cil_tmp209 = __cil_tmp208 + 8;
    __cil_tmp210 = *((int *)__cil_tmp209);
    __cil_tmp211 = __cil_tmp210 + 2;
    outb((unsigned char)5, __cil_tmp211);
    }
    {
    __cil_tmp212 = (unsigned long )pi;
    __cil_tmp213 = __cil_tmp212 + 16;
    if (*((int *)__cil_tmp213)) {
      {
      __cil_tmp214 = (unsigned long )pi;
      __cil_tmp215 = __cil_tmp214 + 16;
      __cil_tmp216 = *((int *)__cil_tmp215);
      __cil_tmp217 = (unsigned long )__cil_tmp216;
      __udelay(__cil_tmp217);
      }
    } else {

    }
    }
    {
    __cil_tmp218 = (unsigned long )pi;
    __cil_tmp219 = __cil_tmp218 + 8;
    __cil_tmp220 = *((int *)__cil_tmp219);
    __cil_tmp221 = __cil_tmp220 + 2;
    outb((unsigned char)7, __cil_tmp221);
    }
    {
    __cil_tmp222 = (unsigned long )pi;
    __cil_tmp223 = __cil_tmp222 + 16;
    if (*((int *)__cil_tmp223)) {
      {
      __cil_tmp224 = (unsigned long )pi;
      __cil_tmp225 = __cil_tmp224 + 16;
      __cil_tmp226 = *((int *)__cil_tmp225);
      __cil_tmp227 = (unsigned long )__cil_tmp226;
      __udelay(__cil_tmp227);
      }
    } else {

    }
    }
    {
    __cil_tmp228 = (unsigned long )pi;
    __cil_tmp229 = __cil_tmp228 + 8;
    __cil_tmp230 = *((int *)__cil_tmp229);
    __cil_tmp231 = __cil_tmp230 + 2;
    outb((unsigned char)5, __cil_tmp231);
    }
    {
    __cil_tmp232 = (unsigned long )pi;
    __cil_tmp233 = __cil_tmp232 + 16;
    if (*((int *)__cil_tmp233)) {
      {
      __cil_tmp234 = (unsigned long )pi;
      __cil_tmp235 = __cil_tmp234 + 16;
      __cil_tmp236 = *((int *)__cil_tmp235);
      __cil_tmp237 = (unsigned long )__cil_tmp236;
      __udelay(__cil_tmp237);
      }
    } else {

    }
    }
    {
    __cil_tmp238 = (unsigned long )pi;
    __cil_tmp239 = __cil_tmp238 + 8;
    __cil_tmp240 = *((int *)__cil_tmp239);
    __cil_tmp241 = __cil_tmp240 + 2;
    outb((unsigned char)4, __cil_tmp241);
    }
    {
    __cil_tmp242 = (unsigned long )pi;
    __cil_tmp243 = __cil_tmp242 + 16;
    if (*((int *)__cil_tmp243)) {
      {
      __cil_tmp244 = (unsigned long )pi;
      __cil_tmp245 = __cil_tmp244 + 16;
      __cil_tmp246 = *((int *)__cil_tmp245);
      __cil_tmp247 = (unsigned long )__cil_tmp246;
      __udelay(__cil_tmp247);
      }
    } else {

    }
    }
    {
    __cil_tmp248 = (unsigned char )val;
    __cil_tmp249 = (unsigned long )pi;
    __cil_tmp250 = __cil_tmp249 + 8;
    __cil_tmp251 = *((int *)__cil_tmp250);
    outb(__cil_tmp248, __cil_tmp251);
    }
    {
    __cil_tmp252 = (unsigned long )pi;
    __cil_tmp253 = __cil_tmp252 + 16;
    if (*((int *)__cil_tmp253)) {
      {
      __cil_tmp254 = (unsigned long )pi;
      __cil_tmp255 = __cil_tmp254 + 16;
      __cil_tmp256 = *((int *)__cil_tmp255);
      __cil_tmp257 = (unsigned long )__cil_tmp256;
      __udelay(__cil_tmp257);
      }
    } else {

    }
    }
    {
    __cil_tmp258 = (unsigned long )pi;
    __cil_tmp259 = __cil_tmp258 + 8;
    __cil_tmp260 = *((int *)__cil_tmp259);
    __cil_tmp261 = __cil_tmp260 + 2;
    outb((unsigned char)5, __cil_tmp261);
    }
    {
    __cil_tmp262 = (unsigned long )pi;
    __cil_tmp263 = __cil_tmp262 + 16;
    if (*((int *)__cil_tmp263)) {
      {
      __cil_tmp264 = (unsigned long )pi;
      __cil_tmp265 = __cil_tmp264 + 16;
      __cil_tmp266 = *((int *)__cil_tmp265);
      __cil_tmp267 = (unsigned long )__cil_tmp266;
      __udelay(__cil_tmp267);
      }
    } else {

    }
    }
    {
    __cil_tmp268 = (unsigned long )pi;
    __cil_tmp269 = __cil_tmp268 + 8;
    __cil_tmp270 = *((int *)__cil_tmp269);
    __cil_tmp271 = __cil_tmp270 + 2;
    outb((unsigned char)7, __cil_tmp271);
    }
    {
    __cil_tmp272 = (unsigned long )pi;
    __cil_tmp273 = __cil_tmp272 + 16;
    if (*((int *)__cil_tmp273)) {
      {
      __cil_tmp274 = (unsigned long )pi;
      __cil_tmp275 = __cil_tmp274 + 16;
      __cil_tmp276 = *((int *)__cil_tmp275);
      __cil_tmp277 = (unsigned long )__cil_tmp276;
      __udelay(__cil_tmp277);
      }
    } else {

    }
    }
    {
    __cil_tmp278 = (unsigned long )pi;
    __cil_tmp279 = __cil_tmp278 + 8;
    __cil_tmp280 = *((int *)__cil_tmp279);
    __cil_tmp281 = __cil_tmp280 + 2;
    outb((unsigned char)5, __cil_tmp281);
    }
    {
    __cil_tmp282 = (unsigned long )pi;
    __cil_tmp283 = __cil_tmp282 + 16;
    if (*((int *)__cil_tmp283)) {
      {
      __cil_tmp284 = (unsigned long )pi;
      __cil_tmp285 = __cil_tmp284 + 16;
      __cil_tmp286 = *((int *)__cil_tmp285);
      __cil_tmp287 = (unsigned long )__cil_tmp286;
      __udelay(__cil_tmp287);
      }
    } else {

    }
    }
    {
    __cil_tmp288 = (unsigned long )pi;
    __cil_tmp289 = __cil_tmp288 + 8;
    __cil_tmp290 = *((int *)__cil_tmp289);
    __cil_tmp291 = __cil_tmp290 + 2;
    outb((unsigned char)4, __cil_tmp291);
    }
    {
    __cil_tmp292 = (unsigned long )pi;
    __cil_tmp293 = __cil_tmp292 + 16;
    if (*((int *)__cil_tmp293)) {
      {
      __cil_tmp294 = (unsigned long )pi;
      __cil_tmp295 = __cil_tmp294 + 16;
      __cil_tmp296 = *((int *)__cil_tmp295);
      __cil_tmp297 = (unsigned long )__cil_tmp296;
      __udelay(__cil_tmp297);
      }
    } else {

    }
    }
    goto switch_break;
    case_2: /* CIL Label */ 
    case_3: /* CIL Label */ 
    case_4: /* CIL Label */ 
    {
    __cil_tmp298 = (unsigned long )pi;
    __cil_tmp299 = __cil_tmp298 + 8;
    __cil_tmp300 = *((int *)__cil_tmp299);
    __cil_tmp301 = __cil_tmp300 + 3;
    outb((unsigned char)1, __cil_tmp301);
    }
    {
    __cil_tmp302 = (unsigned long )pi;
    __cil_tmp303 = __cil_tmp302 + 16;
    if (*((int *)__cil_tmp303)) {
      {
      __cil_tmp304 = (unsigned long )pi;
      __cil_tmp305 = __cil_tmp304 + 16;
      __cil_tmp306 = *((int *)__cil_tmp305);
      __cil_tmp307 = (unsigned long )__cil_tmp306;
      __udelay(__cil_tmp307);
      }
    } else {

    }
    }
    {
    __cil_tmp308 = (unsigned long )pi;
    __cil_tmp309 = __cil_tmp308 + 8;
    __cil_tmp310 = *((int *)__cil_tmp309);
    __cil_tmp311 = __cil_tmp310 + 3;
    outb((unsigned char)1, __cil_tmp311);
    }
    {
    __cil_tmp312 = (unsigned long )pi;
    __cil_tmp313 = __cil_tmp312 + 16;
    if (*((int *)__cil_tmp313)) {
      {
      __cil_tmp314 = (unsigned long )pi;
      __cil_tmp315 = __cil_tmp314 + 16;
      __cil_tmp316 = *((int *)__cil_tmp315);
      __cil_tmp317 = (unsigned long )__cil_tmp316;
      __udelay(__cil_tmp317);
      }
    } else {

    }
    }
    {
    __cil_tmp318 = (unsigned long )pi;
    __cil_tmp319 = __cil_tmp318 + 8;
    __cil_tmp320 = *((int *)__cil_tmp319);
    __cil_tmp321 = __cil_tmp320 + 2;
    outb((unsigned char)5, __cil_tmp321);
    }
    {
    __cil_tmp322 = (unsigned long )pi;
    __cil_tmp323 = __cil_tmp322 + 16;
    if (*((int *)__cil_tmp323)) {
      {
      __cil_tmp324 = (unsigned long )pi;
      __cil_tmp325 = __cil_tmp324 + 16;
      __cil_tmp326 = *((int *)__cil_tmp325);
      __cil_tmp327 = (unsigned long )__cil_tmp326;
      __udelay(__cil_tmp327);
      }
    } else {

    }
    }
    {
    __cil_tmp328 = (unsigned char )r;
    __cil_tmp329 = (unsigned long )pi;
    __cil_tmp330 = __cil_tmp329 + 8;
    __cil_tmp331 = *((int *)__cil_tmp330);
    __cil_tmp332 = __cil_tmp331 + 4;
    outb(__cil_tmp328, __cil_tmp332);
    }
    {
    __cil_tmp333 = (unsigned long )pi;
    __cil_tmp334 = __cil_tmp333 + 16;
    if (*((int *)__cil_tmp334)) {
      {
      __cil_tmp335 = (unsigned long )pi;
      __cil_tmp336 = __cil_tmp335 + 16;
      __cil_tmp337 = *((int *)__cil_tmp336);
      __cil_tmp338 = (unsigned long )__cil_tmp337;
      __udelay(__cil_tmp338);
      }
    } else {

    }
    }
    {
    __cil_tmp339 = (unsigned long )pi;
    __cil_tmp340 = __cil_tmp339 + 8;
    __cil_tmp341 = *((int *)__cil_tmp340);
    __cil_tmp342 = __cil_tmp341 + 2;
    outb((unsigned char)4, __cil_tmp342);
    }
    {
    __cil_tmp343 = (unsigned long )pi;
    __cil_tmp344 = __cil_tmp343 + 16;
    if (*((int *)__cil_tmp344)) {
      {
      __cil_tmp345 = (unsigned long )pi;
      __cil_tmp346 = __cil_tmp345 + 16;
      __cil_tmp347 = *((int *)__cil_tmp346);
      __cil_tmp348 = (unsigned long )__cil_tmp347;
      __udelay(__cil_tmp348);
      }
    } else {

    }
    }
    {
    __cil_tmp349 = (unsigned long )pi;
    __cil_tmp350 = __cil_tmp349 + 8;
    __cil_tmp351 = *((int *)__cil_tmp350);
    __cil_tmp352 = __cil_tmp351 + 3;
    outb((unsigned char)0, __cil_tmp352);
    }
    {
    __cil_tmp353 = (unsigned long )pi;
    __cil_tmp354 = __cil_tmp353 + 16;
    if (*((int *)__cil_tmp354)) {
      {
      __cil_tmp355 = (unsigned long )pi;
      __cil_tmp356 = __cil_tmp355 + 16;
      __cil_tmp357 = *((int *)__cil_tmp356);
      __cil_tmp358 = (unsigned long )__cil_tmp357;
      __udelay(__cil_tmp358);
      }
    } else {

    }
    }
    {
    __cil_tmp359 = (unsigned long )pi;
    __cil_tmp360 = __cil_tmp359 + 8;
    __cil_tmp361 = *((int *)__cil_tmp360);
    __cil_tmp362 = __cil_tmp361 + 3;
    outb((unsigned char)0, __cil_tmp362);
    }
    {
    __cil_tmp363 = (unsigned long )pi;
    __cil_tmp364 = __cil_tmp363 + 16;
    if (*((int *)__cil_tmp364)) {
      {
      __cil_tmp365 = (unsigned long )pi;
      __cil_tmp366 = __cil_tmp365 + 16;
      __cil_tmp367 = *((int *)__cil_tmp366);
      __cil_tmp368 = (unsigned long )__cil_tmp367;
      __udelay(__cil_tmp368);
      }
    } else {

    }
    }
    {
    __cil_tmp369 = (unsigned long )pi;
    __cil_tmp370 = __cil_tmp369 + 8;
    __cil_tmp371 = *((int *)__cil_tmp370);
    __cil_tmp372 = __cil_tmp371 + 2;
    outb((unsigned char)5, __cil_tmp372);
    }
    {
    __cil_tmp373 = (unsigned long )pi;
    __cil_tmp374 = __cil_tmp373 + 16;
    if (*((int *)__cil_tmp374)) {
      {
      __cil_tmp375 = (unsigned long )pi;
      __cil_tmp376 = __cil_tmp375 + 16;
      __cil_tmp377 = *((int *)__cil_tmp376);
      __cil_tmp378 = (unsigned long )__cil_tmp377;
      __udelay(__cil_tmp378);
      }
    } else {

    }
    }
    {
    __cil_tmp379 = (unsigned char )val;
    __cil_tmp380 = (unsigned long )pi;
    __cil_tmp381 = __cil_tmp380 + 8;
    __cil_tmp382 = *((int *)__cil_tmp381);
    __cil_tmp383 = __cil_tmp382 + 4;
    outb(__cil_tmp379, __cil_tmp383);
    }
    {
    __cil_tmp384 = (unsigned long )pi;
    __cil_tmp385 = __cil_tmp384 + 16;
    if (*((int *)__cil_tmp385)) {
      {
      __cil_tmp386 = (unsigned long )pi;
      __cil_tmp387 = __cil_tmp386 + 16;
      __cil_tmp388 = *((int *)__cil_tmp387);
      __cil_tmp389 = (unsigned long )__cil_tmp388;
      __udelay(__cil_tmp389);
      }
    } else {

    }
    }
    {
    __cil_tmp390 = (unsigned long )pi;
    __cil_tmp391 = __cil_tmp390 + 8;
    __cil_tmp392 = *((int *)__cil_tmp391);
    __cil_tmp393 = __cil_tmp392 + 2;
    outb((unsigned char)4, __cil_tmp393);
    }
    {
    __cil_tmp394 = (unsigned long )pi;
    __cil_tmp395 = __cil_tmp394 + 16;
    if (*((int *)__cil_tmp395)) {
      {
      __cil_tmp396 = (unsigned long )pi;
      __cil_tmp397 = __cil_tmp396 + 16;
      __cil_tmp398 = *((int *)__cil_tmp397);
      __cil_tmp399 = (unsigned long )__cil_tmp398;
      __udelay(__cil_tmp399);
      }
    } else {

    }
    }
    {
    __cil_tmp400 = (unsigned long )pi;
    __cil_tmp401 = __cil_tmp400 + 8;
    __cil_tmp402 = *((int *)__cil_tmp401);
    __cil_tmp403 = __cil_tmp402 + 2;
    outb((unsigned char)5, __cil_tmp403);
    }
    {
    __cil_tmp404 = (unsigned long )pi;
    __cil_tmp405 = __cil_tmp404 + 16;
    if (*((int *)__cil_tmp405)) {
      {
      __cil_tmp406 = (unsigned long )pi;
      __cil_tmp407 = __cil_tmp406 + 16;
      __cil_tmp408 = *((int *)__cil_tmp407);
      __cil_tmp409 = (unsigned long )__cil_tmp408;
      __udelay(__cil_tmp409);
      }
    } else {

    }
    }
    {
    __cil_tmp410 = (unsigned char )val;
    __cil_tmp411 = (unsigned long )pi;
    __cil_tmp412 = __cil_tmp411 + 8;
    __cil_tmp413 = *((int *)__cil_tmp412);
    __cil_tmp414 = __cil_tmp413 + 4;
    outb(__cil_tmp410, __cil_tmp414);
    }
    {
    __cil_tmp415 = (unsigned long )pi;
    __cil_tmp416 = __cil_tmp415 + 16;
    if (*((int *)__cil_tmp416)) {
      {
      __cil_tmp417 = (unsigned long )pi;
      __cil_tmp418 = __cil_tmp417 + 16;
      __cil_tmp419 = *((int *)__cil_tmp418);
      __cil_tmp420 = (unsigned long )__cil_tmp419;
      __udelay(__cil_tmp420);
      }
    } else {

    }
    }
    {
    __cil_tmp421 = (unsigned long )pi;
    __cil_tmp422 = __cil_tmp421 + 8;
    __cil_tmp423 = *((int *)__cil_tmp422);
    __cil_tmp424 = __cil_tmp423 + 2;
    outb((unsigned char)4, __cil_tmp424);
    }
    {
    __cil_tmp425 = (unsigned long )pi;
    __cil_tmp426 = __cil_tmp425 + 16;
    if (*((int *)__cil_tmp426)) {
      {
      __cil_tmp427 = (unsigned long )pi;
      __cil_tmp428 = __cil_tmp427 + 16;
      __cil_tmp429 = *((int *)__cil_tmp428);
      __cil_tmp430 = (unsigned long )__cil_tmp429;
      __udelay(__cil_tmp430);
      }
    } else {

    }
    }
    goto switch_break;
  } else {
    switch_break: /* CIL Label */ ;
  }
  }
  return;
}
}
@