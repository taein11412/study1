#include <stdio.h>
int main (void)
{
    int num1, num2;
    int result1, result2;

    printf("첫 번째 정수: ",num1);
    scanf("%d", &num1);
    printf("두 번째 정수: ",num2);
    scanf("%d", &num2);

    result1 = num1 / num2;
    result2 = num1 % num2;
    
    printf("몫: %d 나머지: %d", result1, result2);
    return 0;
}