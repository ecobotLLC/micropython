// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Ecobot EcoBouzu RP2040"
//#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024)
#define MICROPY_HW_FLASH_STORAGE_BYTES (7 * 1024 * 1024)
// Enable USB Mass Storage with FatFS filesystem.
// #define MICROPY_HW_USB_MSC  (1)
#define MICROPY_HW_USB_VID (0x3560)
#define MICROPY_HW_USB_PID (0x8001)

