#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/init.h> /* Needed for the macros */

static int count=10;

int init_module(void)
{
  printk(KERN_INFO "Variable count = %d\n",count);
  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "Removing the module \n");
}
module_param(count,int,0);

MODULE_LICENSE("GPL");
