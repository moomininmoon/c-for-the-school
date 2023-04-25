#include <stdio.h>



int main(void)

{

    int x;

    while(x% 2 == 0)

      {

        printf("숫자를 입력하시오:");

        scanf("%d",&x);

        printf("홀수를 입력하시오.\n");

      }

  

    for(int i=0;i<x;i++)

      {

        for(int j=0;j<x-1-i;j++)

          printf(" ");

        for(int j=0;j<i+1;j++)

          printf("* ");

          printf("\n");

      }

    return 0;

}