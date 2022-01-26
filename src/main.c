/*
 * Copyright (c) 2022, Technoculture Research
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);

	while(1) {
		printk("Hello Tracer\n");
		k_sleep(K_MSEC(10));
	}
}
