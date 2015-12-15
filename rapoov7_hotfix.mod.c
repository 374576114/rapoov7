#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1fc32c62, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6a4bf290, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5fe56825, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x177b85b7, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1f1ffedb, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x6274557a, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3fd15f64, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce1c96a1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xac7d280c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x288a77b9, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1ec8b51d, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2662296d, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x9694ec37, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1a236d64, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa905287d, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x13ab7042, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdeca9ecf, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbbe04dd6, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xb749ae89, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1fd0ef00, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd88bdbd8, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf812cff6, __VMLINUX_SYMBOL_STR(memscan) },
	{ 0xad51662c, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xc7daeb23, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1017p2010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DF367F6B6BC2ED427F63003");
