#pragma once

#if RPI_VERSION == 3
#define PBASE 0x34000000

#elif RPI_VERSION == 4
#define PBASE 0xFE000000

#else
#define PABSE 0
#error RPI_VERSION not detected 

#endif