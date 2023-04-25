#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[100] = {0, };
  
    for(int i=0; i<100; i++){                  //100번 돌릴거임
        int k = (rand() % 100) + 1;             //변수 설정

        int b = 0;                              // 루프를 돌리려고
        if(i == 0) num[i] = k;                  //만약 시작점에선 random 하나 박고 시작
        else{                                   //시작점이 아니니 시작.
            while(b == 0){                          //무한루프 시작
                for(int j=0; j<i; j++){                 //범위 설정 0부터 i전까지 무한루프를 생성함
                    if(num[j] == k){                           //k가 같으면 처음부터 다시 시작.
                        k = (rand() % 100) + 1;
                        break;
                    }
                    if(j == i-1 && num[j] != k){            //그걸 i-1 입력하기 전의 숫자까지 반복하여 반복이 끝나면 입력
                        num[i] = k;
                        b = 1;                                 //와일 탈출
                    }
                }
            }
        }
        
    }
    for(int i=0; i<100; i++) printf("%d ", num[i]);
        printf("\n");

    return 0;
}