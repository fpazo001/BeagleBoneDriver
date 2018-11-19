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
	{ 0x38722a83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf0da78a5, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x3c6ea5f4, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x99e66a9c, __VMLINUX_SYMBOL_STR(rt_mutex_destroy) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xf5144fce, __VMLINUX_SYMBOL_STR(__mutex_do_init) },
	{ 0xeb5bbc2f, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x26ad0a99, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9e57ab6, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x1c5a7469, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xcf034a3e, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xc47cdae3, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x95ce9ef2, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x7ba7daa1, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x423adf2e, __VMLINUX_SYMBOL_STR(_mutex_trylock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x60ee9d7b, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "20703DBAE73D9030B3DF19D");
