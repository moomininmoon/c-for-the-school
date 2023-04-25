#include <stdio.h>

int main(void)
{

    int A[3][2]={0,};
    int B[2][2]={0,};

    printf("A 입력:  ");
    for(int j=0;j<2;j++)
    {
        for(int i=0;i<3;i++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("B 입력:  ");

    for(int j=0;j<2;j++)
    {
        for(int i=0;i<2;i++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<1;j++)
        {
            printf("%d   %d",A[i][j]*B[0][0]+A[i][j+1]*B[1][0], A[i][j]*B[0][1]+A[i][j+1]*B[1][1]);
        }
        printf("\n");
    }

    
}