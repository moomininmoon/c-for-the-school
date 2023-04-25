#include <stdio.h>
#include <stdlib.h>

struct dnode
{ 
    struct dnode * left;
    int data;
    struct dnode * right;
};
struct dnode * head, * temp, *p; 

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
        while(temp->right!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->right;
        }

        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->left;
            if(temp!=NULL)
                printf(" -> ");
        }
        
    }


        return 0;
        
}