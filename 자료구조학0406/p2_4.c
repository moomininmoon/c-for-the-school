#include <stdio.h>
#include <stdlib.h>

struct dnode
{ 
    struct dnode * left;
    int data;
    struct dnode * right;
};
struct dnode * head, * temp, *p, *start; 

int main(){
        

    p = (struct dnode *)malloc(sizeof(struct dnode));
    
    p -> left = NULL;
    p -> data = 10 ;
    p -> right = NULL;

    head = temp = p;
    
    for (int i =20;i<60;i+=10) 
    {
        p = (struct dnode * ) malloc (sizeof (struct dnode));
        p -> left = NULL;
        p -> data = i;
        p -> right = NULL;
        temp->right=p;
        p->left=temp;
        temp=p;


    }


    p = (struct dnode * ) malloc (sizeof (struct dnode));
    p -> left = NULL;
    p -> right = NULL;
    p -> data = 25;

    temp=head;


    while(temp!=NULL)
    {   
        printf("초기 List (->): ");    
        while(temp->right!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->right;
        }
        printf("%d",temp->data);

        printf("\n");

        printf("초기 List (<-): ");   
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->left;
            if(temp!=NULL)
                printf(" -> ");
        }
        printf("\n");
        
    }
    int count=5;
    while(1)
    {   
        int a,b;
        char zip;
        printf("\n원하는 위치와 data값을 입력하세요:");
        scanf(" %d %d",&a,&b);

        temp=head;

        p = (struct dnode * ) malloc (sizeof (struct dnode));
        p -> left = NULL;
        p -> right = NULL;
        p -> data = b;

        if(a==1)
        {
            p->right=head;
            head->left=p;
            head=p;
            count++;
        }
        else if(a<count)
        {
            for(int i=0;i<a-2;i++)
            {
                temp=temp->right;
            }
            temp->right->left=p;
            p->right=temp->right;
            p->left=temp;
            temp->right=p;
            count++;
        }
        else if(a>count)
        {
            for(int i=0;i<a-2;i++)
            {
                temp=temp->right;
            }

            p->left=temp;
            temp->right=p;
            count++;
        }
        temp=head;
        printf("삽입 후 (->): ");    
        while(temp->right!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->right;
        }
        printf("%d",temp->data);

        printf("\n");

        printf("삽입 후 (<-): ");   
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->left;
            if(temp!=NULL)
                printf(" -> ");
        }
        printf("\n");
        printf("계속 하시겠습니까?:");
        scanf(" %c",&zip);
        printf("\n");
        if(zip=='x'||zip=='X')
            break;

    }
    
    
    printf("프로그램 종료");

    return 0;
        
}