#include <stdio.h>

int main()
{

    int option;
    printf("Enter the value: ");
    scanf("%d", &option);

    switch (option)
    {
        case 10:
            printf("\nYou entered 10\n");
            break;
        case 20:
            printf("\nYou entered 20\n");
            break;
        default:
            printf("\nTry again!\n");
    }
    return 0;
    
}