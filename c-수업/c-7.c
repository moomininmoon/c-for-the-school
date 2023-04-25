#include <stdio.h>

int main(void)
{
    int x;

    printf("윤년인지 아닌지 궁금하면 타이프.");
    scanf("%d",&x);

    if(x%400==0)
    {
        printf("%d년은 윤년입니다.",x);
    }
    else if(x%4==0 && x%100!=0)
    {
        printf("%d년은 윤년입니다.",x);
    }
    else 
    {
        printf("%d년은 윤년이 아닙니다.",x);
    }
    return 0;

}