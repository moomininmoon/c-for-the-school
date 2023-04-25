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
    int no1=0,count=0,count1=0;
    
    for(int i=1;i<6;i++)
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
    struct no * head1=NULL;
    struct no * tail1=NULL;
    
    for(int i=6;i<11;i++)
    {
        struct no * cur1=(struct no*)malloc(sizeof(struct no));
        
        no1=i*10;

        if(count1==0)
            head1=cur1;
        else
            tail1->next=cur1;

        cur1->no1=no1;

        cur1->next = NULL;
        cur1->prev = tail1;
        tail1=cur1;   
        count1++;
    }


    struct no * temp=head;
    struct no * start=head;
    struct no * temp1=head1;
    struct no * start1=head;

    while(start!=NULL)
    {
        start=start->next;
    }

    tail->next=head1;
    start=head1;

    while(start1!=NULL)
    {
        printf("%d   ",start1->no1);
        start1=start1->next;
    }

}