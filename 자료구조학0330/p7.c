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
    int no1=0,count=0,sum=0,cal=0;

    
    for(int i=1;i<11;i++)
    {
        struct no * cur=(struct no*)malloc(sizeof(struct no));
        
        no1=i;

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
    struct no* start=head;
    
    while(start!=NULL)
    {   
        int k=start->no1;
        if(k%2==0)
            cal+=start->no1;

        start=start->next;
    }
   
    printf("sum(cal) = %d ",cal);

}