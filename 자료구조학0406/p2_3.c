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
        if(temp->data < p->data && p->data < temp->right->data)
        {   
            temp->right->left=p;
            p->right=temp->right;
            temp->right=p;
            p->left=temp;
        }
        temp=temp->right;       
    }


    temp=head;


    while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->right;
            if(temp!=NULL)
                printf(" -> ");
        }


    return 0;
        
}