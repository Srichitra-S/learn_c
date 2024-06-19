#include <stdio.h>

int main()
{
    int num, position, mask, res;

    printf("Enter hex number: ");
    scanf("%x", &num);
    printf("Enter bit position to be set: ");
    scanf("%d", &position);

    mask = 1 << position;
    res = num & mask;

    if (res==0)
    {
        printf("bit is clear\n");
    }
    else
    {
        printf("bit is set\n");
    }

    printf("%x\n", res);
    return 0;
}