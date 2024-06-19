#include <stdio.h>

int main()
{
    int num1, num2, res;
    printf("Enter 2 hexa numbers: ");
    scanf("%x%x", &num1, &num2);

    res = num1 & num2;
    printf("%x\n", res);

    res = num1 | num2;
    printf("%x\n", res);

    res = num1 ^ num2;
    printf("%x\n", res);
}