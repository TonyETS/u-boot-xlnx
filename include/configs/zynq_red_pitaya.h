#ifndef __CONFIG_ZYNQ_RED_PITAYA_H
#define __CONFIG_ZYNQ_RED_PITAYA_H

#define CONFIG_ZYNQ_I2C0
#define CONFIG_ZYNQ_EEPROM

#include <configs/zynq-common.h>

#undef CONFIG_SYS_I2C_EEPROM_ADDR_LEN
#undef CONFIG_SYS_I2C_EEPROM_ADDR
#undef CONFIG_SYS_EEPROM_PAGE_WRITE_BITS
#undef CONFIG_SYS_EEPROM_SIZE

#undef CONFIG_ENV_SIZE
#undef CONFIG_ENV_OFFSET

#define CONFIG_SYS_I2C_EEPROM_ADDR_LEN		2
#define CONFIG_SYS_I2C_EEPROM_ADDR		0x50
#define CONFIG_SYS_EEPROM_PAGE_WRITE_BITS	5
#define CONFIG_SYS_EEPROM_SIZE			8192 /* Bytes */

#define CONFIG_ENV_SIZE		1024 /* Total Size of Environment Sector */
#define CONFIG_ENV_OFFSET	(2048*3) /* WP area starts at last 1/4 of 8k eeprom */

#define CONFIG_EXTRA_ENV_SETTINGS \
    "bootcmd=run $modeboot\0" \
    "bootdelay=3\0" \
    "baudrate=115200\0" \
    "ipaddr=10.10.70.102\0" \
    "serverip=10.10.70.101\0" \
    "prod_date=12/22/13\0" \
    "kernel_image=uImage\0" \
    "ramdisk_image=uramdisk.image.gz\0" \
    "devicetree_image=devicetree.dtb\0" \
    "bitstream_image=system.bit.bin\0" \
    "loadbit_addr=0x100000\0" \
    "kernel_size=0x500000\0" \
    "devicetree_size=0x20000\0" \
    "ramdisk_size=0x5E0000\0" \
    "fdt_high=0x20000000\0" \
    "initrd_high=0x20000000\0" \
    "sdboot=echo Running script from SD... && mmcinfo && fatload mmc 0 0x2000000 u-boot.scr && source 0x2000000\0" \
    "ethaddr=00:26:32:08:11:87\0" \
    "nav_code=4702\0" \
    "hw_rev=STEM_125-14_v1.0\0" \
    "serial=16240000\0"



#endif /* __CONFIG_ZYNQ_RED_PITAYA_H */
