#include <stdio.h>


int main()
{
    unsigned int num, m, n, res, mask;
    printf("Enter the number: ");
    scanf("%x", &num);
    printf("Enter the number of bits: ");
    scanf("%d", &m);
    printf("Enter the position: ");
    scanf("%d", &n);
    mask = ((1 << m)- 1 ) << (n - m + 1);

    res = num | mask;
    printf("%x\n", res);
    return 0;
}