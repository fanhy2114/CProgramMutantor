static void friq_write_block(PIA *pi , char *buf , int count ) 
{ int k ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  int __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  int __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  int __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  int __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  unsigned long __cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  int __cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  int __cil_tmp51 ;
  unsigned long __cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  int __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  unsigned long __cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  unsigned long __cil_tmp59 ;
  int __cil_tmp60 ;
  unsigned long __cil_tmp61 ;
  unsigned long __cil_tmp62 ;
  unsigned long __cil_tmp63 ;
  int __cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  unsigned long __cil_tmp66 ;
  unsigned long __cil_tmp67 ;
  unsigned long __cil_tmp68 ;
  int __cil_tmp69 ;
  unsigned long __cil_tmp70 ;
  unsigned long __cil_tmp71 ;
  unsigned long __cil_tmp72 ;
  int __cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  unsigned long __cil_tmp75 ;
  unsigned long __cil_tmp76 ;
  unsigned long __cil_tmp77 ;
  int __cil_tmp78 ;
  unsigned long __cil_tmp79 ;
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
  unsigned long __cil_tmp92 ;
  unsigned long __cil_tmp93 ;
  unsigned long __cil_tmp94 ;
  unsigned long __cil_tmp95 ;
  int __cil_tmp96 ;
  unsigned long __cil_tmp97 ;
  unsigned long __cil_tmp98 ;
  unsigned long __cil_tmp99 ;
  int __cil_tmp100 ;
  unsigned long __cil_tmp101 ;
  unsigned long __cil_tmp102 ;
  unsigned long __cil_tmp103 ;
  unsigned long __cil_tmp104 ;
  int __cil_tmp105 ;
  unsigned long __cil_tmp106 ;
  unsigned long __cil_tmp107 ;
  unsigned long __cil_tmp108 ;
  int __cil_tmp109 ;
  int __cil_tmp110 ;
  unsigned long __cil_tmp111 ;
  unsigned long __cil_tmp112 ;
  unsigned long __cil_tmp113 ;
  unsigned long __cil_tmp114 ;
  int __cil_tmp115 ;
  unsigned long __cil_tmp116 ;
  char *__cil_tmp117 ;
  char __cil_tmp118 ;
  unsigned char __cil_tmp119 ;
  unsigned long __cil_tmp120 ;
  unsigned long __cil_tmp121 ;
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
  int __cil_tmp132 ;
  unsigned long __cil_tmp133 ;
  unsigned long __cil_tmp134 ;
  unsigned long __cil_tmp135 ;
  unsigned long __cil_tmp136 ;
  int __cil_tmp137 ;
  unsigned long __cil_tmp138 ;
  unsigned long __cil_tmp139 ;
  unsigned long __cil_tmp140 ;
  int __cil_tmp141 ;
  int __cil_tmp142 ;
  unsigned long __cil_tmp143 ;
  unsigned long __cil_tmp144 ;
  unsigned long __cil_tmp145 ;
  unsigned long __cil_tmp146 ;
  int __cil_tmp147 ;
  unsigned long __cil_tmp148 ;
  unsigned long __cil_tmp149 ;
  unsigned long __cil_tmp150 ;
  int __cil_tmp151 ;
  int __cil_tmp152 ;
  unsigned long __cil_tmp153 ;
  unsigned long __cil_tmp154 ;
  unsigned long __cil_tmp155 ;
  unsigned long __cil_tmp156 ;
  int __cil_tmp157 ;
  unsigned long __cil_tmp158 ;
  unsigned long __cil_tmp159 ;
  unsigned long __cil_tmp160 ;
  int __cil_tmp161 ;
  int __cil_tmp162 ;
  unsigned long __cil_tmp163 ;
  unsigned long __cil_tmp164 ;
  unsigned long __cil_tmp165 ;
  unsigned long __cil_tmp166 ;
  int __cil_tmp167 ;
  unsigned long __cil_tmp168 ;
  unsigned long __cil_tmp169 ;
  unsigned long __cil_tmp170 ;
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
  unsigned long __cil_tmp181 ;
  unsigned long __cil_tmp182 ;
  unsigned long __cil_tmp183 ;
  unsigned long __cil_tmp184 ;
  int __cil_tmp185 ;
  unsigned long __cil_tmp186 ;
  unsigned long __cil_tmp187 ;
  unsigned long __cil_tmp188 ;
  int __cil_tmp189 ;
  unsigned long __cil_tmp190 ;
  unsigned long __cil_tmp191 ;
  unsigned long __cil_tmp192 ;
  unsigned long __cil_tmp193 ;
  int __cil_tmp194 ;
  unsigned long __cil_tmp195 ;
  unsigned long __cil_tmp196 ;
  unsigned long __cil_tmp197 ;
  int __cil_tmp198 ;
  unsigned long __cil_tmp199 ;
  unsigned long __cil_tmp200 ;
  unsigned long __cil_tmp201 ;
  unsigned long __cil_tmp202 ;
  int __cil_tmp203 ;
  unsigned long __cil_tmp204 ;
  unsigned long __cil_tmp205 ;
  unsigned long __cil_tmp206 ;
  int __cil_tmp207 ;
  unsigned long __cil_tmp208 ;
  unsigned long __cil_tmp209 ;
  unsigned long __cil_tmp210 ;
  unsigned long __cil_tmp211 ;
  int __cil_tmp212 ;
  unsigned long __cil_tmp213 ;
  unsigned long __cil_tmp214 ;
  unsigned long __cil_tmp215 ;
  int __cil_tmp216 ;
  unsigned long __cil_tmp217 ;
  unsigned long __cil_tmp218 ;
  unsigned long __cil_tmp219 ;
  unsigned long __cil_tmp220 ;
  int __cil_tmp221 ;
  unsigned long __cil_tmp222 ;
  unsigned long __cil_tmp223 ;
  unsigned long __cil_tmp224 ;
  int __cil_tmp225 ;
  unsigned long __cil_tmp226 ;
  unsigned long __cil_tmp227 ;
  unsigned long __cil_tmp228 ;
  unsigned long __cil_tmp229 ;
  int __cil_tmp230 ;
  unsigned long __cil_tmp231 ;
  unsigned long __cil_tmp232 ;
  unsigned long __cil_tmp233 ;
  int __cil_tmp234 ;
  unsigned long __cil_tmp235 ;
  unsigned long __cil_tmp236 ;
  unsigned long __cil_tmp237 ;
  unsigned long __cil_tmp238 ;
  int __cil_tmp239 ;
  unsigned long __cil_tmp240 ;
  unsigned long __cil_tmp241 ;
  unsigned long __cil_tmp242 ;
  int __cil_tmp243 ;
  unsigned long __cil_tmp244 ;
  unsigned long __cil_tmp245 ;
  unsigned long __cil_tmp246 ;
  unsigned long __cil_tmp247 ;
  int __cil_tmp248 ;
  unsigned long __cil_tmp249 ;
  unsigned long __cil_tmp250 ;
  unsigned long __cil_tmp251 ;
  int __cil_tmp252 ;
  unsigned long __cil_tmp253 ;
  unsigned long __cil_tmp254 ;
  unsigned long __cil_tmp255 ;
  unsigned long __cil_tmp256 ;
  int __cil_tmp257 ;
  unsigned long __cil_tmp258 ;
  unsigned long __cil_tmp259 ;
  unsigned long __cil_tmp260 ;
  int __cil_tmp261 ;
  int __cil_tmp262 ;
  unsigned long __cil_tmp263 ;
  unsigned long __cil_tmp264 ;
  unsigned long __cil_tmp265 ;
  unsigned long __cil_tmp266 ;
  int __cil_tmp267 ;
  unsigned long __cil_tmp268 ;
  char *__cil_tmp269 ;
  char __cil_tmp270 ;
  unsigned char __cil_tmp271 ;
  unsigned long __cil_tmp272 ;
  unsigned long __cil_tmp273 ;
  int __cil_tmp274 ;
  int __cil_tmp275 ;
  unsigned long __cil_tmp276 ;
  unsigned long __cil_tmp277 ;
  unsigned long __cil_tmp278 ;
  unsigned long __cil_tmp279 ;
  int __cil_tmp280 ;
  unsigned long __cil_tmp281 ;
  unsigned long __cil_tmp282 ;
  unsigned long __cil_tmp283 ;
  int __cil_tmp284 ;
  int __cil_tmp285 ;
  unsigned long __cil_tmp286 ;
  unsigned long __cil_tmp287 ;
  unsigned long __cil_tmp288 ;
  unsigned long __cil_tmp289 ;
  int __cil_tmp290 ;
  unsigned long __cil_tmp291 ;
  unsigned long __cil_tmp292 ;
  unsigned long __cil_tmp293 ;
  int __cil_tmp294 ;
  int __cil_tmp295 ;
  unsigned long __cil_tmp296 ;
  unsigned long __cil_tmp297 ;
  unsigned long __cil_tmp298 ;
  unsigned long __cil_tmp299 ;
  int __cil_tmp300 ;
  unsigned long __cil_tmp301 ;
  unsigned long __cil_tmp302 ;
  unsigned long __cil_tmp303 ;
  int __cil_tmp304 ;
  unsigned long __cil_tmp305 ;
  unsigned long __cil_tmp306 ;
  unsigned long __cil_tmp307 ;
  unsigned long __cil_tmp308 ;
  int __cil_tmp309 ;
  unsigned long __cil_tmp310 ;
  unsigned long __cil_tmp311 ;
  unsigned long __cil_tmp312 ;
  int __cil_tmp313 ;
  unsigned long __cil_tmp314 ;
  unsigned long __cil_tmp315 ;
  unsigned long __cil_tmp316 ;
  unsigned long __cil_tmp317 ;
  int __cil_tmp318 ;
  unsigned long __cil_tmp319 ;
  unsigned long __cil_tmp320 ;
  unsigned long __cil_tmp321 ;
  int __cil_tmp322 ;
  unsigned long __cil_tmp323 ;
  unsigned long __cil_tmp324 ;
  unsigned long __cil_tmp325 ;
  unsigned long __cil_tmp326 ;
  int __cil_tmp327 ;
  unsigned long __cil_tmp328 ;
  unsigned long __cil_tmp329 ;
  unsigned long __cil_tmp330 ;
  int __cil_tmp331 ;
  unsigned long __cil_tmp332 ;
  unsigned long __cil_tmp333 ;
  unsigned long __cil_tmp334 ;
  unsigned long __cil_tmp335 ;
  int __cil_tmp336 ;
  unsigned long __cil_tmp337 ;
  unsigned long __cil_tmp338 ;
  unsigned long __cil_tmp339 ;
  int __cil_tmp340 ;
  unsigned long __cil_tmp341 ;
  unsigned long __cil_tmp342 ;
  unsigned long __cil_tmp343 ;
  unsigned long __cil_tmp344 ;
  int __cil_tmp345 ;
  unsigned long __cil_tmp346 ;
  unsigned long __cil_tmp347 ;
  unsigned long __cil_tmp348 ;
  int __cil_tmp349 ;
  unsigned long __cil_tmp350 ;
  unsigned long __cil_tmp351 ;
  unsigned long __cil_tmp352 ;
  unsigned long __cil_tmp353 ;
  int __cil_tmp354 ;
  unsigned long __cil_tmp355 ;
  unsigned long __cil_tmp356 ;
  unsigned long __cil_tmp357 ;
  int __cil_tmp358 ;
  unsigned long __cil_tmp359 ;
  unsigned long __cil_tmp360 ;
  unsigned long __cil_tmp361 ;
  unsigned long __cil_tmp362 ;
  int __cil_tmp363 ;
  unsigned long __cil_tmp364 ;
  unsigned long __cil_tmp365 ;
  unsigned long __cil_tmp366 ;
  int __cil_tmp367 ;
  unsigned long __cil_tmp368 ;
  unsigned long __cil_tmp369 ;
  unsigned long __cil_tmp370 ;
  unsigned long __cil_tmp371 ;
  int __cil_tmp372 ;
  unsigned long __cil_tmp373 ;
  unsigned long __cil_tmp374 ;
  unsigned long __cil_tmp375 ;
  int __cil_tmp376 ;
  unsigned long __cil_tmp377 ;
  unsigned long __cil_tmp378 ;
  unsigned long __cil_tmp379 ;
  unsigned long __cil_tmp380 ;
  int __cil_tmp381 ;
  unsigned long __cil_tmp382 ;
  unsigned long __cil_tmp383 ;
  unsigned long __cil_tmp384 ;
  int __cil_tmp385 ;
  unsigned long __cil_tmp386 ;
  unsigned long __cil_tmp387 ;
  unsigned long __cil_tmp388 ;
  unsigned long __cil_tmp389 ;
  int __cil_tmp390 ;
  unsigned long __cil_tmp391 ;
  unsigned long __cil_tmp392 ;
  unsigned long __cil_tmp393 ;
  int __cil_tmp394 ;
  int __cil_tmp395 ;
  unsigned long __cil_tmp396 ;
  unsigned long __cil_tmp397 ;
  unsigned long __cil_tmp398 ;
  unsigned long __cil_tmp399 ;
  int __cil_tmp400 ;
  unsigned long __cil_tmp401 ;
  int __cil_tmp402 ;
  u16 *__cil_tmp403 ;
  u16 *__cil_tmp404 ;
  u16 __cil_tmp405 ;
  unsigned long __cil_tmp406 ;
  unsigned long __cil_tmp407 ;
  int __cil_tmp408 ;
  int __cil_tmp409 ;
  unsigned long __cil_tmp410 ;
  unsigned long __cil_tmp411 ;
  unsigned long __cil_tmp412 ;
  unsigned long __cil_tmp413 ;
  int __cil_tmp414 ;
  unsigned long __cil_tmp415 ;
  unsigned long __cil_tmp416 ;
  unsigned long __cil_tmp417 ;
  int __cil_tmp418 ;
  int __cil_tmp419 ;
  unsigned long __cil_tmp420 ;
  unsigned long __cil_tmp421 ;
  unsigned long __cil_tmp422 ;
  unsigned long __cil_tmp423 ;
  int __cil_tmp424 ;
  unsigned long __cil_tmp425 ;
  unsigned long __cil_tmp426 ;
  unsigned long __cil_tmp427 ;
  int __cil_tmp428 ;
  int __cil_tmp429 ;
  unsigned long __cil_tmp430 ;
  unsigned long __cil_tmp431 ;
  unsigned long __cil_tmp432 ;
  unsigned long __cil_tmp433 ;
  int __cil_tmp434 ;
  unsigned long __cil_tmp435 ;
  unsigned long __cil_tmp436 ;
  unsigned long __cil_tmp437 ;
  int __cil_tmp438 ;
  unsigned long __cil_tmp439 ;
  unsigned long __cil_tmp440 ;
  unsigned long __cil_tmp441 ;
  unsigned long __cil_tmp442 ;
  int __cil_tmp443 ;
  unsigned long __cil_tmp444 ;
  unsigned long __cil_tmp445 ;
  unsigned long __cil_tmp446 ;
  int __cil_tmp447 ;
  unsigned long __cil_tmp448 ;
  unsigned long __cil_tmp449 ;
  unsigned long __cil_tmp450 ;
  unsigned long __cil_tmp451 ;
  int __cil_tmp452 ;
  unsigned long __cil_tmp453 ;
  unsigned long __cil_tmp454 ;
  unsigned long __cil_tmp455 ;
  int __cil_tmp456 ;
  unsigned long __cil_tmp457 ;
  unsigned long __cil_tmp458 ;
  unsigned long __cil_tmp459 ;
  unsigned long __cil_tmp460 ;
  int __cil_tmp461 ;
  unsigned long __cil_tmp462 ;
  unsigned long __cil_tmp463 ;
  unsigned long __cil_tmp464 ;
  int __cil_tmp465 ;
  unsigned long __cil_tmp466 ;
  unsigned long __cil_tmp467 ;
  unsigned long __cil_tmp468 ;
  unsigned long __cil_tmp469 ;
  int __cil_tmp470 ;
  unsigned long __cil_tmp471 ;
  unsigned long __cil_tmp472 ;
  unsigned long __cil_tmp473 ;
  int __cil_tmp474 ;
  unsigned long __cil_tmp475 ;
  unsigned long __cil_tmp476 ;
  unsigned long __cil_tmp477 ;
  unsigned long __cil_tmp478 ;
  int __cil_tmp479 ;
  unsigned long __cil_tmp480 ;
  unsigned long __cil_tmp481 ;
  unsigned long __cil_tmp482 ;
  int __cil_tmp483 ;
  unsigned long __cil_tmp484 ;
  unsigned long __cil_tmp485 ;
  unsigned long __cil_tmp486 ;
  unsigned long __cil_tmp487 ;
  int __cil_tmp488 ;
  unsigned long __cil_tmp489 ;
  unsigned long __cil_tmp490 ;
  unsigned long __cil_tmp491 ;
  int __cil_tmp492 ;
  unsigned long __cil_tmp493 ;
  unsigned long __cil_tmp494 ;
  unsigned long __cil_tmp495 ;
  unsigned long __cil_tmp496 ;
  int __cil_tmp497 ;
  unsigned long __cil_tmp498 ;
  unsigned long __cil_tmp499 ;
  unsigned long __cil_tmp500 ;
  int __cil_tmp501 ;
  unsigned long __cil_tmp502 ;
  unsigned long __cil_tmp503 ;
  unsigned long __cil_tmp504 ;
  unsigned long __cil_tmp505 ;
  int __cil_tmp506 ;
  unsigned long __cil_tmp507 ;
  unsigned long __cil_tmp508 ;
  unsigned long __cil_tmp509 ;
  int __cil_tmp510 ;
  unsigned long __cil_tmp511 ;
  unsigned long __cil_tmp512 ;
  unsigned long __cil_tmp513 ;
  unsigned long __cil_tmp514 ;
  int __cil_tmp515 ;
  unsigned long __cil_tmp516 ;
  unsigned long __cil_tmp517 ;
  unsigned long __cil_tmp518 ;
  int __cil_tmp519 ;
  unsigned long __cil_tmp520 ;
  unsigned long __cil_tmp521 ;
  unsigned long __cil_tmp522 ;
  unsigned long __cil_tmp523 ;
  int __cil_tmp524 ;
  unsigned long __cil_tmp525 ;
  unsigned long __cil_tmp526 ;
  unsigned long __cil_tmp527 ;
  int __cil_tmp528 ;
  int __cil_tmp529 ;
  unsigned long __cil_tmp530 ;
  unsigned long __cil_tmp531 ;
  unsigned long __cil_tmp532 ;
  unsigned long __cil_tmp533 ;
  int __cil_tmp534 ;
  unsigned long __cil_tmp535 ;
  int __cil_tmp536 ;
  u32 *__cil_tmp537 ;
  u32 *__cil_tmp538 ;
  u32 __cil_tmp539 ;
  unsigned long __cil_tmp540 ;
  unsigned long __cil_tmp541 ;
  int __cil_tmp542 ;
  int __cil_tmp543 ;
  unsigned long __cil_tmp544 ;
  unsigned long __cil_tmp545 ;
  unsigned long __cil_tmp546 ;
  unsigned long __cil_tmp547 ;
  int __cil_tmp548 ;
  unsigned long __cil_tmp549 ;
  unsigned long __cil_tmp550 ;
  unsigned long __cil_tmp551 ;
  int __cil_tmp552 ;
  int __cil_tmp553 ;
  unsigned long __cil_tmp554 ;
  unsigned long __cil_tmp555 ;
  unsigned long __cil_tmp556 ;
  unsigned long __cil_tmp557 ;
  int __cil_tmp558 ;
  unsigned long __cil_tmp559 ;

  {
  {
  __cil_tmp5 = (unsigned long )pi;
  __cil_tmp6 = __cil_tmp5 + 12;
  if (*((int *)__cil_tmp6) == 0) {
    goto case_0;
  } else
  if (*((int *)__cil_tmp6) == 1) {
    goto case_0;
  } else
  if (*((int *)__cil_tmp6) == 2) {
    goto case_2;
  } else
  if (*((int *)__cil_tmp6) == 3) {
    goto case_3;
  } else
  if (*((int *)__cil_tmp6) == 4) {
    goto case_4;
  } else
  if (0) {
    case_0: /* CIL Label */ 
    case_1: /* CIL Label */ 
    {
    __cil_tmp7 = (unsigned long )pi;
    __cil_tmp8 = __cil_tmp7 + 8;
    __cil_tmp9 = *((int *)__cil_tmp8);
    __cil_tmp10 = __cil_tmp9 + 2;
    outb((unsigned char)4, __cil_tmp10);
    }
    {
    __cil_tmp11 = (unsigned long )pi;
    __cil_tmp12 = __cil_tmp11 + 16;
    if (*((int *)__cil_tmp12)) {
      {
      __cil_tmp13 = (unsigned long )pi;
      __cil_tmp14 = __cil_tmp13 + 16;
      __cil_tmp15 = *((int *)__cil_tmp14);
      __cil_tmp16 = (unsigned long )__cil_tmp15;
      __udelay(__cil_tmp16);
      }
    } else {

    }
    }
    {
    __cil_tmp17 = (unsigned long )pi;
    __cil_tmp18 = __cil_tmp17 + 8;
    __cil_tmp19 = *((int *)__cil_tmp18);
    outb((unsigned char)255, __cil_tmp19);
    }
    {
    __cil_tmp20 = (unsigned long )pi;
    __cil_tmp21 = __cil_tmp20 + 16;
    if (*((int *)__cil_tmp21)) {
      {
      __cil_tmp22 = (unsigned long )pi;
      __cil_tmp23 = __cil_tmp22 + 16;
      __cil_tmp24 = *((int *)__cil_tmp23);
      __cil_tmp25 = (unsigned long )__cil_tmp24;
      __udelay(__cil_tmp25);
      }
    } else {

    }
    }
    {
    __cil_tmp26 = (unsigned long )pi;
    __cil_tmp27 = __cil_tmp26 + 8;
    __cil_tmp28 = *((int *)__cil_tmp27);
    outb((unsigned char)255, __cil_tmp28);
    }
    {
    __cil_tmp29 = (unsigned long )pi;
    __cil_tmp30 = __cil_tmp29 + 16;
    if (*((int *)__cil_tmp30)) {
      {
      __cil_tmp31 = (unsigned long )pi;
      __cil_tmp32 = __cil_tmp31 + 16;
      __cil_tmp33 = *((int *)__cil_tmp32);
      __cil_tmp34 = (unsigned long )__cil_tmp33;
      __udelay(__cil_tmp34);
      }
    } else {

    }
    }
    {
    __cil_tmp35 = (unsigned long )pi;
    __cil_tmp36 = __cil_tmp35 + 8;
    __cil_tmp37 = *((int *)__cil_tmp36);
    outb((unsigned char)115, __cil_tmp37);
    }
    {
    __cil_tmp38 = (unsigned long )pi;
    __cil_tmp39 = __cil_tmp38 + 16;
    if (*((int *)__cil_tmp39)) {
      {
      __cil_tmp40 = (unsigned long )pi;
      __cil_tmp41 = __cil_tmp40 + 16;
      __cil_tmp42 = *((int *)__cil_tmp41);
      __cil_tmp43 = (unsigned long )__cil_tmp42;
      __udelay(__cil_tmp43);
      }
    } else {

    }
    }
    {
    __cil_tmp44 = (unsigned long )pi;
    __cil_tmp45 = __cil_tmp44 + 8;
    __cil_tmp46 = *((int *)__cil_tmp45);
    outb((unsigned char)115, __cil_tmp46);
    }
    {
    __cil_tmp47 = (unsigned long )pi;
    __cil_tmp48 = __cil_tmp47 + 16;
    if (*((int *)__cil_tmp48)) {
      {
      __cil_tmp49 = (unsigned long )pi;
      __cil_tmp50 = __cil_tmp49 + 16;
      __cil_tmp51 = *((int *)__cil_tmp50);
      __cil_tmp52 = (unsigned long )__cil_tmp51;
      __udelay(__cil_tmp52);
      }
    } else {

    }
    }
    {
    __cil_tmp53 = (unsigned long )pi;
    __cil_tmp54 = __cil_tmp53 + 8;
    __cil_tmp55 = *((int *)__cil_tmp54);
    outb((unsigned char)201, __cil_tmp55);
    }
    {
    __cil_tmp56 = (unsigned long )pi;
    __cil_tmp57 = __cil_tmp56 + 16;
    if (*((int *)__cil_tmp57)) {
      {
      __cil_tmp58 = (unsigned long )pi;
      __cil_tmp59 = __cil_tmp58 + 16;
      __cil_tmp60 = *((int *)__cil_tmp59);
      __cil_tmp61 = (unsigned long )__cil_tmp60;
      __udelay(__cil_tmp61);
      }
    } else {

    }
    }
    {
    __cil_tmp62 = (unsigned long )pi;
    __cil_tmp63 = __cil_tmp62 + 8;
    __cil_tmp64 = *((int *)__cil_tmp63);
    outb((unsigned char)201, __cil_tmp64);
    }
    {
    __cil_tmp65 = (unsigned long )pi;
    __cil_tmp66 = __cil_tmp65 + 16;
    if (*((int *)__cil_tmp66)) {
      {
      __cil_tmp67 = (unsigned long )pi;
      __cil_tmp68 = __cil_tmp67 + 16;
      __cil_tmp69 = *((int *)__cil_tmp68);
      __cil_tmp70 = (unsigned long )__cil_tmp69;
      __udelay(__cil_tmp70);
      }
    } else {

    }
    }
    {
    __cil_tmp71 = (unsigned long )pi;
    __cil_tmp72 = __cil_tmp71 + 8;
    __cil_tmp73 = *((int *)__cil_tmp72);
    outb((unsigned char)38, __cil_tmp73);
    }
    {
    __cil_tmp74 = (unsigned long )pi;
    __cil_tmp75 = __cil_tmp74 + 16;
    if (*((int *)__cil_tmp75)) {
      {
      __cil_tmp76 = (unsigned long )pi;
      __cil_tmp77 = __cil_tmp76 + 16;
      __cil_tmp78 = *((int *)__cil_tmp77);
      __cil_tmp79 = (unsigned long )__cil_tmp78;
      __udelay(__cil_tmp79);
      }
    } else {

    }
    }
    {
    __cil_tmp80 = (unsigned long )pi;
    __cil_tmp81 = __cil_tmp80 + 8;
    __cil_tmp82 = *((int *)__cil_tmp81);
    outb((unsigned char)38, __cil_tmp82);
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
    outb((unsigned char)8, __cil_tmp91);
    }
    {
    __cil_tmp92 = (unsigned long )pi;
    __cil_tmp93 = __cil_tmp92 + 16;
    if (*((int *)__cil_tmp93)) {
      {
      __cil_tmp94 = (unsigned long )pi;
      __cil_tmp95 = __cil_tmp94 + 16;
      __cil_tmp96 = *((int *)__cil_tmp95);
      __cil_tmp97 = (unsigned long )__cil_tmp96;
      __udelay(__cil_tmp97);
      }
    } else {

    }
    }
    {
    __cil_tmp98 = (unsigned long )pi;
    __cil_tmp99 = __cil_tmp98 + 8;
    __cil_tmp100 = *((int *)__cil_tmp99);
    outb((unsigned char)8, __cil_tmp100);
    }
    {
    __cil_tmp101 = (unsigned long )pi;
    __cil_tmp102 = __cil_tmp101 + 16;
    if (*((int *)__cil_tmp102)) {
      {
      __cil_tmp103 = (unsigned long )pi;
      __cil_tmp104 = __cil_tmp103 + 16;
      __cil_tmp105 = *((int *)__cil_tmp104);
      __cil_tmp106 = (unsigned long )__cil_tmp105;
      __udelay(__cil_tmp106);
      }
    } else {

    }
    }
    {
    __cil_tmp107 = (unsigned long )pi;
    __cil_tmp108 = __cil_tmp107 + 8;
    __cil_tmp109 = *((int *)__cil_tmp108);
    __cil_tmp110 = __cil_tmp109 + 2;
    outb((unsigned char)5, __cil_tmp110);
    }
    {
    __cil_tmp111 = (unsigned long )pi;
    __cil_tmp112 = __cil_tmp111 + 16;
    if (*((int *)__cil_tmp112)) {
      {
      __cil_tmp113 = (unsigned long )pi;
      __cil_tmp114 = __cil_tmp113 + 16;
      __cil_tmp115 = *((int *)__cil_tmp114);
      __cil_tmp116 = (unsigned long )__cil_tmp115;
      __udelay(__cil_tmp116);
      }
    } else {

    }
    }
    k = 0;
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      if (k < count) {

      } else {
        goto while_break;
      }
      {
      __cil_tmp117 = buf + k;
      __cil_tmp118 = *__cil_tmp117;
      __cil_tmp119 = (unsigned char )__cil_tmp118;
      __cil_tmp120 = (unsigned long )pi;
      __cil_tmp121 = __cil_tmp120 + 8;
      __cil_tmp122 = *((int *)__cil_tmp121);
      outb(__cil_tmp119, __cil_tmp122);
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
      __cil_tmp132 = __cil_tmp131 + 2;
      outb((unsigned char)7, __cil_tmp132);
      }
      {
      __cil_tmp133 = (unsigned long )pi;
      __cil_tmp134 = __cil_tmp133 + 16;
      if (*((int *)__cil_tmp134)) {
        {
        __cil_tmp135 = (unsigned long )pi;
        __cil_tmp136 = __cil_tmp135 + 16;
        __cil_tmp137 = *((int *)__cil_tmp136);
        __cil_tmp138 = (unsigned long )__cil_tmp137;
        __udelay(__cil_tmp138);
        }
      } else {

      }
      }
      {
      __cil_tmp139 = (unsigned long )pi;
      __cil_tmp140 = __cil_tmp139 + 8;
      __cil_tmp141 = *((int *)__cil_tmp140);
      __cil_tmp142 = __cil_tmp141 + 2;
      outb((unsigned char)5, __cil_tmp142);
      }
      {
      __cil_tmp143 = (unsigned long )pi;
      __cil_tmp144 = __cil_tmp143 + 16;
      if (*((int *)__cil_tmp144)) {
        {
        __cil_tmp145 = (unsigned long )pi;
        __cil_tmp146 = __cil_tmp145 + 16;
        __cil_tmp147 = *((int *)__cil_tmp146);
        __cil_tmp148 = (unsigned long )__cil_tmp147;
        __udelay(__cil_tmp148);
        }
      } else {

      }
      }
      k = k + 1;
    }
    while_break: /* CIL Label */ ;
    }
    {
    __cil_tmp149 = (unsigned long )pi;
    __cil_tmp150 = __cil_tmp149 + 8;
    __cil_tmp151 = *((int *)__cil_tmp150);
    __cil_tmp152 = __cil_tmp151 + 2;
    outb((unsigned char)4, __cil_tmp152);
    }
    {
    __cil_tmp153 = (unsigned long )pi;
    __cil_tmp154 = __cil_tmp153 + 16;
    if (*((int *)__cil_tmp154)) {
      {
      __cil_tmp155 = (unsigned long )pi;
      __cil_tmp156 = __cil_tmp155 + 16;
      __cil_tmp157 = *((int *)__cil_tmp156);
      __cil_tmp158 = (unsigned long )__cil_tmp157;
      __udelay(__cil_tmp158);
      }
    } else {

    }
    }
    goto switch_break;
    case_2: /* CIL Label */ 
    {
    __cil_tmp159 = (unsigned long )pi;
    __cil_tmp160 = __cil_tmp159 + 8;
    __cil_tmp161 = *((int *)__cil_tmp160);
    __cil_tmp162 = __cil_tmp161 + 2;
    outb((unsigned char)4, __cil_tmp162);
    }
    {
    __cil_tmp163 = (unsigned long )pi;
    __cil_tmp164 = __cil_tmp163 + 16;
    if (*((int *)__cil_tmp164)) {
      {
      __cil_tmp165 = (unsigned long )pi;
      __cil_tmp166 = __cil_tmp165 + 16;
      __cil_tmp167 = *((int *)__cil_tmp166);
      __cil_tmp168 = (unsigned long )__cil_tmp167;
      __udelay(__cil_tmp168);
      }
    } else {

    }
    }
    {
    __cil_tmp169 = (unsigned long )pi;
    __cil_tmp170 = __cil_tmp169 + 8;
    __cil_tmp171 = *((int *)__cil_tmp170);
    outb((unsigned char)255, __cil_tmp171);
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
    outb((unsigned char)255, __cil_tmp180);
    }
    {
    __cil_tmp181 = (unsigned long )pi;
    __cil_tmp182 = __cil_tmp181 + 16;
    if (*((int *)__cil_tmp182)) {
      {
      __cil_tmp183 = (unsigned long )pi;
      __cil_tmp184 = __cil_tmp183 + 16;
      __cil_tmp185 = *((int *)__cil_tmp184);
      __cil_tmp186 = (unsigned long )__cil_tmp185;
      __udelay(__cil_tmp186);
      }
    } else {

    }
    }
    {
    __cil_tmp187 = (unsigned long )pi;
    __cil_tmp188 = __cil_tmp187 + 8;
    __cil_tmp189 = *((int *)__cil_tmp188);
    outb((unsigned char)115, __cil_tmp189);
    }
    {
    __cil_tmp190 = (unsigned long )pi;
    __cil_tmp191 = __cil_tmp190 + 16;
    if (*((int *)__cil_tmp191)) {
      {
      __cil_tmp192 = (unsigned long )pi;
      __cil_tmp193 = __cil_tmp192 + 16;
      __cil_tmp194 = *((int *)__cil_tmp193);
      __cil_tmp195 = (unsigned long )__cil_tmp194;
      __udelay(__cil_tmp195);
      }
    } else {

    }
    }
    {
    __cil_tmp196 = (unsigned long )pi;
    __cil_tmp197 = __cil_tmp196 + 8;
    __cil_tmp198 = *((int *)__cil_tmp197);
    outb((unsigned char)115, __cil_tmp198);
    }
    {
    __cil_tmp199 = (unsigned long )pi;
    __cil_tmp200 = __cil_tmp199 + 16;
    if (*((int *)__cil_tmp200)) {
      {
      __cil_tmp201 = (unsigned long )pi;
      __cil_tmp202 = __cil_tmp201 + 16;
      __cil_tmp203 = *((int *)__cil_tmp202);
      __cil_tmp204 = (unsigned long )__cil_tmp203;
      __udelay(__cil_tmp204);
      }
    } else {

    }
    }
    {
    __cil_tmp205 = (unsigned long )pi;
    __cil_tmp206 = __cil_tmp205 + 8;
    __cil_tmp207 = *((int *)__cil_tmp206);
    outb((unsigned char)201, __cil_tmp207);
    }
    {
    __cil_tmp208 = (unsigned long )pi;
    __cil_tmp209 = __cil_tmp208 + 16;
    if (*((int *)__cil_tmp209)) {
      {
      __cil_tmp210 = (unsigned long )pi;
      __cil_tmp211 = __cil_tmp210 + 16;
      __cil_tmp212 = *((int *)__cil_tmp211);
      __cil_tmp213 = (unsigned long )__cil_tmp212;
      __udelay(__cil_tmp213);
      }
    } else {

    }
    }
    {
    __cil_tmp214 = (unsigned long )pi;
    __cil_tmp215 = __cil_tmp214 + 8;
    __cil_tmp216 = *((int *)__cil_tmp215);
    outb((unsigned char)201, __cil_tmp216);
    }
    {
    __cil_tmp217 = (unsigned long )pi;
    __cil_tmp218 = __cil_tmp217 + 16;
    if (*((int *)__cil_tmp218)) {
      {
      __cil_tmp219 = (unsigned long )pi;
      __cil_tmp220 = __cil_tmp219 + 16;
      __cil_tmp221 = *((int *)__cil_tmp220);
      __cil_tmp222 = (unsigned long )__cil_tmp221;
      __udelay(__cil_tmp222);
      }
    } else {

    }
    }
    {
    __cil_tmp223 = (unsigned long )pi;
    __cil_tmp224 = __cil_tmp223 + 8;
    __cil_tmp225 = *((int *)__cil_tmp224);
    outb((unsigned char)38, __cil_tmp225);
    }
    {
    __cil_tmp226 = (unsigned long )pi;
    __cil_tmp227 = __cil_tmp226 + 16;
    if (*((int *)__cil_tmp227)) {
      {
      __cil_tmp228 = (unsigned long )pi;
      __cil_tmp229 = __cil_tmp228 + 16;
      __cil_tmp230 = *((int *)__cil_tmp229);
      __cil_tmp231 = (unsigned long )__cil_tmp230;
      __udelay(__cil_tmp231);
      }
    } else {

    }
    }
    {
    __cil_tmp232 = (unsigned long )pi;
    __cil_tmp233 = __cil_tmp232 + 8;
    __cil_tmp234 = *((int *)__cil_tmp233);
    outb((unsigned char)38, __cil_tmp234);
    }
    {
    __cil_tmp235 = (unsigned long )pi;
    __cil_tmp236 = __cil_tmp235 + 16;
    if (*((int *)__cil_tmp236)) {
      {
      __cil_tmp237 = (unsigned long )pi;
      __cil_tmp238 = __cil_tmp237 + 16;
      __cil_tmp239 = *((int *)__cil_tmp238);
      __cil_tmp240 = (unsigned long )__cil_tmp239;
      __udelay(__cil_tmp240);
      }
    } else {

    }
    }
    {
    __cil_tmp241 = (unsigned long )pi;
    __cil_tmp242 = __cil_tmp241 + 8;
    __cil_tmp243 = *((int *)__cil_tmp242);
    outb((unsigned char)200, __cil_tmp243);
    }
    {
    __cil_tmp244 = (unsigned long )pi;
    __cil_tmp245 = __cil_tmp244 + 16;
    if (*((int *)__cil_tmp245)) {
      {
      __cil_tmp246 = (unsigned long )pi;
      __cil_tmp247 = __cil_tmp246 + 16;
      __cil_tmp248 = *((int *)__cil_tmp247);
      __cil_tmp249 = (unsigned long )__cil_tmp248;
      __udelay(__cil_tmp249);
      }
    } else {

    }
    }
    {
    __cil_tmp250 = (unsigned long )pi;
    __cil_tmp251 = __cil_tmp250 + 8;
    __cil_tmp252 = *((int *)__cil_tmp251);
    outb((unsigned char)200, __cil_tmp252);
    }
    {
    __cil_tmp253 = (unsigned long )pi;
    __cil_tmp254 = __cil_tmp253 + 16;
    if (*((int *)__cil_tmp254)) {
      {
      __cil_tmp255 = (unsigned long )pi;
      __cil_tmp256 = __cil_tmp255 + 16;
      __cil_tmp257 = *((int *)__cil_tmp256);
      __cil_tmp258 = (unsigned long )__cil_tmp257;
      __udelay(__cil_tmp258);
      }
    } else {

    }
    }
    {
    __cil_tmp259 = (unsigned long )pi;
    __cil_tmp260 = __cil_tmp259 + 8;
    __cil_tmp261 = *((int *)__cil_tmp260);
    __cil_tmp262 = __cil_tmp261 + 2;
    outb((unsigned char)5, __cil_tmp262);
    }
    {
    __cil_tmp263 = (unsigned long )pi;
    __cil_tmp264 = __cil_tmp263 + 16;
    if (*((int *)__cil_tmp264)) {
      {
      __cil_tmp265 = (unsigned long )pi;
      __cil_tmp266 = __cil_tmp265 + 16;
      __cil_tmp267 = *((int *)__cil_tmp266);
      __cil_tmp268 = (unsigned long )__cil_tmp267;
      __udelay(__cil_tmp268);
      }
    } else {

    }
    }
    k = 0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      if (k < count) {

      } else {
        goto while_break___0;
      }
      {
      __cil_tmp269 = buf + k;
      __cil_tmp270 = *__cil_tmp269;
      __cil_tmp271 = (unsigned char )__cil_tmp270;
      __cil_tmp272 = (unsigned long )pi;
      __cil_tmp273 = __cil_tmp272 + 8;
      __cil_tmp274 = *((int *)__cil_tmp273);
      __cil_tmp275 = __cil_tmp274 + 4;
      outb(__cil_tmp271, __cil_tmp275);
      }
      {
      __cil_tmp276 = (unsigned long )pi;
      __cil_tmp277 = __cil_tmp276 + 16;
      if (*((int *)__cil_tmp277)) {
        {
        __cil_tmp278 = (unsigned long )pi;
        __cil_tmp279 = __cil_tmp278 + 16;
        __cil_tmp280 = *((int *)__cil_tmp279);
        __cil_tmp281 = (unsigned long )__cil_tmp280;
        __udelay(__cil_tmp281);
        }
      } else {

      }
      }
      k = k + 1;
    }
    while_break___0: /* CIL Label */ ;
    }
    {
    __cil_tmp282 = (unsigned long )pi;
    __cil_tmp283 = __cil_tmp282 + 8;
    __cil_tmp284 = *((int *)__cil_tmp283);
    __cil_tmp285 = __cil_tmp284 + 2;
    outb((unsigned char)4, __cil_tmp285);
    }
    {
    __cil_tmp286 = (unsigned long )pi;
    __cil_tmp287 = __cil_tmp286 + 16;
    if (*((int *)__cil_tmp287)) {
      {
      __cil_tmp288 = (unsigned long )pi;
      __cil_tmp289 = __cil_tmp288 + 16;
      __cil_tmp290 = *((int *)__cil_tmp289);
      __cil_tmp291 = (unsigned long )__cil_tmp290;
      __udelay(__cil_tmp291);
      }
    } else {

    }
    }
    goto switch_break;
    case_3: /* CIL Label */ 
    {
    __cil_tmp292 = (unsigned long )pi;
    __cil_tmp293 = __cil_tmp292 + 8;
    __cil_tmp294 = *((int *)__cil_tmp293);
    __cil_tmp295 = __cil_tmp294 + 2;
    outb((unsigned char)4, __cil_tmp295);
    }
    {
    __cil_tmp296 = (unsigned long )pi;
    __cil_tmp297 = __cil_tmp296 + 16;
    if (*((int *)__cil_tmp297)) {
      {
      __cil_tmp298 = (unsigned long )pi;
      __cil_tmp299 = __cil_tmp298 + 16;
      __cil_tmp300 = *((int *)__cil_tmp299);
      __cil_tmp301 = (unsigned long )__cil_tmp300;
      __udelay(__cil_tmp301);
      }
    } else {

    }
    }
    {
    __cil_tmp302 = (unsigned long )pi;
    __cil_tmp303 = __cil_tmp302 + 8;
    __cil_tmp304 = *((int *)__cil_tmp303);
    outb((unsigned char)255, __cil_tmp304);
    }
    {
    __cil_tmp305 = (unsigned long )pi;
    __cil_tmp306 = __cil_tmp305 + 16;
    if (*((int *)__cil_tmp306)) {
      {
      __cil_tmp307 = (unsigned long )pi;
      __cil_tmp308 = __cil_tmp307 + 16;
      __cil_tmp309 = *((int *)__cil_tmp308);
      __cil_tmp310 = (unsigned long )__cil_tmp309;
      __udelay(__cil_tmp310);
      }
    } else {

    }
    }
    {
    __cil_tmp311 = (unsigned long )pi;
    __cil_tmp312 = __cil_tmp311 + 8;
    __cil_tmp313 = *((int *)__cil_tmp312);
    outb((unsigned char)255, __cil_tmp313);
    }
    {
    __cil_tmp314 = (unsigned long )pi;
    __cil_tmp315 = __cil_tmp314 + 16;
    if (*((int *)__cil_tmp315)) {
      {
      __cil_tmp316 = (unsigned long )pi;
      __cil_tmp317 = __cil_tmp316 + 16;
      __cil_tmp318 = *((int *)__cil_tmp317);
      __cil_tmp319 = (unsigned long )__cil_tmp318;
      __udelay(__cil_tmp319);
      }
    } else {

    }
    }
    {
    __cil_tmp320 = (unsigned long )pi;
    __cil_tmp321 = __cil_tmp320 + 8;
    __cil_tmp322 = *((int *)__cil_tmp321);
    outb((unsigned char)115, __cil_tmp322);
    }
    {
    __cil_tmp323 = (unsigned long )pi;
    __cil_tmp324 = __cil_tmp323 + 16;
    if (*((int *)__cil_tmp324)) {
      {
      __cil_tmp325 = (unsigned long )pi;
      __cil_tmp326 = __cil_tmp325 + 16;
      __cil_tmp327 = *((int *)__cil_tmp326);
      __cil_tmp328 = (unsigned long )__cil_tmp327;
      __udelay(__cil_tmp328);
      }
    } else {

    }
    }
    {
    __cil_tmp329 = (unsigned long )pi;
    __cil_tmp330 = __cil_tmp329 + 8;
    __cil_tmp331 = *((int *)__cil_tmp330);
    outb((unsigned char)115, __cil_tmp331);
    }
    {
    __cil_tmp332 = (unsigned long )pi;
    __cil_tmp333 = __cil_tmp332 + 16;
    if (*((int *)__cil_tmp333)) {
      {
      __cil_tmp334 = (unsigned long )pi;
      __cil_tmp335 = __cil_tmp334 + 16;
      __cil_tmp336 = *((int *)__cil_tmp335);
      __cil_tmp337 = (unsigned long )__cil_tmp336;
      __udelay(__cil_tmp337);
      }
    } else {

    }
    }
    {
    __cil_tmp338 = (unsigned long )pi;
    __cil_tmp339 = __cil_tmp338 + 8;
    __cil_tmp340 = *((int *)__cil_tmp339);
    outb((unsigned char)201, __cil_tmp340);
    }
    {
    __cil_tmp341 = (unsigned long )pi;
    __cil_tmp342 = __cil_tmp341 + 16;
    if (*((int *)__cil_tmp342)) {
      {
      __cil_tmp343 = (unsigned long )pi;
      __cil_tmp344 = __cil_tmp343 + 16;
      __cil_tmp345 = *((int *)__cil_tmp344);
      __cil_tmp346 = (unsigned long )__cil_tmp345;
      __udelay(__cil_tmp346);
      }
    } else {

    }
    }
    {
    __cil_tmp347 = (unsigned long )pi;
    __cil_tmp348 = __cil_tmp347 + 8;
    __cil_tmp349 = *((int *)__cil_tmp348);
    outb((unsigned char)201, __cil_tmp349);
    }
    {
    __cil_tmp350 = (unsigned long )pi;
    __cil_tmp351 = __cil_tmp350 + 16;
    if (*((int *)__cil_tmp351)) {
      {
      __cil_tmp352 = (unsigned long )pi;
      __cil_tmp353 = __cil_tmp352 + 16;
      __cil_tmp354 = *((int *)__cil_tmp353);
      __cil_tmp355 = (unsigned long )__cil_tmp354;
      __udelay(__cil_tmp355);
      }
    } else {

    }
    }
    {
    __cil_tmp356 = (unsigned long )pi;
    __cil_tmp357 = __cil_tmp356 + 8;
    __cil_tmp358 = *((int *)__cil_tmp357);
    outb((unsigned char)38, __cil_tmp358);
    }
    {
    __cil_tmp359 = (unsigned long )pi;
    __cil_tmp360 = __cil_tmp359 + 16;
    if (*((int *)__cil_tmp360)) {
      {
      __cil_tmp361 = (unsigned long )pi;
      __cil_tmp362 = __cil_tmp361 + 16;
      __cil_tmp363 = *((int *)__cil_tmp362);
      __cil_tmp364 = (unsigned long )__cil_tmp363;
      __udelay(__cil_tmp364);
      }
    } else {

    }
    }
    {
    __cil_tmp365 = (unsigned long )pi;
    __cil_tmp366 = __cil_tmp365 + 8;
    __cil_tmp367 = *((int *)__cil_tmp366);
    outb((unsigned char)38, __cil_tmp367);
    }
    {
    __cil_tmp368 = (unsigned long )pi;
    __cil_tmp369 = __cil_tmp368 + 16;
    if (*((int *)__cil_tmp369)) {
      {
      __cil_tmp370 = (unsigned long )pi;
      __cil_tmp371 = __cil_tmp370 + 16;
      __cil_tmp372 = *((int *)__cil_tmp371);
      __cil_tmp373 = (unsigned long )__cil_tmp372;
      __udelay(__cil_tmp373);
      }
    } else {

    }
    }
    {
    __cil_tmp374 = (unsigned long )pi;
    __cil_tmp375 = __cil_tmp374 + 8;
    __cil_tmp376 = *((int *)__cil_tmp375);
    outb((unsigned char)200, __cil_tmp376);
    }
    {
    __cil_tmp377 = (unsigned long )pi;
    __cil_tmp378 = __cil_tmp377 + 16;
    if (*((int *)__cil_tmp378)) {
      {
      __cil_tmp379 = (unsigned long )pi;
      __cil_tmp380 = __cil_tmp379 + 16;
      __cil_tmp381 = *((int *)__cil_tmp380);
      __cil_tmp382 = (unsigned long )__cil_tmp381;
      __udelay(__cil_tmp382);
      }
    } else {

    }
    }
    {
    __cil_tmp383 = (unsigned long )pi;
    __cil_tmp384 = __cil_tmp383 + 8;
    __cil_tmp385 = *((int *)__cil_tmp384);
    outb((unsigned char)200, __cil_tmp385);
    }
    {
    __cil_tmp386 = (unsigned long )pi;
    __cil_tmp387 = __cil_tmp386 + 16;
    if (*((int *)__cil_tmp387)) {
      {
      __cil_tmp388 = (unsigned long )pi;
      __cil_tmp389 = __cil_tmp388 + 16;
      __cil_tmp390 = *((int *)__cil_tmp389);
      __cil_tmp391 = (unsigned long )__cil_tmp390;
      __udelay(__cil_tmp391);
      }
    } else {

    }
    }
    {
    __cil_tmp392 = (unsigned long )pi;
    __cil_tmp393 = __cil_tmp392 + 8;
    __cil_tmp394 = *((int *)__cil_tmp393);
    __cil_tmp395 = __cil_tmp394 + 2;
    outb((unsigned char)5, __cil_tmp395);
    }
    {
    __cil_tmp396 = (unsigned long )pi;
    __cil_tmp397 = __cil_tmp396 + 16;
    if (*((int *)__cil_tmp397)) {
      {
      __cil_tmp398 = (unsigned long )pi;
      __cil_tmp399 = __cil_tmp398 + 16;
      __cil_tmp400 = *((int *)__cil_tmp399);
      __cil_tmp401 = (unsigned long )__cil_tmp400;
      __udelay(__cil_tmp401);
      }
    } else {

    }
    }
    k = 0;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;
      {
      __cil_tmp402 = count / 2;
      if (k < __cil_tmp402) {

      } else {
        goto while_break___1;
      }
      }
      {
      __cil_tmp403 = (u16 *)buf;
      __cil_tmp404 = __cil_tmp403 + k;
      __cil_tmp405 = *__cil_tmp404;
      __cil_tmp406 = (unsigned long )pi;
      __cil_tmp407 = __cil_tmp406 + 8;
      __cil_tmp408 = *((int *)__cil_tmp407);
      __cil_tmp409 = __cil_tmp408 + 4;
      outw(__cil_tmp405, __cil_tmp409);
      }
      {
      __cil_tmp410 = (unsigned long )pi;
      __cil_tmp411 = __cil_tmp410 + 16;
      if (*((int *)__cil_tmp411)) {
        {
        __cil_tmp412 = (unsigned long )pi;
        __cil_tmp413 = __cil_tmp412 + 16;
        __cil_tmp414 = *((int *)__cil_tmp413);
        __cil_tmp415 = (unsigned long )__cil_tmp414;
        __udelay(__cil_tmp415);
        }
      } else {

      }
      }
      k = k + 1;
    }
    while_break___1: /* CIL Label */ ;
    }
    {
    __cil_tmp416 = (unsigned long )pi;
    __cil_tmp417 = __cil_tmp416 + 8;
    __cil_tmp418 = *((int *)__cil_tmp417);
    __cil_tmp419 = __cil_tmp418 + 2;
    outb((unsigned char)4, __cil_tmp419);
    }
    {
    __cil_tmp420 = (unsigned long )pi;
    __cil_tmp421 = __cil_tmp420 + 16;
    if (*((int *)__cil_tmp421)) {
      {
      __cil_tmp422 = (unsigned long )pi;
      __cil_tmp423 = __cil_tmp422 + 16;
      __cil_tmp424 = *((int *)__cil_tmp423);
      __cil_tmp425 = (unsigned long )__cil_tmp424;
      __udelay(__cil_tmp425);
      }
    } else {

    }
    }
    goto switch_break;
    case_4: /* CIL Label */ 
    {
    __cil_tmp426 = (unsigned long )pi;
    __cil_tmp427 = __cil_tmp426 + 8;
    __cil_tmp428 = *((int *)__cil_tmp427);
    __cil_tmp429 = __cil_tmp428 + 2;
    outb((unsigned char)4, __cil_tmp429);
    }
    {
    __cil_tmp430 = (unsigned long )pi;
    __cil_tmp431 = __cil_tmp430 + 16;
    if (*((int *)__cil_tmp431)) {
      {
      __cil_tmp432 = (unsigned long )pi;
      __cil_tmp433 = __cil_tmp432 + 16;
      __cil_tmp434 = *((int *)__cil_tmp433);
      __cil_tmp435 = (unsigned long )__cil_tmp434;
      __udelay(__cil_tmp435);
      }
    } else {

    }
    }
    {
    __cil_tmp436 = (unsigned long )pi;
    __cil_tmp437 = __cil_tmp436 + 8;
    __cil_tmp438 = *((int *)__cil_tmp437);
    outb((unsigned char)255, __cil_tmp438);
    }
    {
    __cil_tmp439 = (unsigned long )pi;
    __cil_tmp440 = __cil_tmp439 + 16;
    if (*((int *)__cil_tmp440)) {
      {
      __cil_tmp441 = (unsigned long )pi;
      __cil_tmp442 = __cil_tmp441 + 16;
      __cil_tmp443 = *((int *)__cil_tmp442);
      __cil_tmp444 = (unsigned long )__cil_tmp443;
      __udelay(__cil_tmp444);
      }
    } else {

    }
    }
    {
    __cil_tmp445 = (unsigned long )pi;
    __cil_tmp446 = __cil_tmp445 + 8;
    __cil_tmp447 = *((int *)__cil_tmp446);
    outb((unsigned char)255, __cil_tmp447);
    }
    {
    __cil_tmp448 = (unsigned long )pi;
    __cil_tmp449 = __cil_tmp448 + 16;
    if (*((int *)__cil_tmp449)) {
      {
      __cil_tmp450 = (unsigned long )pi;
      __cil_tmp451 = __cil_tmp450 + 16;
      __cil_tmp452 = *((int *)__cil_tmp451);
      __cil_tmp453 = (unsigned long )__cil_tmp452;
      __udelay(__cil_tmp453);
      }
    } else {

    }
    }
    {
    __cil_tmp454 = (unsigned long )pi;
    __cil_tmp455 = __cil_tmp454 + 8;
    __cil_tmp456 = *((int *)__cil_tmp455);
    outb((unsigned char)115, __cil_tmp456);
    }
    {
    __cil_tmp457 = (unsigned long )pi;
    __cil_tmp458 = __cil_tmp457 + 16;
    if (*((int *)__cil_tmp458)) {
      {
      __cil_tmp459 = (unsigned long )pi;
      __cil_tmp460 = __cil_tmp459 + 16;
      __cil_tmp461 = *((int *)__cil_tmp460);
      __cil_tmp462 = (unsigned long )__cil_tmp461;
      __udelay(__cil_tmp462);
      }
    } else {

    }
    }
    {
    __cil_tmp463 = (unsigned long )pi;
    __cil_tmp464 = __cil_tmp463 + 8;
    __cil_tmp465 = *((int *)__cil_tmp464);
    outb((unsigned char)115, __cil_tmp465);
    }
    {
    __cil_tmp466 = (unsigned long )pi;
    __cil_tmp467 = __cil_tmp466 + 16;
    if (*((int *)__cil_tmp467)) {
      {
      __cil_tmp468 = (unsigned long )pi;
      __cil_tmp469 = __cil_tmp468 + 16;
      __cil_tmp470 = *((int *)__cil_tmp469);
      __cil_tmp471 = (unsigned long )__cil_tmp470;
      __udelay(__cil_tmp471);
      }
    } else {

    }
    }
    {
    __cil_tmp472 = (unsigned long )pi;
    __cil_tmp473 = __cil_tmp472 + 8;
    __cil_tmp474 = *((int *)__cil_tmp473);
    outb((unsigned char)201, __cil_tmp474);
    }
    {
    __cil_tmp475 = (unsigned long )pi;
    __cil_tmp476 = __cil_tmp475 + 16;
    if (*((int *)__cil_tmp476)) {
      {
      __cil_tmp477 = (unsigned long )pi;
      __cil_tmp478 = __cil_tmp477 + 16;
      __cil_tmp479 = *((int *)__cil_tmp478);
      __cil_tmp480 = (unsigned long )__cil_tmp479;
      __udelay(__cil_tmp480);
      }
    } else {

    }
    }
    {
    __cil_tmp481 = (unsigned long )pi;
    __cil_tmp482 = __cil_tmp481 + 8;
    __cil_tmp483 = *((int *)__cil_tmp482);
    outb((unsigned char)201, __cil_tmp483);
    }
    {
    __cil_tmp484 = (unsigned long )pi;
    __cil_tmp485 = __cil_tmp484 + 16;
    if (*((int *)__cil_tmp485)) {
      {
      __cil_tmp486 = (unsigned long )pi;
      __cil_tmp487 = __cil_tmp486 + 16;
      __cil_tmp488 = *((int *)__cil_tmp487);
      __cil_tmp489 = (unsigned long )__cil_tmp488;
      __udelay(__cil_tmp489);
      }
    } else {

    }
    }
    {
    __cil_tmp490 = (unsigned long )pi;
    __cil_tmp491 = __cil_tmp490 + 8;
    __cil_tmp492 = *((int *)__cil_tmp491);
    outb((unsigned char)38, __cil_tmp492);
    }
    {
    __cil_tmp493 = (unsigned long )pi;
    __cil_tmp494 = __cil_tmp493 + 16;
    if (*((int *)__cil_tmp494)) {
      {
      __cil_tmp495 = (unsigned long )pi;
      __cil_tmp496 = __cil_tmp495 + 16;
      __cil_tmp497 = *((int *)__cil_tmp496);
      __cil_tmp498 = (unsigned long )__cil_tmp497;
      __udelay(__cil_tmp498);
      }
    } else {

    }
    }
    {
    __cil_tmp499 = (unsigned long )pi;
    __cil_tmp500 = __cil_tmp499 + 8;
    __cil_tmp501 = *((int *)__cil_tmp500);
    outb((unsigned char)38, __cil_tmp501);
    }
    {
    __cil_tmp502 = (unsigned long )pi;
    __cil_tmp503 = __cil_tmp502 + 16;
    if (*((int *)__cil_tmp503)) {
      {
      __cil_tmp504 = (unsigned long )pi;
      __cil_tmp505 = __cil_tmp504 + 16;
      __cil_tmp506 = *((int *)__cil_tmp505);
      __cil_tmp507 = (unsigned long )__cil_tmp506;
      __udelay(__cil_tmp507);
      }
    } else {

    }
    }
    {
    __cil_tmp508 = (unsigned long )pi;
    __cil_tmp509 = __cil_tmp508 + 8;
    __cil_tmp510 = *((int *)__cil_tmp509);
    outb((unsigned char)200, __cil_tmp510);
    }
    {
    __cil_tmp511 = (unsigned long )pi;
    __cil_tmp512 = __cil_tmp511 + 16;
    if (*((int *)__cil_tmp512)) {
      {
      __cil_tmp513 = (unsigned long )pi;
      __cil_tmp514 = __cil_tmp513 + 16;
      __cil_tmp515 = *((int *)__cil_tmp514);
      __cil_tmp516 = (unsigned long )__cil_tmp515;
      __udelay(__cil_tmp516);
      }
    } else {

    }
    }
    {
    __cil_tmp517 = (unsigned long )pi;
    __cil_tmp518 = __cil_tmp517 + 8;
    __cil_tmp519 = *((int *)__cil_tmp518);
    outb((unsigned char)200, __cil_tmp519);
    }
    {
    __cil_tmp520 = (unsigned long )pi;
    __cil_tmp521 = __cil_tmp520 + 16;
    if (*((int *)__cil_tmp521)) {
      {
      __cil_tmp522 = (unsigned long )pi;
      __cil_tmp523 = __cil_tmp522 + 16;
      __cil_tmp524 = *((int *)__cil_tmp523);
      __cil_tmp525 = (unsigned long )__cil_tmp524;
      __udelay(__cil_tmp525);
      }
    } else {

    }
    }
    {
    __cil_tmp526 = (unsigned long )pi;
    __cil_tmp527 = __cil_tmp526 + 8;
    __cil_tmp528 = *((int *)__cil_tmp527);
    __cil_tmp529 = __cil_tmp528 + 2;
    outb((unsigned char)5, __cil_tmp529);
    }
    {
    __cil_tmp530 = (unsigned long )pi;
    __cil_tmp531 = __cil_tmp530 + 16;
    if (*((int *)__cil_tmp531)) {
      {
      __cil_tmp532 = (unsigned long )pi;
      __cil_tmp533 = __cil_tmp532 + 16;
      __cil_tmp534 = *((int *)__cil_tmp533);
      __cil_tmp535 = (unsigned long )__cil_tmp534;
      __udelay(__cil_tmp535);
      }
    } else {

    }
    }
    k = 0;
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;
      {
      __cil_tmp536 = count / 4;
      if (k < __cil_tmp536) {

      } else {
        goto while_break___2;
      }
      }
      {
      __cil_tmp537 = (u32 *)buf;
      __cil_tmp538 = __cil_tmp537 + k;
      __cil_tmp539 = *__cil_tmp538;
      __cil_tmp540 = (unsigned long )pi;
      __cil_tmp541 = __cil_tmp540 + 8;
      __cil_tmp542 = *((int *)__cil_tmp541);
      __cil_tmp543 = __cil_tmp542 + 4;
      outl(__cil_tmp539, __cil_tmp543);
      }
      {
      __cil_tmp544 = (unsigned long )pi;
      __cil_tmp545 = __cil_tmp544 + 16;
      if (*((int *)__cil_tmp545)) {
        {
        __cil_tmp546 = (unsigned long )pi;
        __cil_tmp547 = __cil_tmp546 + 16;
        __cil_tmp548 = *((int *)__cil_tmp547);
        __cil_tmp549 = (unsigned long )__cil_tmp548;
        __udelay(__cil_tmp549);
        }
      } else {

      }
      }
      k = k + 1;
    }
    while_break___2: /* CIL Label */ ;
    }
    {
    __cil_tmp550 = (unsigned long )pi;
    __cil_tmp551 = __cil_tmp550 + 8;
    __cil_tmp552 = *((int *)__cil_tmp551);
    __cil_tmp553 = __cil_tmp552 + 2;
    outb((unsigned char)4, __cil_tmp553);
    }
    {
    __cil_tmp554 = (unsigned long )pi;
    __cil_tmp555 = __cil_tmp554 + 16;
    if (*((int *)__cil_tmp555)) {
      {
      __cil_tmp556 = (unsigned long )pi;
      __cil_tmp557 = __cil_tmp556 + 16;
      __cil_tmp558 = *((int *)__cil_tmp557);
      __cil_tmp559 = (unsigned long )__cil_tmp558;
      __udelay(__cil_tmp559);
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