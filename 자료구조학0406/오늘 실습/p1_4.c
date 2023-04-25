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

    struct node * p=(struct node *)malloc(sizeof(struct node));


    temp=head;
    printf("초기 List: ");

    int count=0;
    while(temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->ptr;
            count++;
        }

    temp=head;
    printf("\n");

    while(1)
    {
        int a,b;
        char q;

        printf("\n원하는 위치와 data값을 입력하세요: ");
        scanf(" %d %d",&a, &b);

        struct node * p=(struct node *)malloc(sizeof(struct node));
        p->data=b;
        p->ptr=NULL;

        if(a==1)
        {
            p->ptr=head;
            head=p;
            count++;
        }
        else if(count>a)
        {    
            for(int i=1;i<a-1;i++)
            {   
                temp=temp->ptr;
            }
            p->ptr=temp->ptr;
            temp->ptr=p;
            count++;
        }
        else
        {
            for(int i=1;i<a-1;i++)
            {   
                temp=temp->ptr;
            }
            temp->ptr=p;
            count++;
        }    

        temp=head;
        printf("삽입 후: ");
        while(temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->ptr;
        }

        temp=head;
        
        printf("\n계속 하시겠습니까?");
        scanf(" %c",&q);
        if(q=='x'||q=='X')
            break;

    }
    printf("\n프로그램 종료");

    return 0;
}    