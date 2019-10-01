#include<linux/module.h>  /*needed by all modules*/
#include<linux/kernel.h>  /*needed for KERN_INFO*/
#include<linux/init.h>    /*needed for the macros*/

///< The license type -- this affects runtime behavior 
MODULE_LICENSE("GPL"); 
  
///< The author -- visible when you use modinfo 
MODULE_AUTHOR("Aishnaya J"); 
  
///< The description -- see modinfo 
MODULE_DESCRIPTION("A simple Hello world LKM!"); 
  
///< The version of the module 
MODULE_VERSION("0.1"); 
  
static int __init hello_start(void) 
{ 
    printk(KERN_INFO "Loading kern module...\n"); 
    printk(KERN_INFO "Hello from Aishnaya!!\n"); 
    return 0; 
} 
  
static void __exit hello_end(void) 
{ 
    printk(KERN_INFO "Goodbye Miss.\n"); 
} 
  
module_init(hello_start); 
module_exit(hello_end); 


