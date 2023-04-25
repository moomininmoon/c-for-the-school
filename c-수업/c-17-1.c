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
    int sel_n,count=0;
    int eng,kor;

    while(sel_n!=4)
    {   
        printf("------------------\n");
        printf("1 : new student\n");
        printf("2 : show average\n");
        printf("3 : show all\n");
        printf("4 : exit\n");
        printf("------------------\n");
        printf("select number: ");
        scanf("%d",&sel_n);
        
 
        if(sel_n==1)
        {   
            struct node* cur=(struct node*)malloc(sizeof(struct node));
            if(count==0)
                header=cur;
            else
                tail->next=cur;

            printf("score kor: ");
            scanf("%d",&kor);
            printf("score eng: ");
            scanf("%d",&eng);

            cur->kor=kor;
            cur->eng=eng;
            tail=cur;
            cur=NULL;        
            count++;

            printf("\n\n\n");
        } else if(sel_n==3)
        { if(count>0)   
           {
                struct node * start=header;
                for(int i=0; count-i>0;i++)    
                {           
                    printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
                    start=start->next;  
                }
            } else {    
            }    
            printf("\n\n\n");
            
        } else if(sel_n==2)
        {   if(count>0) 
            {    
                int s_eng=0,s_kor=0;
                struct node * start=header;
                while(start != NULL)
                {   
                    s_kor+=start->kor;
                    s_eng+=start->eng;
                    start=start->next;
                }
                s_eng=s_eng/(count);
                s_kor=s_kor/(count);

                printf("score average= kor: %d , eng: %d\n",s_kor,s_eng);

            } else{   
            }
            printf("\n\n\n"); 
        }else {

        }

    }
    return 0;
}