#include <stdio.h>

int main()
{
    int arr[100];
    int size,i;

    printf("Enter the size: ");
    scanf("%d", &size);

    if(size<1||size>100)
    {
        printf("Enter size between 1 to 100 only\n");

    }
    else
    {
        for(i=0;i<size;i++)
        {
            scanf("%d", &arr[i];)
        }
    }
    return 0;
}