
/*
*IFE  2018
*Steering Wheel Software
*Nick Tuczak
*/
/*INCLUDE*/


/*DEFINITIONS*/
#define TRUE              0x01
#define FALSE             0x00

#define LED_ON            0x00
#define LED_OFF           0x01

#define UART_ACK          0x01
#define UART_NACK         0x00

#define C_LEVEL_01        0x01
#define C_LEVEL_02        0x02
#define C_LEVEL_03        0x03
#define C_LEVEL_04        0x04
#define C_LEVEL_05        0x05
#define C_LEVEL_06        0x06

/*PINS*/
#define SW_TC_ACTIVE_LED         16
#define SW_CUR_1                 17 
#define SW_CUR_2                 18
#define SW_CUR_3                 19
#define SW_CUR_4                 2
#define SW_CUR_5                 3
#define SW_CUR_6                 4
#define SW_CONNECTED_LED         5
#define SW_BRAKE_THROTTLE_FAULT  6
#define SW_TC                    8
#define LIVE                     7

/* GLOBAL VARIABLES */
volatile uint8_t traction_on = FALSE; 
volatile uint8_t fault_detected = FALSE;
volatile uint8_t connection = FALSE;
volatile uint8_t uart_tx_buffer[5] = {0x00, 0x00, 0x00, 0x00};
volatile uint8_t uart_rx_buffer[5] = {0x00, 0x00, 0x00, 0x00};


/*FUNCTION DECLARATIONS*/
uint8_t set_led(uint8_t led, uint8_t state);
uint8_t uart_send(void);
uint8_t uart_recieve(void);
uint8_t crc(uint8_t* buff, uint8_t len);
void check_switches(void);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

}
