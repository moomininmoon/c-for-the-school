#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * ptr;
};
struct node * head=NULL,*temp=NULL,*start=NULL;

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
        int a,count1=1;
        char q;
        start=head;


        printf("\n삭제할 data값을 입력하세요: ");
        scanf(" %d",&a);

        while(temp!=NULL)
        {   
            if(temp->data==a)
                break;
            temp=temp->ptr;
            count1++;
        }

        temp=head;

        if(count1==1)
        {
            head=head->ptr;
            count--;
        }
        else if(count1<count)
        {
            for(int i=0;i<count1-2;i++)
            {
                start=start->ptr;
            }
            for(int i=0;i<count1;i++)
            {
                temp=temp->ptr;
            }
            start->ptr=temp;
            count--;
        }
        else if(count1==count)
        {
            for(int i=0;i<count1-2;i++)
            {
                temp=temp->ptr;
            }
            temp->ptr=NULL;
            count--;
            temp=head;
        }

        temp=head;

        printf("삭제후 : ");
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