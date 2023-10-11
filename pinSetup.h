// RGB LED Diode Pin Configuration
#define LED0_G 1
#define LED0_R 2
#define LED1_G 3
#define LED1_R 4
#define LED2_G 5
#define LED2_R 6
#define LED3_G 7
#define LED3_R 8

// LDR Sensore Pin Configuration
#define LDR0 1
#define LDR1 2
#define LDR2 3
#define LDR3 4


// OLED Display Pin Configuration
#define OLED_SDA I2C_SDA
#define OLED_SCL I2C_SCL

// RFID Pin Configuration
#define RFID_RX UART_RX
#define RFID_TX UART_TX

// Servo Motors Pin Configuration
#define SERVO1 GPIO1
#define SERVO2 GPIO2

#define b_TRUE 1
#define b_FALSE 0

#define THRESHOLD 200

typedef char boolean;

typedef boolean Spots[4];