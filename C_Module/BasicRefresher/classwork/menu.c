#include <stdio.h>

int main()
{
    int input;
    printf("Menu:\n");
    printf("1.Dosa\n");
    printf("2.Pizza\n");
    printf("3.Idly\n");
    printf("Enter item to order\n");
    scanf("%d", &input);

    switch(input)
    {
        case 1:
        printf("You ordered Dosa\n");
        break;
        case 2:
        printf("You ordered Pizza\n");
        break;
        case 3:
        printf("You ordered Idly\n");
        break;
        default:
        printf("Not available");

    }
    return 0;
}