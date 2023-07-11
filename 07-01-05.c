#include <stdio.h>

int main (void)
{
    float num1, num2,num3,total;
    
    printf("세 개의 정수 입력: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    total = num1+num2+num3;
    printf("결과값: %f",total/3);
    return 0;
}
