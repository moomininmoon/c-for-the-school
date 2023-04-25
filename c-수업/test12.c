#include <stdio.h>

int main (void)
{
    int *p;

    int k=100;

    p=&k;

    printf("일반 p  %d\n",p);

    
    printf("k의 주소 %d\n",&k);

    printf("포인터를 포함 p %d\n",*p++);


    printf("포인터를 포함 p %d\n",++(*p));



    printf("k의 값 %d\n",k);

    
}