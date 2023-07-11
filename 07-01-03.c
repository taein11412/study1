#include <stdio.h>

int main (void)
{
    int num,total;
  
    while(num!=0)
    {
        printf("정수 입력: ");
        scanf("%d",&num);
        total +=num;
    }
    printf("입력된 정수의 총 합: %d \n", total);
    return 0;
}
