#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dnode
{
    struct dnode *left;
    int data;
    struct dnode *right;
};
struct dnode *head, *temp, *p, *start, *ggorigomtang, *finder;
char in1[8] = "insert";
char de1[8] = "delete";
char qu1[8] = "quit";
char a1[8] = {0,};
int count = 0, turn = 0;
int in = 1, de = 1, qu = 1;
int main()
{
    for (int i = 1; i < 6; i++)
    {
        p = (struct dnode *)malloc(sizeof(struct dnode));
        p->data = i * 10;
        if (i == 1)
            head = p;
        else
        {
            ggorigomtang->right = p;
            p->left = ggorigomtang;
        }
        ggorigomtang = p;
        count++;
    }
    head->left = ggorigomtang;
    ggorigomtang->right = head;
    start = head;
    printf("Initial List(->): ");
    while (1) 
    {

        printf("%d -> ", start->data);
        start = start->right;
        if (ggorigomtang == start)
        {
            turn++;
        }
        if (turn == 2)
        {
            printf("%d", start->data);
            break;
        }
    }
    turn = 0;
    printf("\n");
    printf("Initial List(<-): ");
    while (1) 
    {

        printf("%d", start->data);
        start = start->left;
        if (ggorigomtang == start)
        {
            turn++;
        }
        if (turn == 2)
        {
            start = head;
            break;
        }
        printf(" -> ");
    }
    printf("\n\n");

    while (1)
    {

        printf("Insert or Delete or Quit: ");
        scanf("%s", a1);

        in = strcmp(a1, in1);
        de = strcmp(a1, de1);
        qu = strcmp(a1, qu1);

        if (in == 0)
        {
            temp = head;
            start = head;
            int a, b;
            printf("Enter the index and data: ");
            scanf(" %d %d", &a, &b);

            p = (struct dnode *)malloc(sizeof(struct dnode));
            p->data = b;
            p->left = NULL;
            p->right = NULL;

            if (a == 1)
            {
                if (count == 0)
                {
                    head = p;
                    ggorigomtang = p;
                }
                else
                {
                    p->right = head;
                    head->left = p;
                    p->left = ggorigomtang;
                    ggorigomtang->right = p;
                    head = p;
                }
            }
            else if (a <= count)
            {
                for (int i = 0; i < a - 1; i++)
                {
                    temp = temp->right;
                }
                temp->left->right = p;
                p->left = temp->left;
                p->right = temp;
                temp->left = p;
            }
            else
            {
                for (int i = 0; i < a - 2; i++)
                {
                    temp = temp->right;
                }
                temp->right = p;
                p->left = temp;
                p->right = head;
                head->left = p;
                ggorigomtang = p;
            }
            count++;
            temp = start = head;
            turn = 0;

            printf("List after insertion(->): ");
            while (1) 
            {
                if (count == 1)
                {
                    printf("%d", temp->data);
                }
                printf("%d -> ", start->data);
                start = start->right;
                if (ggorigomtang == start)
                {
                    turn++;
                }
                if (turn == 2)
                {
                    printf("%d", start->data);
                    break;
                }
            }
            turn = 0;
            printf("\n");
            printf("List after insertion(<-): ");
            while (1)
            {
                if (count == 1)
                {
                    printf("%d", temp->data);
                }
                printf("%d", start->data);
                start = start->left;
                if (ggorigomtang == start)
                {
                    turn++;
                }
                if (turn == 2)
                {
                    start = head;
                    break;
                }
                printf(" -> ");
            }
            printf("\n\n");
        }
        else if (de == 0)
        {
            int a, where = 1;
            start = temp = head;
            printf("Enter the data: ");
            scanf(" %d", &a);
            for (int i = 0; i < count; i++)
            {
                if (temp->data == a)
                {
                    a = where;
                    break;
                }
                where++;
                temp = temp->right;
            }

            temp = start = finder = head;
            if (where == 1)
            {
                if (count == 1)
                {
                    head = ggorigomtang = NULL;
                }
                else
                {
                    head = head->right;
                    head->left = ggorigomtang;
                    ggorigomtang->right = head;
                    free(temp);
                }
            }
            else if (where < count)
            {
                for (int i = 0; i < where - 1; i++)
                {
                    temp = temp->right;
                    start = start->right;
                }
                temp->left->right = start->right;
                start->right->left = temp->left;
                free(start);
            }
            else if (where == count)
            {
                temp = ggorigomtang->left;
                start=ggorigomtang;
                temp->right = ggorigomtang->right;
                ggorigomtang->right->left = temp;
                ggorigomtang = temp;
                free(start);

            }

            if (a == where)
                count--;
            temp = start = head;
            turn = 0;
            if (count == 0)
            {
                printf("there's no list.\n OFF");
                return 0;
            }
            printf("List after deletion(->): ");
            while (1) 
            {

                printf("%d", start->data);
                start = start->right;
                if (ggorigomtang->right == start)
                {
                    turn++;
                }
                if (turn == 2)
                {
                    break;
                }
                printf(" -> ");
            }
            turn = 0;
            start = ggorigomtang;
            printf("\n");
            printf("List after deletion(<-): ");
            while (1)
            {

                printf("%d", start->data);
                start = start->left;
                if (ggorigomtang == start)
                {
                    turn++;
                }
                if (turn == 2)
                {
                    start = head;
                    break;
                }
                printf(" -> ");
            }
            printf("\n\n");
        }
        else if (qu == 0)
        {
            printf("OFF");
            return 0;
        }
    }
}