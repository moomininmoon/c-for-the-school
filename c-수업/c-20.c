#include <stdio.h>
#include <stdlib.h>

struct node {
    int kor;
    int eng;
    struct node *next;
    struct node *prev;
};
void news(void);
void showavg(void);
void showall(void);
void removes(void);
void insertpos(void);
void showreverse(void);
struct node * header=NULL;
struct node * tail = NULL;
int sel_n,count=0;
int main(void)
{   
    
    while(sel_n!=7)
    {
        printf("------------------\n");
        printf("1 : new student\n");
        printf("2 : show average\n");
        printf("3 : show all\n");
        printf("4 : remove student\n");
        printf("5 : intsert pos\n");
        printf("6 : show reverse\n");
        printf("7 : exit\n");
        printf("------------------\n");
        printf("select number: ");
        scanf("%d",&sel_n);

        switch(sel_n)
        {
            case 1:
            {
                news();
                count++;
                break;
            }
            case 2:
            {
                showavg();
                break;
            }
            case 3:
            {
                showall();
                break;
            }
            case 4:
            {
                removes();
                count--;
                break;
            }
            case 5:
            {
                insertpos();
                count++;
                break;
            }
            case 6:
            {
                showreverse();
                break;
            }
            case 7:
                break;
        }
    }
    return 0;

}
void news()
{   

    struct node* cur=(struct node*)malloc(sizeof(struct node));
    int eng,kor;
    if(count==0)
    {
        header=cur;
    }
    else  
        tail->next=cur;

        
    printf("score kor: ");
    scanf("%d",&kor);
    printf("score eng: ");
    scanf("%d",&eng);

    cur->kor=kor;
    cur->eng=eng;
    cur->next = NULL;
    cur->prev=tail;
    tail=cur;    

    printf("\n\n\n");    
 
}
void showavg()
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
void showall()
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
void removes()
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
            
        }
        else if(count>=2)
        {  
            struct node * start=header;
            struct node * finder=header;
            struct node * come=header;
            struct node * startrev=tail;
            struct node * finderrev=tail;
            struct node * comerev=tail;

                

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
                struct node * start=header;
                for(int i=0;i<r_n-2;i++)
                {    
                    finder=finder->next;
                }
                for(int i=0;i<r_n1-r_n-2;i++)
                {
                    finderrev=finderrev->prev;
                }
                for(int i=0;i<r_n;i++)
                {
                    come=come->next;
                }
                for(int i=0;i<r_n;i++)
                {
                    comerev=comerev->prev;
                }
                for(int i=0;i<r_n1-1;i++)
                {
                    start=start->next;
                }
            finder->next=come;                   
            finderrev->prev=comerev;
            start=tail;
            
            }
            else if(r_n==1)
            {
                come=come->next;
                header=come;
                tail=tail->prev;
                    
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
                

            }  
        }

}
void insertpos()
{   int eng,kor;
    if(count>0)  
    {   
        struct node * start=header;
        struct node * insert=header;
        struct node * startrev=tail;
        struct node * insertrev=tail;
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
            header->prev=insert;
            header=insert;
            

        }
        else if(ins_n==last)
        {
            struct node* cur=(struct node*)malloc(sizeof(struct node));
            struct node * start=header;
            struct node * finder=header;
            struct node * startrev=tail;
            struct node * finderrev=tail;
           
            
            insert=cur;

            printf("score kor: ");
            scanf("%d",&kor);
            printf("score eng: ");
            scanf("%d",&eng);

            insert->kor=kor;
            insert->eng=eng;

            for(int i=0;i<last-2;i++)
            {
                start=start->next;
            }
            
            for(int i=0;i<last-1;i++)
            {
                finder=finder->next;
            }
            finderrev=finderrev->prev;
            start->next=insert;
            insert->next=finder;
            finder->prev=insert;
            insert->prev=finderrev;
            finder=tail;


        }
        else if(ins_n<last)
        {
            struct node * cur=(struct node*)malloc(sizeof(struct node));
            struct node * start=header;
            struct node * startrev=tail;
            struct node * finder=header;
            struct node * finderrev=tail;
            struct node * come=header;

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
            for(int i=0;i<last-ins_n;i++)
            {
                startrev=startrev->prev;
            }                    
            printf("%d",startrev->eng);
            for(int i=0;i<ins_n-1;i++)
            {
                finder=finder->next;
            }
            for(int i=0;i<last-ins_n+1;i++)
            {
                finderrev=finderrev->prev;
            }
            printf("%d",finderrev->eng);
            for(int i=0;i<last-1;i++)
            {
                come=come->next;
            }        
            start->next=insert;
            startrev->prev=insert;
            insert->next=finder;
            insert->prev=finderrev;
            tail=come;

        }
    }
    else
    {
        struct node* cur=(struct node*)malloc(sizeof(struct node));
        if(count==0)
        {
            header=cur;
        }
        else  
            tail->next=cur;

        printf("score kor: ");
        scanf("%d",&kor);
        printf("score eng: ");
        scanf("%d",&eng);

        cur->kor=kor;
        cur->eng=eng;
        tail=cur;        


        printf("\n\n\n");
    }
    struct node * start=header; 

    for(int i=0; count-i+1>0;i++) 
    {           
        printf("[%d] kor= %d,  eng= %d\n",i+1,start->kor,start->eng);
        start=start->next;  
    }    
     printf("\n\n\n");
        
}
void showreverse()
{
    if(count>0)  
    {
        struct node * rev=tail;
        for(int i=count; i>0;i--) 
        {           
            printf("[%d] kor= %d,  eng= %d\n",i,rev->kor,rev->eng);
            rev=rev->prev;  
        } 

    }
    else
        {   

        }    
        printf("\n\n\n");
};