#include <stdio.h>

// to get only 8 bits

int main()
{
    signed char num = 0xAB;

    printf("val = %X\n", num <<4);
    printf("Masked val = %x\n", num & mask);
}