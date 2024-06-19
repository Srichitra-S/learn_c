#include <stdio.h>

int main()
{
    char dir;
    
    printf("Enter direction: ");
    scanf("%c",&dir);
    
    switch(dir)
    {
        case 'N':
        case 'n':
            printf("\nNorth");
            break;
            
        case 'W':
        case 'w':
            printf("\nWest");
            break;
            
        case 'E':
        case 'e':
            printf("\nEast");
            break;
            
        case 'S':
        case 's':
            printf("\nSouth");
            break;
            
        default:
            printf("Invalid input");
    }
    return 0;
}