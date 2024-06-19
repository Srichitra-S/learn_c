#include <stdio.h>
#include <math.h>

int main()
{
    int num,div,count,flag=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(div=2;div<sqrt(num);div++)
    {
        if(num%div==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime\n", num);

    }
    else 
    {
        printf("%d is not prime\n",num);
    }
    return 0; 
}
