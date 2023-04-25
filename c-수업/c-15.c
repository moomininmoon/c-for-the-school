#include <stdio.h>
#include <stdlib.h>
struct node {
    int num;
    struct node * next;
};
int main(void)
{   
    struct node * header=NULL;
    struct node * prev=NULL;
    
    for(int i=0;i<100;i++)
    {
        struct node* cur=(struct node*)malloc(sizeof(struct node));
        if(prev!=NULL)
            prev->next=cur;
        cur->num=i+1;
        cur->next=NULL;
        prev=cur;

        if(i==0)
        header=cur;
        

    }

    struct node * start=header;
    for(int i=0; i<100; i++)    
    {           
        printf("%d  ",start->num);
        start=start->next;
    }

    printf("\n\n\n\n\n");

    struct node * start1=header;
    for(int i=0; i<100; i++)
    {
        start1->num=(rand() % 100) + 1;
        printf("%d  ",start1->num);
        start1=start1->next;
    }


    return 0;
}
