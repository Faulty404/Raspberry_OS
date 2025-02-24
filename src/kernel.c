#include "common.h"
#include "mini_uart.h"
#include "printf.h"

void putc(void *p, char c)
{
    if (c == '\n')
    {
        uart_send('\r');
    }

    uart_send(c);
}

u32 get_el();

void kernel_main()
{
    //     uart_init();
    //     init_printf(0, putc);
    //     printf("\nRasperry PI Bare Metal OS Initializing...\n");

    // #if RPI_VERSION == 3
    //     printf("\tBoard: Raspberry PI 3\n");
    // #endif

    // #if RPI_VERSION == 4
    //     printf("\tBoard: Raspberry PI 4\n");
    // #endif

    //     printf("\nException Level: %d\n", get_el());

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