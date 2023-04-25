#include <stdio.h>
#include <stdlib.h>

struct node
{
    int no;
    struct node * next;
    struct node * prev;
};

int main(void)
{
    struct node * cur= (struct node * )malloc(sizeof(struct node));
    struct node * head=NULL , *temp=NULL;
    cur->no=10;
    cur->prev=NULL;
    cur->next=NULL;
    head=cur;
    temp=head;
    for(int i=2;i<7;i++)
    {
        struct node * cur= (struct node * )malloc(sizeof(struct node));

        cur->no=i*10;
        temp->next=cur;
        cur->prev=temp;
        cur->next=NULL;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->no);
        temp=temp->next;
    }

}
