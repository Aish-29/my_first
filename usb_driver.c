#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/usb.h>

//probe function
static int pen_probe(struct usb_interface *interface,const struct usb_device_id *id)
{
    printk(KERN_INFO "[*] Aishnaya's pendrive(%04X:%04X) plugged\n",id->idVendor ,id->idProduct);
    return 0;
}

//disconnect
static void pen_disconnect(struct usb_interface *interface){
    printk(KERN_INFO "[*] Aishnaya's Pendrive removed!\n");
}

//usb_device_id
static struct usb_device_id pen_table[] = {
    //ffff:5678
    { USB_DEVICE(0xffff,0x5678)},
    {}
};
MODULE_DEVICE_TABLE(usb,pen_table);

//usb_driver
static struct usb_driver pen_driver =
{
    .name = "Aish-USB stick driver",
    .id_table = pen_table,
    .probe = pen_probe,
    .disconnect = pen_disconnect,
};
static int __init pen_init(void){
    int ret = -1;
    printk(KERN_INFO "[*]Aishnaya Constructor of driver");
    printk(KERN_INFO "\tRegistering Driver with Kernel");
    ret = usb_register(&pen_driver);
    printk(KERN_INFO "\tRegistration is complete!!");
    return ret;
}

static void __exit pen_exit(void){
    printk(KERN_INFO "[*]Aishnaya Destructor of driver");
    usb_deregister(&pen_driver);
    printk(KERN_INFO "\tUnregistration is complete!!");
    
}

module_init(pen_init);
module_exit(pen_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aish");
MODULE_DESCRIPTION("USB Pen Registration Driver");
