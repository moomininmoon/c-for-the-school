#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size]={10,20,30,40,50};
void pop(void);
int stacksize=5;

int main()
{   

    for(int i=0;i<5;i++)
    {
        pop();
    }

    pop();
}
void pop()
{
    printf("%d번째 데이터를 추출.\n",stacksize);

    if(stacksize-1<0)
    {
        printf("\n데이터를 뺄 수 없음.\n");
        goto loop;
    }
    stack[stacksize-1]=0;

    for(int i=0;i<stacksize;i++)
    {
        printf("stack[%d] = %d \n",stacksize-i-1,stack[stacksize-i-1]);
    }

    stacksize--;
    printf("\n");
    loop:;
}

