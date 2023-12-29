#include <hello1.h>

MODULE_AUTHOR("Sylenko Yaroslav");
MODULE_DESCRIPTION("Lab 4 hello2.c");
MODULE_LICENSE("Dual BSD/GPL");

static uint param = 1;

module_param(param, uint, 0444);
MODULE_PARM_DESC(param, "My description");

static int __init hello2_init(void){
	pr_emerg("Calling print_hello() from hello2...\n");
	print_hello(param);
	return 0;
}

static void __exit hello2_exit(void){}

module_init(hello2_init);
module_exit(hello2_exit);
