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

    while(1)
    {   
        int a;
        int count=0,count1=0;
        char zip;

        printf("\n삭제할 data값을 입력하세요:");
        scanf(" %d",&a);

        start=head;
        temp=head;
        while(temp!=NULL)
        {
            if(a==temp->data)
            {
                break;
            }
            temp=temp->right;
            count++;
        }

        temp=head;
        while(temp!=NULL)
        {
            temp=temp->right;
            count1++;       
        }

         temp=head;

        if(count==0)
        {
            temp=temp->right;
            temp->left=NULL;
            free(head);
            head=temp;
        }
        else if(count<count1-1)
        {
            for(int i=0;i<count-1;i++)
            {   
                start=start->right;
                temp=temp->right;
            }
            start=start->right;
            temp->right->right->left=temp;
            temp->right=temp->right->right;
            free(start);
        }
        else if(count1-1==count)
        {
            for(int i=0;i<count-1;i++)
            {
                temp=temp->right;
            }
            temp->right->left=NULL;
            temp->right=NULL;
            temp=temp->right;
            free(temp);
        
        }
        start=head;
        temp=head;
        printf("삭제 후 (->): ");    
        while(temp->right!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->right;
        }
        printf("%d",temp->data);

        printf("\n");

        printf("삭제 후 (<-): ");   
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