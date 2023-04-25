#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stacksize 1000

int stack[stacksize]={0,};
int stacksize1;
int stacksize2=0;
void pop(void);
void push(int a);
char a[8]={0,};
int in=1,de=1,qu=1;
char in1[8]="insert";
char de1[8]="delete";
char qu1[8]="quit";

int main()

{   
    int stack0;

    printf("Enter the size of the stack:");
    scanf("%d",&stacksize1);

    while(1)
    {   

        int stack[]={0,};
        printf("Insert or Delete or Quit:");
        scanf("%s",a);
        
        in=strcmp(a,in1);
        de=strcmp(a,de1);
        qu=strcmp(a,qu1);

        if(in==0)
        {   
            int a;
            stack0=stacksize2;
            if(stacksize2>=stacksize1)
            {
                printf("데이터를 넣을수 없다.\n");
                goto loop;
            }
            printf("삽입할 수를 입력하세요: ");
            scanf("%d",&a);
            push(a);
            loop :;


        }
        else if(de==0)
        {
            if(stacksize2-1<0)
            {
                printf("\n데이터를 뺄 수 없음.\n");
                goto loop1;
            }
            pop();
            loop1:;


        }
        else if(qu==0)
        {
            printf("프로그램 종료.");

            return 0;
        }
        printf("\n");
    }

}
void push(int a)
{   
    
    printf("%d번째 데이터 삽입\n",stacksize2+1);
    stack[stacksize2]=a;
    printf("스택");
    for(int i=0;i<stacksize2+1;i++)
    {
        printf(" %d ",stack[i]);
    }
    stacksize2++;
    printf("\n");
    
    
}
void pop()
{

    printf("%d번째 데이터를 추출.\n",stacksize2);
    stack[stacksize2]=0;
    printf("삭제된 수: %d\n",stack[stacksize2-1]);
    printf("스택");
    for(int i=0;i<stacksize2-1;i++)
    {
        printf(" %d ",stack[i]);
    }
    stacksize2--;
    printf("\n");
    k:;
}
