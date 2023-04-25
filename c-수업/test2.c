#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[100] = {0, };           
    int num1[101] = {0, };              
    int max1,max2,max3=0;
    for(int i=0; i<100; i++){           
        int k = (rand() % 100) + 1;     
        
        if(num1[k] == 0){           
            num[i] = k;
            num1[k] = 1;                
        }
        else{                                 
            while(num1[k] != 0){
                k = (rand() % 100) + 1;
            }
            num[i] = k;
            num1[k] = 1;
        }   
    } 
    max1=num[0];
    for(int i=0;i<100;i++)
    {
     if(max1<num[i])
      {
        max2=max1;
        max1=num[i];
        max3=i;
      }
      
    }
    for(int i=0;i<100;i++)
    {
      if(max2<num[i]&&i!=max3)
        max2=num[i];
    }
    
    printf("%d",max2);

    return 0;
}