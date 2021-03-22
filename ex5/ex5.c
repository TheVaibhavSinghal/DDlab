#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/init.h> /* Needed for the macros */

static int __init start(void)
{
  printk(KERN_INFO "Loading my module...\n");
  printk(KERN_INFO "DD Lab Exercise 5\n");
  return 0;
}

static void __exit end(void)
{
  printk(KERN_INFO "Goodbye! Have a great day. \n");
}

module_init(start);
module_exit(end);
