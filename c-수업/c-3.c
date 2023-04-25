#include <stdio.h>

int main(void)
{

    int x,y,sum,minus,multi,rem,divide;

    printf("첫번째 숫자를 입력하시오:");
    scanf("%d",&x);

    printf("두번째 숫자를 입력하시오:");
    scanf("%d",&y);

    
    sum=x+y;
    minus=x-y;
    multi=x*y;
    divide=x/y;
    rem=x%y;



    printf("두수의 합: %d\n",sum);  
    printf("두수의 차: %d\n",minus);
    printf("두수의 곱: %d\n",multi);
    printf("두수의 몫: %d\n",divide);
    printf("두수의 나머지: %d\n",rem);

    return 0;

}