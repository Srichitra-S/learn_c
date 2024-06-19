#include <stdio.h>

int main() 
{
    int size, i, j, num=1;

    printf("Enter num: ");
    scanf("%d", &size);

    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if((i==1 || j==1)|| (j+i == size+1)) 
            {
                printf("%d ", num);
                num++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;


}

