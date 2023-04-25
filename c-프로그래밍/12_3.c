#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    int hap=0;
    int i,cnt;

    printf("입력할 개수는 : ");
    scanf("%d",&cnt);

    p=(int*)malloc(sizeof(int)*cnt);

    for(int i=0;i<cnt;i++)
    {
        printf("%d번째 숫자 : ",i+1);
        scanf("%d",(p+i));
    }
    
    for(int i=0;i<cnt;i++)
    {
        hap+=*(p+i);
    }

    printf("입력 숫자의 합 = %d",hap);

    return 0;
}