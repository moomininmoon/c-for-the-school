#include <stdio.h>
#include <stdlib.h>
struct no
{
    int no1;
    struct no *next;
    struct no *prev;
};
    struct no * head=NULL;
    struct no * tail = NULL;
int main(void)
{   
    int no1,count=0;
    
    for(int i=0;i<26;i++)
    {
        struct no * cur=(struct no*)malloc(sizeof(struct no));
        if(i==0)
            no1=0;
        else
            no1=2*i-1;
        
        if(count==0)
            head=cur;
        else
            tail->next=cur;

        cur->no1=no1;

        cur->next = NULL;
        cur->prev=tail;
        tail=cur;   
        count++;
    }
    struct no * start = head;
    printf("삭제 전 \n");

    while(start!=NULL)
    {
        printf("%d ",start->no1);
        start=start->next;
    }

    head=head->next;
    struct no * start1 = head;
    printf("\n삭제 후 \n");

    while(start1!=NULL)
    {
        printf("%d ",start1->no1);
        start1=start1->next;
    }
    return 0;

}