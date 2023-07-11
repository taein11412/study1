#include <stdio.h>
int main (void)
{
    int num1;
    int result;

    printf("정수 입력: ");
    scanf("%d", &num1);

    result = num1 * num1;
    printf("%d × %d = %d", num1, num1, result);

    return 0;
}