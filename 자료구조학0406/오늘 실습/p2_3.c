#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * ptr;
};
struct node * head=NULL,*temp = NULL, *start;

int main (void)
{
    
    
    for(int i=1;i<6;i++)
    {
        struct node * cur=(struct node *)malloc(sizeof(struct node));
        cur->data=i*10;
        cur->ptr=NULL;
        if(i==1)
        {
            head=cur;
            temp=head;
        }

        temp->ptr=cur;
        temp=temp->ptr;
        
    }


    temp=head;
    start=head;
    int key=30;
    
    
    while(temp!=NULL)
    {
       if(temp->ptr->data==key)
       {
            temp->ptr=temp->ptr->ptr;
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
