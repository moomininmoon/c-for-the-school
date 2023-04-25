#include <stdbool.h>          //부울 대수 호출

#include <stdio.h>            //기본함수 호출

#include <stdlib.h>            //연산 함수 호출



struct node {                         //구조체 만들기

  int kor;                            //한국어 정수칸 

  int eng;                            //영어 정수칸

  struct node *next;                    //포인터 설정

};



void showMenu();                      //메뉴 보여주는 함수

void showAll(struct node *);              //전체를 보여주는 함수

void showAverage(struct node *);          //평균 보여주는 함수

struct node *addStudent();                  // 학생 추가하는 함수

void removeStudent(struct node *);                    // 학생 제거 함수



int main(void) {                          //  시작

  bool isExit = false;               // 부울 대수로 엑시트는 거짓

  int idxMenu = 0;                              // 메뉴 선택 정수

  struct node *header = NULL;                     // 노드 구조체의 헤더 부분 설정과 함께 null

  struct node *tail = NULL;                         //  노드 구조체의 끝 부분 설정과 함께 null



  free(header);                 // 헤더의 부분 비우기.



  while (isExit == false) {           // 부울 대수로 돌아가는 때를 설정

    showMenu();                               // 메뉴를 보여준다

    scanf("%d", &idxMenu);                  //메뉴의 번호를 고르게 한다.



    switch (idxMenu) {                        // 메뉴 번호에 따른 작동 스위치화

    case 1: {                                                 //케이스 1일때.

      struct node *std = addStudent();                  //포인터는 추가

      if (header == NULL || tail == NULL) {

        header = tail = std;

      } else {

        tail->next = std;

        tail = std;

      }

      break;

    }

    case 2:

      showAverage(header);

      break;

    case 3:

      showAll(header);

      break;

    case 4:

      printf("Exit\n");

      isExit = true;

      break;

    default:

      printf("Invalid number!\n");

      break;

    }

  }

  return 0;

}



void showMenu() {

  printf("--------------\n");

  printf("1 : new student\n");

  printf("2 : show average\n");

  printf("3 : show all\n");

  printf("4 : remove student\n");

  printf("5 : exit\n");

  printf("--------------\n");

  printf("\nselect number: ");

}



void showAll(struct node *cur) {

  int count = 0;

  while (cur != NULL) {

    printf("[%d] KOR=%d, ENG=%d\n", count + 1, cur->kor, cur->eng);

    cur = cur->next;

    count++;

  }

  if (count == 0) {

    printf("nothing!\n");

  }

}



struct node *addStudent() {

  struct node *std = (struct node *)malloc(sizeof(struct node));



  std->next = NULL;

  printf("score kor:");

  scanf("%d", &(std->kor));

  printf("score eng:");

  scanf("%d", &(std->eng));

  return std;

}





void showAverage(struct node *cur) {

  int kor_total = 0;

  int eng_total = 0;

  int count = 0;

  while (cur != NULL) 
  {

        kor_total += cur->kor;

        eng_total += cur->eng;

        cur = cur->next;

        count++;

  }

  if (count > 0) 
  {

        printf("KOR avg = %d\n", kor_total / count);

        printf("ENG avg = %d\n", eng_total / count);

  }

}