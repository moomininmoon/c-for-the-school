#include <stdio.h>

int main (void)
{
    int s[10]={1,0,3,2,5,4,7,6,9,8};
    int tmp;
    int i,k;

    int *p;


    p=s;
    

    printf("정렬 전 배열 s => ");
    for(i=0;i<10;i++)
    {
        printf("%d ",s[i]);
    }

    printf("\n");

    for(i=0;i<9;i++)
    {
        for(k=i+1;k<10;k++)
        {
            if(*(p+i)>*(p+k))
            {   
                printf("%d\n",*(p+i));
                tmp=*(p+i);
                *(p+i)=*(p+k);
                *(p+k)=tmp;
                printf("%d\n",*(p+i));
            }
        }
    }
    printf("정렬 후 배열 s => ");
    for(i=0;i<10;i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}