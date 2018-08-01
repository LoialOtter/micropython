#define MICROPY_HW_BOARD_NAME       "Lerdge-X V1.0.4"
#define MICROPY_HW_MCU_NAME         "STM32F407RG"
void LERDGE_X_board_early_init(void);
#define MICROPY_BOARD_EARLY_INIT    LERDGE_X_board_early_init

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
// the Lerdge-X uses non-SD card pins - make sure this is
// supported before enabling
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SERVO     (1)

// use external SPI flash for storage
#define MICROPY_HW_SPIFLASH_SIZE_BITS (128 * 1024 * 1024)
#define MICROPY_HW_SPIFLASH_CS      (pin_E11)
#define MICROPY_HW_SPIFLASH_SCK     (pin_E10)
#define MICROPY_HW_SPIFLASH_MOSI    (pin_E12)
#define MICROPY_HW_SPIFLASH_MISO    (pin_E13)


// HSE is 25MHz
#define MICROPY_HW_CLK_PLLM (25)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

// UART config
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)
#define MICROPY_HW_UART_REPL      PYB_UART_1
#define MICROPY_HW_UART_REPL_BAUD 115200

// SPI busses
#define MICROPY_HW_SPI1_NSS  (pin_B7)
#define MICROPY_HW_SPI1_SCK  (pin_B3)
#define MICROPY_HW_SPI1_MISO (pin_B4)
#define MICROPY_HW_SPI1_MOSI (pin_B5)

// USRSW is pulled high and is off board (LCD)
#define MICROPY_HW_USRSW_PIN        (pin_E2)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1             (pin_E5) // offboard
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS              (1)
// this board doesn't have a USB detect - USB-A (host) port
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
