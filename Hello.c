#include<linux/init.h>
#include<linux/module.h>

#include<linux/moduleparam.h>


int param_var = 0;

module_param(param_var, int,S_IRUSR | S_IWUSR);

void display(){
    printk(KERN_ALERT "TEST: param = %d",param_var);
}



static int hello_init(void){
    printk(KERN_ALERT "TEST: Hello world, this is Aishnaya :)");
    display();
    return 0;
}

static void hello_exit(void){
    printk(KERN_ALERT "TEST: GoodBye, from Aishnaya :/");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Aishnaya");
MODULE_DESCRIPTION("Kernel model demonstration");
MODULE_LICENSE("GPL");
