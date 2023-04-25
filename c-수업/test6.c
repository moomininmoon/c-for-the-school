#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
    int num;
    struct node * next;
};
int main(void)
{   
    struct node * header=NULL;
    struct node * prev=NULL;
    int j[101]={0,};
    for(int i=0;i<100;i++)
    {
        struct node* cur=(struct node*)malloc(sizeof(struct node));
        if(prev!=NULL)
            prev->next=cur;
        cur->num=i+1;
        cur->next=NULL;
        prev=cur;

        if(i==0)
        header=cur;
        

    }
    srand((int)time(NULL));
    struct node * start=header;
   
    for(int i=0; i<100; i++)
    {   int k=(rand() % 100) + 1;
        if(j[k]==0)
        {   
            start->num=k;
            j[k]=1;
        }
        else
        {
            while(j[k] != 0) 
            {   
                k = (rand() % 100) + 1;
            }
            start->num=k;
            j[k] = 1;

        }


        printf("%d ",start->num);
        start=start->next;
        
    }


    return 0;
}
// 순회하면서 값을 찍는다.

//malloc();----> 메모리 시ㄱ 주값