#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int year;
    int class;
    int number;
    char name[1000];
    int age;
    struct node * child;
};

int main(void)
{
    struct node * s1= (struct node * )malloc(sizeof(struct node));
    struct node * head=NULL;

    s1->year=5;
    s1->class=10;
    s1->number=32;
    strcpy(s1->name, "hong");
    s1->age=12;
    s1->child=0;
    struct node * s2= (struct node * )malloc(sizeof(struct node));
    s2->year=1;
    s2->class=11;
    s2->number=31;
    strcpy(s2->name, "kim");
    s2->age=11;;
    s1->child=s2;

   
}