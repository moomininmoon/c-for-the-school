#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{   
    int x,com;
    int i=0;
    srand((int)time(NULL));

    com = rand ( ) %100+1;

    printf("1부터 100까지의 숫자를 맞추시오\n");
    
        while(com!=x)
             {
                 printf("숫자를 입력하시오 : ");
                 scanf("%d",&x);
        
                 if(com==x)
                 {
                    printf("축하합니다.");
                    printf("  시도횟수 = %d\n",i+1);
                 }
                 else if(com<x)
                 {
                    printf("낮음!\n");
                 }
                 else if(com>x)
                 {
                    printf("큼!\n");
                 }
                 i++;
                 if(i==10)
                    break;

             }   
      if(i==10)   
         printf("횟수를 초과했습니다. 컴퓨터의 숫자는 %d입니다.\n",com);
    return 0;      
}