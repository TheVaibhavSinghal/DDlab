#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>

int char_dd_open (struct inode *pinode, struct file *pfile)
{
  printk(KERN_INFO "Inside the %s function", __FUNCTION__);
  return 0;
}
ssize_t char_dd_read (struct file *pfile, char __user *buffer, size_t len, loff_t *offset)
{
  printk(KERN_INFO "Inside the %s function", __FUNCTION__);
  return 0;
}
ssize_t char_dd_write (struct file *pfile, const char __user *buffer, size_t len, loff_t *offset)
{
  printk(KERN_INFO "Inside the %s function", __FUNCTION__);
  return len;
}
int char_dd_release (struct inode *pinode, struct file *pfile)
{
  printk(KERN_INFO "Inside the %s function", __FUNCTION__);
  return 0;
}
struct file_operations char_drv_fops = {
  .owner = THIS_MODULE,
  .open = char_dd_open,
  .read = char_dd_read,
  .write = char_dd_write,
  .release = char_dd_release,
};
static int __init start(void)
{
   printk(KERN_INFO "Inside the %s function", __FUNCTION__);
   register_chrdev(500, "Vaibhav char dd", &char_drv_fops);
   return 0;
}
static void __exit end(void)
{
  printk(KERN_INFO "Inside the %s function", __FUNCTION__);
  unregister_chrdev(500, "Vaibhav char dd");
}
module_init(start);
module_exit(end);
