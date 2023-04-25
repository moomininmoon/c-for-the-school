#include <stdio.h>
#include <string.h>

struct student 
{
    int number;
    char name[10]; 
    double grade;
};

int main(void)
{

    struct student s1;
    struct student s2;
    
    s1.number=20170001;
    strcpy(s1.name,"홍길동");
    s1.grade=4.3;

    printf("학번: %d\n",s1.number);
    printf("이름: %s\n",s1.name);
    printf("학점: %f\n",s1.grade);

    return 0;
    
}