#include <stdio.h>
int main(void)
{
    int num;
    printf("정수 입력: ");
    scanf("%d",&num);

    num = ~num;
    num = num +1;
    printf("결과 : %d", num);
    return 0;
    

}