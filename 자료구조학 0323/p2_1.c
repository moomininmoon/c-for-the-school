#include <stdio.h>

int main()
{
    int A[6]={10,20,30,40,50,60};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=A[i];
    }

    printf("sum = %d",sum);

    return 0;
}