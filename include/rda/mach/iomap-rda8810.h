#ifndef __ASM_ARCH_RDA_IOMAP_H
#define __ASM_ARCH_RDA_IOMAP_H

#include <linux/sizes.h>

/*
 * RDA8810 internal I/O mappings
 *
 * We have the following mapping:
 *      phys		virt
 *	00100000	FA000000
 *      20000000	FA000000 + sizeof(pre_io_space)
 *      others...
 *
 */
#define	RDA_IO_BASE		0xFA000000

/*
 * no need remap from AP
 */
#define RDA_SRAM_BASE		(RDA_IO_BASE + 0)
#define RDA_SRAM_PHYS		0x00100000
#define RDA_SRAM_SIZE		SZ_64K

#define RDA_MODEM_PHYS		0x10000000
#define RDA_MODEM_SIZE		SZ_256M

#define RDA_MODEM_CLOCK_PHYS	0x11A02000
#define RDA_MODEM_CLOCK_SIZE	SZ_4K

#define RDA_RTC_PHYS		0x11A06000
#define RDA_RTC_SIZE		SZ_4K

#define RDA_MODEM_COM_PHYS	0x11A0A000
#define RDA_MODEM_COM_SIZE	SZ_4K

#define RDA_MODEM_SPI2_AP_PHYS	0x11A14000
#define RDA_MODEM_SPI2_AP_SIZE	SZ_4K

#define RDA_MODEM_EBC_BASE	(RDA_SRAM_BASE + RDA_SRAM_SIZE)
#define RDA_MODEM_EBC_PHYS	0x11A03000
#define RDA_MODEM_EBC_SIZE	SZ_4K

#define RDA_MODEM_BCPU_BASE	(RDA_MODEM_EBC_BASE + RDA_MODEM_EBC_SIZE)
#define RDA_MODEM_BCPU_PHYS	0x11909000
#define RDA_MODEM_BCPU_SIZE	SZ_4K

#define RDA_MODEM_XCPU_BASE	(RDA_MODEM_BCPU_BASE + RDA_MODEM_BCPU_SIZE)
#define RDA_MODEM_XCPU_PHYS	0x11A16000
#define RDA_MODEM_XCPU_SIZE	SZ_4K

/*
 * start io remap
 */

#define RDA_MD_MAILBOX_PHYS	0x00200000
#define RDA_MD_MAILBOX_SIZE	SZ_8K

#define RDA_MD_SYSCTRL_PHYS	0x11A00000
#define RDA_MD_SYSCTRL_SIZE	SZ_4K

#define RDA_CONFIG_REGS_PHYS	0x11A09000
#define RDA_CONFIG_REGS_SIZE	SZ_4K

#define RDA_CAMERA_PHYS		0x20000000
#define RDA_CAMERA_SIZE		SZ_256K

#define RDA_GOUDA_MEM_PHYS	0x20040000
#define RDA_GOUDA_MEM_SIZE	SZ_256K

#define RDA_GPU_PHYS		0x20080000
#define RDA_GPU_SIZE		SZ_256K

#define RDA_VOC_PHYS		0x200C0000
#define RDA_VOC_SIZE		SZ_256K

#define RDA_USB_PHYS		0x20400000
#define RDA_USB_SIZE		SZ_256K

#define RDA_SPIFLASH_PHYS	0x20440000
#define RDA_SPIFLASH_SIZE	SZ_256K

#define RDA_CONNECT_PHYS	0x21000000
#define RDA_CONNECT_SIZE	SZ_4K

#define RDA_L2CC_BASE		(RDA_MODEM_XCPU_BASE + RDA_MODEM_XCPU_SIZE)
#define RDA_L2CC_PHYS		0x21100000
#define RDA_L2CC_SIZE		SZ_4K

/* APB0 */
#define RDA_INTC_BASE		(RDA_L2CC_BASE + RDA_L2CC_SIZE)
#define RDA_INTC_PHYS		0x20800000
#define RDA_INTC_SIZE		SZ_4K

#define RDA_IMEM_BASE		(RDA_INTC_BASE + RDA_INTC_SIZE)
#define RDA_IMEM_PHYS		0x20810000
#define RDA_IMEM_SIZE		SZ_4K

#define RDA_DMA_PHYS		0x20820000
#define RDA_DMA_SIZE		SZ_4K

#define RDA_VPU_PHYS           0x20830000
#define RDA_VPU_SIZE           SZ_4K

#define RDA_GOUDA_PHYS		0x20840000
#define RDA_GOUDA_SIZE		SZ_4K

#define RDA_CAMERA_DMA_PHYS	0x20850000
#define RDA_CAMERA_DMA_SIZE	SZ_4K

/* APB1 */
#define RDA_SYSCTRL_BASE	(RDA_IMEM_BASE + RDA_IMEM_SIZE)
#define RDA_SYSCTRL_PHYS	0x20900000
#define RDA_SYSCTRL_SIZE	SZ_4K

#define RDA_TIMER_BASE		(RDA_SYSCTRL_BASE + RDA_SYSCTRL_SIZE)
#define RDA_TIMER_PHYS		0x20910000
#define RDA_TIMER_SIZE		SZ_4K

#define RDA_KEYPAD_PHYS		0x20920000
#define RDA_KEYPAD_SIZE		SZ_4K

#define RDA_GPIOA_BASE		(RDA_TIMER_BASE + RDA_TIMER_SIZE)
#define RDA_GPIOA_PHYS		0x20930000
#define RDA_GPIOA_SIZE		SZ_4K

#define RDA_GPIOB_BASE		(RDA_GPIOA_BASE + RDA_GPIOA_SIZE)
#define RDA_GPIOB_PHYS		0x20931000
#define RDA_GPIOB_SIZE		SZ_4K

#define RDA_GPIOD_BASE		(RDA_GPIOB_BASE + RDA_GPIOB_SIZE)
#define RDA_GPIOD_PHYS		0x20932000
#define RDA_GPIOD_SIZE		SZ_4K

#define RDA_GPIOC_BASE		(RDA_GPIOD_BASE + RDA_GPIOD_SIZE)
#define RDA_GPIOC_PHYS		0x11A08000
#define RDA_GPIOC_SIZE		SZ_4K

#define RDA_PWM_BASE		(RDA_GPIOC_BASE + RDA_GPIOC_SIZE)
#define RDA_PWM_PHYS		0x20940000
#define RDA_PWM_SIZE		SZ_4K

#define RDA_I2C1_PHYS		0x20950000
#define RDA_I2C1_SIZE		SZ_4K

#define RDA_I2C2_PHYS		0x20960000
#define RDA_I2C2_SIZE		SZ_4K

#define RDA_I2C3_PHYS		0x20970000
#define RDA_I2C3_SIZE		SZ_4K

#define RDA_COMREGS_BASE	(RDA_PWM_BASE + RDA_PWM_SIZE)
#define RDA_COMREGS_PHYS	0x20980000
#define RDA_COMREGS_SIZE	SZ_4K

#define RDA_DMC400_PHYS		0x20990000
#define RDA_DMC400_SIZE		SZ_4K

#define RDA_DDRPHY_PHYS		0x209A0000
#define RDA_DDRPHY_SIZE		SZ_4K

#define RDA_DBGAPB_BASE		(RDA_COMREGS_BASE + RDA_COMREGS_SIZE)
#define RDA_DBGAPB_PHYS		0x209B0000
#define RDA_DBGAPB_SIZE		SZ_4K

#define RDA_AIF_BASE		(RDA_DBGAPB_BASE + RDA_DBGAPB_SIZE)
#define RDA_AIF_PHYS		0x209E0000
#define RDA_AIF_SIZE		SZ_4K

#define RDA_AUIFC_BASE		(RDA_AIF_BASE + RDA_AIF_SIZE)
#define RDA_AUIFC_PHYS		0x209F0000
#define RDA_AUIFC_SIZE		SZ_4K

/* APB2 */
#define RDA_UART1_PHYS		0x20A00000
#define RDA_UART1_SIZE		SZ_4K

#define RDA_UART2_PHYS		0x20A10000
#define RDA_UART2_SIZE		SZ_4K

#define RDA_SPI1_PHYS		0x20A20000
#define RDA_SPI1_SIZE		SZ_4K

#define RDA_SPI2_PHYS		0x20A30000
#define RDA_SPI2_SIZE		SZ_4K

#define RDA_SPI3_PHYS		0x20A40000
#define RDA_SPI3_SIZE		SZ_4K

#define RDA_SDMMC1_PHYS		0x20A50000
#define RDA_SDMMC1_SIZE		SZ_4K

#define RDA_SDMMC2_PHYS		0x20A60000
#define RDA_SDMMC2_SIZE		SZ_4K

#define RDA_SDMMC3_PHYS		0x20A70000
#define RDA_SDMMC3_SIZE		SZ_4K

#define RDA_NAND_PHYS		0x20A80000
#define RDA_NAND_SIZE		SZ_16K

#define RDA_UART3_BASE		(RDA_AUIFC_BASE + RDA_AUIFC_SIZE)
#define RDA_UART3_PHYS		0x20A90000
#define RDA_UART3_SIZE		SZ_16K

#define RDA_IFC_BASE		(RDA_UART3_BASE + RDA_UART3_SIZE)
#define RDA_IFC_PHYS		0x20AF0000
#define RDA_IFC_SIZE		SZ_4K

#endif /* __ASM_ARCH_RDA_IOMAP_H */
