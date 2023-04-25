#include <stdio.h>
#include <stdlib.h>

struct node {
    int kor;
    int eng;
    struct node *next;
};

int main(void)
{  
    struct node * header=NULL;
    struct node * tail=NULL;
    int *p;
    int k=1;
    int x,y=0;
    int eng,kor;
    int s_eng=0,s_kor=0;

    loop:  while(k==1)
    {  
        printf("------------------\n");
        printf("1 : new student\n");
        printf("2 : show average\n");
        printf("3 : show all\n");
        printf("4 : exit\n");
        printf("------------------\n");
        printf("select number: ");
        scanf("%d",&x);
       
        if(x==4)
            break;
        else if(x==1)
        {  
            struct node* cur=(struct node*)malloc(sizeof(struct node));
            if(y==0)
                header=cur;
            if(tail!=NULL)
                tail->next=cur;
       
           
            printf("score kor: ");
            scanf("%d",&kor);
            printf("score eng: ");
            scanf("%d",&eng);
            cur->kor=kor;
            cur->eng=eng;

            cur->next = NULL;

            tail=cur;  
            cur=NULL;
                             
            y++;
            printf("\n\n\n");
        } else if(x==3) {  
            struct node * start=header;

            if(y==0)  
            {
                printf("\n\n\n");
                goto loop;
            }
            for(int i=0; y-i>0;i++)    
            {          
                printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
                start=start->next;  
            }
            printf("\n\n\n");
        } else if(x==2)
        {  
            struct node * start=header;
            if(y==0)
            {
                printf("\n\n\n");
                goto loop;
            }
            for(int i=0;y-i>0;i++)
            {  
                s_kor+=start->kor;
                s_eng+=start->eng;
                start=start->next;
            }
            s_eng=s_eng/(y);
            s_kor=s_kor/(y);

            printf("score average= kor: %d , eng: %d\n",s_kor,s_eng);
            printf("\n\n\n");

            s_eng=0;
            s_kor=0;
        }  
       
    }



    return 0;
}