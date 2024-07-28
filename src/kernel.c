#include "common.h"
#include "mini_uart.h"

void kernel_main() {
//     uart_init();
//     uart_send_string("Rasperry PI Bare Metal OS Initializing...\n");

// #if RPI_VERSION == 3
//     uart_send_string("\tBoard: Raspberry PI 3\n");
// #endif

// #if RPI_VERSION == 4
//     uart_send_string("\tBoard: Raspberry PI 4\n");
// #endif

//     uart_send_string("\n\nDone\n");

//     while(1) {
//         uart_send(uart_recv());
//     }
    while(1)
    {

    //Led blink using GPIO pin 21
        gpio_pin_enable(21);
        gpio_pin_set_func(21, 1);

        gpio_pin_set(21);
        delay(20000000);
        gpio_pin_clear(21);
        delay(20000000);


    }
}