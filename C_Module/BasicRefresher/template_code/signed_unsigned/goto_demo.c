#include <stdio.h>

int main()
{
    goto L1;
    printf("Demo of goto\n");

L1:
    printf("This is L1 label\n");
    printf("goto will jump directly here\n");
    

    return 0;
}