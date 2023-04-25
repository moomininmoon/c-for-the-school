#include <stdio.h>
#include <stdlib.h>

struct dnode
{ 
    struct dnode * left;
    int data;
    struct dnode * right;
};
struct dnode * head, * temp, *p, *ggorigomtang; 

int main(){
        

    p = (struct dnode *)malloc(sizeof(struct dnode));
    
    p -> left = NULL;
    p -> data = 10 ;
    p -> right = NULL;

    head = temp = p;
    
    for (int i =20;i<110;i+=10) 
    {
        p = (struct dnode * ) malloc (sizeof (struct dnode));
        p -> left = NULL;
        p -> data = i;
        p -> right = NULL;
        temp->right=p;
        p->left=temp;
        temp=p;
    }
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->right;
        if(temp->right==NULL)
        {
            ggorigomtang=temp;
            break;
        }
    }

    temp=head;
    int count=0,count1=0;
    printf("->방향: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->right;

        if(temp==ggorigomtang)
        {
            temp->right=head;
            count++;
        }
        if(count==2)
        {   
            printf("%d",temp->data);
            break;
        }
    }

    printf("\n<-방향: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->left;
 
        if(temp==head)
        {
            temp->left=ggorigomtang;
            count1++;
        }
        if(count1==2)
        {
            printf("%d",temp->data);
            break;
        }

    }

        return 0;
        
}