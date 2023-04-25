#include <stdio.h>
#define dollar 1120

int main(void)
{
    int x;

    printf("달러화 금액을 입력하시오: ");
    scanf("%d",&x);

    printf("달러화 %d달러는 %d입니다.",x,x*dollar);

    return 0;    
}