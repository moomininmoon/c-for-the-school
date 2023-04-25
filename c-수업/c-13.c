#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((int)time(NULL));

    int num[100];

    for(int i=0;i<100;i++)
    {
        int k=rand()%100+1;
        num[i]=k;
        for(int j=1;j<=i+1;j++)
        {
            while(num[i-j]==k)
            {   
                int k=rand()%100+1;
                num[i]=k;

                if(num[i-j]!=k)
                    break;
                    
            }    
        }
    }

    for(int i=0;i<100;i++)
        printf(" %d ",num[i]);
    
    return 0;
}
