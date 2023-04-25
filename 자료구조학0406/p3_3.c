#include <stdio.h>
#include <stdlib.h>

struct dnode
{ 
    struct dnode * left;
    int data;
    struct dnode * right;
};
struct dnode * head, * temp, *p,*start; 

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

    start=head;
    temp=head;
    int key=30;

    while(temp!=NULL)
    {

        if(temp->right->data==key)
        {   start=start->right;
            temp->right=temp->right->right;
            temp->right->right->left=temp;
            break;
        }
        temp=temp->right;
        start=start->right;
    }

    free(start);
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