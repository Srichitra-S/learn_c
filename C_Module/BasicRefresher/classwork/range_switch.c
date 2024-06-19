#include <stdio.h>

int main()
{
    int input;
    printf("Enter range value\n");
    scanf("%d", &input);

    switch(input)
    {
        case 10 ... 30:
        printf("You entered between 10 and 30\n");
        break;
        case 31 ... 50:
        printf("You entered between 30 and 50\\n");
        break;

        default:
        printf("Not in range\n");

    }
    return 0;
}