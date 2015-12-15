#include "hidbp_mod.h"
/*
 * Version Information
 */
#define DRIVER_VERSION    ""
#define DRIVER_AUTHOR     "Vojtech Pavlik <vojtech@ucw.cz>"
#define DRIVER_DESC       "USB HID Boot Protocol keyboard driver"
#define DRIVER_LICENSE    "GPL"

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);

/* You should change the ID for the device you have
 * You can use "dmesg | tail" to look the ID of
 * your device*/
#define SUNSONNY_VENDOR_ID   0x1017
#define SUNSONNY_PRODUCT_ID  0x2010


static struct usb_device_id hidbp_keyboard_id_table [] =
{
    { USB_DEVICE(SUNSONNY_VENDOR_ID, SUNSONNY_PRODUCT_ID) },
    { /* Terminating entry */ }
};

MODULE_DEVICE_TABLE (usb, hidbp_keyboard_id_table);

static struct usb_driver hidbp_keyboard_driver = {
    .name       = "sunsonny_drv", //You can change it
    .probe      = hidbp_keyboard_probe,
    .disconnect = hidbp_keyboard_disconnect,
    .id_table   = hidbp_keyboard_id_table,
};

static int __init hidbp_keyboard_init(void) {
    return usb_register(&hidbp_keyboard_driver);
}

static void __exit hidbp_keyboard_exit(void) {
    usb_deregister(&hidbp_keyboard_driver);
}

module_init(hidbp_keyboard_init);
module_exit(hidbp_keyboard_exit);
