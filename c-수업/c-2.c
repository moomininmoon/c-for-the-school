#include <stdio.h>

int main(void)
{
    int days,airplane,hotel,money,sum;

    printf("여행은 몇박인가요?: ");
    scanf("%d",&days);

    printf("항공권 가격:");
    scanf("%d",&airplane);

    printf("호텔 1박의 가격:");
    scanf("%d",&hotel);

    printf("하루에 필요한 용돈:");
    scanf("%d",&money);

    sum=airplane+(hotel+money)*days;

    printf("================================\n");
    printf("총 여행 비용: %d\n",sum);
    printf("================================\n");

    return 0;
}