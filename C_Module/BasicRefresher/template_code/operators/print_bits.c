#include <stdio.h>

int main()
{
    unsigned int x = 0xAB, mask;
    int bit_val, i;
    int no_of_bits = sizeof(int)*8;
    mask = 1 << (no_of_bits-1);
    for(i=0; i<no_of_bits;i++)
    {
        bit_val= x & mask ? 1 : 0;
        printf("%d", bit_val);
        mask = mask >> 1; 
    }
    printf("\n");
    return 0;
}