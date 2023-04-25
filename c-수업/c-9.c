#include <stdio.h>


int main(void)
{   
    int x;
    printf("숫자를 입력하세요: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
        {
          for(int j=0;j<i;j++)
            printf(" ");
        
          for(int j=0;j<x-i;j++)
            printf("*");  

          printf("\n");
          
        }
    return 0;
}