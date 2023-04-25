#include <stdio.h>
#include <stdlib.h>
struct no
{
    int no1;
    struct no * next;
    struct no * prev;
};
    struct no * head=NULL;
    struct no * tail=NULL;

int main(){
    int no1=0,count=0,sum=0;

    
    for(int i=1;i<11;i++)
    {
        struct no * cur=(struct no*)malloc(sizeof(struct no));
        
        no1=i*10;

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

    struct no * temp=head;
    struct no * start=head;
    tail->next=head;
    
    int count1=0;
    while(start!=tail)
    {   
        printf("%d ",start->no1);
        start=start->next;
        if(start==tail)
        {    
            count1++;
            printf("%d ",start->no1);
            if(count1==2)
                break;
            start=start->next;
        }

    }
    start=head;
    printf("\n");
    while(start!=tail)
    {
        printf("%d ",start->no1);
        start=start->next;
        if(start==tail)
        {
            printf("%d",start->no1);
            break;
        }
    }

}