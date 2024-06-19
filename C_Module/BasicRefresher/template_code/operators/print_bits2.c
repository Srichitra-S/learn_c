#include <stdio.h>

int main()
{
    unsigned int x = 0xAB;
    int i;
    int no_of_bits = sizeof(int) * 8;

    for (i= no_of_bits-1; i>=0; i--)
    {
        printf("%d", (x >> i)&1);
    }

    printf("\n");
    return 0;

}