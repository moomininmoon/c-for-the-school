#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>



struct node {

  int kor;

  int eng;

  struct node *next;

};   //구조체 생성



void showMenu();    //메뉴 출력 함수

void showAll(struct node *);        // 전체 출력함수

void showAverage(struct node *);     //평균 출력 함수

struct node *addStudent();          //인원 추가 함수

void removeStudent(struct node *);             //인원 제거 함수



int main(void) {

  bool isExit = false;      // isexis 를 거짓으로 놓고 시작

  int idxMenu = 0;              // 메뉴 0

  struct node *header = NULL;

  struct node *tail = NULL;



  free(header);



  while (isExit == false) {

    showMenu();

    scanf("%d", &idxMenu);



    switch (idxMenu) {

    case 1: {

      struct node *std = addStudent();

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

  printf("\n select number: ");

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

  while (cur != NULL) {

    kor_total += cur->kor;

    eng_total += cur->eng;

    cur = cur->next;

    count++;

  }

  if (count > 0) {

    printf("KOR avg = %d\n", kor_total / count);

    printf("ENG avg = %d\n", eng_total / count);

  }

}