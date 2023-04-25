#include <stdio.h>
void sum1(int x,int y);
int sum2(int x,int y);
int main(void)
{
    int x=5,y=4;
    sum1(x,y);
    printf("\n");
    printf("sum2의 결과: %d",sum2(x,y));
    
}
void sum1(int x,int y)
{
    printf("sum1의 결과: %d",x+y);
}
int sum2(int x,int y)
{
    return x+y;
}