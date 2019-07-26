// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2019, Cloudbase Solutions SRL
 *
 * Authors:
 *   Adrian Vladu <avladu@cloudbasesolutions.com>
 */

#include <linux/init.h>
#include <linux/module.h>

// https://www.apriorit.com/dev-blog/195-simple-driver-for-linux-os

static int __init my_init(void)
{
	printk ( KERN_NOTICE "First driver init");
	return 0;
}

static void __exit my_exit(void)
{
	printk ( KERN_NOTICE "First driver exit");
	return;
}

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Adrian Vladu's playground Linux module");


subsys_initcall(my_init);
//module_init(my_init);
module_exit(my_exit);

