﻿
#include "comm/boot_info.h"
#include "cpu/cpu.h"
#include "cpu/irq.h"

int global_var = 0x1234;
int globa_var_zero;
static int static_global_var = 0x2345;
static int static_global_var_zero;

const int const_int = 0x33;
const char *str = "abcdefg";

/**
 * 内核入口
 */
void kernel_init(boot_info_t *boot_info) {
    cpu_init();
    irq_init();
}

void init_main(void) {
    for (;;) {}
}