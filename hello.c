#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

static int hello_horld_init(void)
{
	printk(KERN_INFO "Hello horld\n");
	return 0;
}

static void hello_horld_exit(void)
{
	printk(KERN_INFO "Goodbye horld\n");
}

module_init(hello_horld_init);
module_exit(hello_horld_exit);
