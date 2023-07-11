#include <stdio.h>

int main (void)
{
    int num1=9 , num2;
    
    printf("구구단 보기: ");
    scanf("%d", &num2);
    while(num1>0)
    {
        printf("%d × %d = %d \n", num2, num1, num2*num1);
        --num1;
            }
    return 0;
}