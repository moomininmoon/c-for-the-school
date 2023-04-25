#include <stdio.h>

int main(void)
{
    int a,b,c,d,max1,max2;

    printf("숫자를 4개 입력하세요");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b)
    {
        max1=a;
    }
    else if (a<b)
    {
        max1=b;
    }
    else if (a==b)
    {
        max1=a;
    }

    if(c>d)
    {
        max2=c;
    }
    else if(c>d)
    {
        max2=d;
    }
    else if(c==d)
    {
        max2=c;
    }

    if(max2>max1)
    {
        printf("가장 큰 수는 %d 입니다.",max2);
    }
    else if(max2<max1)
    {
        printf("가장 큰 수는 %d 입니다.",max1);
    }

    return 0;
    
}