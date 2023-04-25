#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * ptr;
};
struct node * head=NULL,*temp = NULL;

int main (void)
{
    
    
    for(int i=1;i<6;i++)
    {
        struct node * cur=(struct node *)malloc(sizeof(struct node));
        cur->data=i;
        cur->ptr=NULL;
        if(i==1)
        {
            head=cur;
            temp=head;
        }

        temp->ptr=cur;
        temp=temp->ptr;
        
    }
    
    struct node * p=(struct node *)malloc(sizeof(struct node));
    p->data=6;
    p->ptr=NULL;

    temp=head;

    while(temp!=NULL)
    {
       if(temp->data < p->data && (temp->ptr==NULL))
       {
            temp->ptr=p;
            break;
       }
       temp=temp->ptr;
    }

    temp=head;

    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->ptr;
    }

    

}    