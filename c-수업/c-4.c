#include <stdio.h>

int main(void)
{
    int x,y;
    int rem,sum;

    printf("단가: ");
    scanf("%d",&x);

    printf("금액: ");
    scanf("%d",&y);

    sum=y/x;

    rem=y-x*sum;

    printf("------------------------\n");

    printf("총 %d개를 주문하고 잔액은 %d원입니다.",sum,rem);

    return 0;


}