#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ran(void)
{   
    srand((int)time(NULL));
    int k=rand()%100+1;
    return k;
}

struct node {
    int num;
    struct node * next;
    struct node * prev1;
};

int main(void)
{   
    struct node * header=NULL;
    struct node * prev=NULL;
    int j[101]={0,};
    int k=ran();
    for(int i=0;i<100;i++)
    {
        struct node* cur=(struct node*)malloc(sizeof(struct node));
        if(prev!=NULL)
            prev->next=cur;

        cur->num=k;
        if(j[k]==0)
        {   
            cur->num=k;
            j[k]=1;
        }
        else
        {
            while(j[k] != 0) 
            {   
                k=rand()%100+1;
            }
            cur->num=k;
            j[k] = 1;
        }

        cur->next = NULL;
        cur->prev1 = prev;

        prev=cur;

        if(i==0)
        header=cur;   
    }

    

    struct node * start=header;
   
    for(int i=0; i<100; i++)
    { 

        printf("%d ",start->num);
        start=start->next;
           
    }

    printf("----------\n\n----------- ");


    for(int i=0;i<100;i++)
    {   
        printf("%d ",prev->num);
        prev=prev->prev1;
    }
    

    return 0;

}