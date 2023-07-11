#include <stdio.h>

int main (void)
{
    int num1 , i = 0 ;
    printf("정수 입력: ");
    scanf("%d", &num1);
    while(i++<num1)
    {
        printf("%d \n",i * 3);
     
    }
    return 0;

}