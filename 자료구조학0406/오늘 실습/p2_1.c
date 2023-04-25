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
    int key=10;

    while(temp!=NULL)
    {
       if(temp->data == key)
       {
            temp=temp->ptr;
            head=temp;
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
