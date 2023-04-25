#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size]={0,};
void push(int a);
int stacksize=0;

int main()
{   

    for(int i=1;i<6;i++)
    {
        push(i*10);
    }


    printf("\n\n데이터 60을 삽입.");
    push(60);


}
void push(int a)
{
    printf("%d번째 데이터 삽입\n",stacksize+1);

    if(stacksize>=5)
    {
        printf("데이터를 넣을수 없다.");
        goto loop;
    }
    
    stack[stacksize]=a;

    for(int i=0;i<stacksize+1;i++)
    {
        printf("stack[%d] = %d \n",i,stack[i]);
    }
    stacksize++;
    printf("\n");
    
    loop :;
    
}