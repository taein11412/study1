#include <stdio.h>

int main (void)
{
    int num ,i=0 ;
    printf("반복수: ");
    scanf("%d", &num);
    while(i<num)
    {
        printf("Hello World! \n",num);
        i++;
    }
    return 0;
}