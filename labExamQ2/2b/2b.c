#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/init.h> /* Needed for the macros */

int init_module(void)
{
  printk(KERN_INFO "Vaibhav Singhal\n");
  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "Goodbye! Have a great day. \n");
}

MODULE_LICENSE("GPL");
