#include <stdio.h>

int main(void)
{
    char ch;
    char *p;

    ch='A';
    p=&ch;
    

    printf("ch가 가지고 있는 값 ==> %c\n",ch);
    printf("ch의 주소(adress) ==> %d\n",&ch);
    printf("p가 가지고 있는 값: p ==> %d\n",p);
    printf("p가 가르키는 곳의 실제 값 : *p ==> %c\n",*p);
    return 0;
}