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

    while(sel_n!=6)
    {   
        printf("------------------\n");
        printf("1 : new student\n");
        printf("2 : show average\n");
        printf("3 : show all\n");
        printf("4 : remove student\n");
        printf("5 : intsert pos\n");
        printf("6 : exit\n");
        printf("------------------\n");
        printf("select number: ");
        scanf("%d",&sel_n);
        
 
        if(sel_n==1)
        {   
            struct node* cur=(struct node*)malloc(sizeof(struct node));
            if(count==0)
            {
                header=cur;
            }
            else //if(tail!=NULL) 
                tail->next=cur;

            printf("score kor: ");
            scanf("%d",&kor);
            printf("score eng: ");
            scanf("%d",&eng);

            cur->kor=kor;
            cur->eng=eng;
            tail=cur;        
            count++;

            printf("\n\n\n");
        } 
        else if(sel_n==2)
        {   
            if(count>0) 
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

            } 
            else
            {   

            }

            printf("\n\n\n"); 

        }
        else if(sel_n==3)
        { 
            if(count>0)  
            {
                struct node * start=header;
                for(int i=0; count-i>0;i++) 
                {           
                    printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
                    start=start->next;  
                }
            } 
            else
            {   

            }    
            printf("\n\n\n");   
        } 
        
        else if(sel_n==4)
        {   
            int r_n=0,r_n1=0;
            if(count==0)
            {
                printf("Nothing to remove\n\n\n\n");
            }
            else if(count==1)
            {
                free(header);
                header=NULL;
                tail=NULL;
                printf("\n\n\n");
                count--;
            }
            else if(count>=2)
            {  
                struct node * start=header;
                struct node * finder=header;
                struct node * come=header;
                

                for(int i=0; i<count;i++)    
                {           
                    printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
                    start=start->next;
                    r_n1++;  
                }
                printf("remove number: ");
                scanf("%d",&r_n);
                if(r_n<r_n1&&r_n!=1)
                {

                    for(int i=0;i<r_n-2;i++)
                    {    
                        finder=finder->next;
                    }

                    for(int i=0;i<r_n;i++)
                    {
                        come=come->next;
                    }

                 
                    finder->next=come;                   
                    

                    count--;
                }
                else if(r_n==1)
                {
                    come=come->next;
                    header=come;
                    count--; 
                }
                else if(r_n==r_n1)
                {   

                    for(int i=0;i<r_n-2;i++)
                    {    
                        finder=finder->next;
                        come=come->next;
                    }
                    finder->next=finder->next->next;
                    come->next=NULL;
                    tail=come;
                    count--;

                }  
            } 
        }
        else if(sel_n==5)
        {
        
        if(count>0)  
            {   
                struct node * start=header;
                struct node * insert=header;
                int ins_n,last=0;

                for(int i=0; count-i>0;i++) 
                {           
                    printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
                    start=start->next;
                    last++;  
                }
                printf("insert pos : ");
                scanf("%d",&ins_n);

                if(ins_n==1)
                {   
                    struct node* cur=(struct node*)malloc(sizeof(struct node));
                    
                    insert=cur;

                    printf("score kor: ");
                    scanf("%d",&kor);
                    printf("score eng: ");
                    scanf("%d",&eng);

                    insert->kor=kor;
                    insert->eng=eng;

                    insert->next=header;
                    header=insert;

                    count++;

                }
                else if(ins_n==last)
                {
                    struct node* cur=(struct node*)malloc(sizeof(struct node));
                    struct node * start=header;
                    insert=cur;

                    printf("score kor: ");
                    scanf("%d",&kor);
                    printf("score eng: ");
                    scanf("%d",&eng);

                    insert->kor=kor;
                    insert->eng=eng;

                    for(int i=0;i<last-1;i++)
                    {
                        start=start->next;
                    }

                    start->next=insert;
                    count++;
                }
                else
                {
                    struct node * cur=(struct node*)malloc(sizeof(struct node));
                    struct node * start=header;
                    struct node * finder=header;
                    insert=cur;


                    printf("score kor: ");
                    scanf("%d",&kor);
                    printf("score eng: ");
                    scanf("%d",&eng);

                    insert->kor=kor;
                    insert->eng=eng;

                    for(int i=0; i<ins_n-2;i++)
                    {
                        start=start->next;
                    }
                    
                    for(int i=0;i<ins_n-1;i++)
                    {
                        finder=finder->next;
                    }
                    
                    start->next=insert;
                    insert->next=finder;
                    count ++;
                }
            }
        else
            {
                struct node* cur=(struct node*)malloc(sizeof(struct node));
            if(count==0)
            {
                header=cur;
            }
            else //if(tail!=NULL) 
                tail->next=cur;

            printf("score kor: ");
            scanf("%d",&kor);
            printf("score eng: ");
            scanf("%d",&eng);

            cur->kor=kor;
            cur->eng=eng;
            tail=cur;        
            count++;

            printf("\n\n\n");
            }
        struct node * start=header;    
        for(int i=0; count-i>0;i++) 
                {           
                    printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
                    start=start->next;  
                }    
        printf("\n\n\n");
        }
    }

    return 0;

}