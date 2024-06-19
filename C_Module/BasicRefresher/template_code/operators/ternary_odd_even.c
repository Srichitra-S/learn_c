#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    num%2 ? printf("%d is odd\n", num) : printf("%d is even\n", num);

    return 0;

    }