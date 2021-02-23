//WAP to implement stack using linked list

#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start, *temp;

void main()
{
    int ch;
    while (1)
    {
        printf(" \n 1 : PUSH \n 2 : POP \n 3 : DISPLAY \n 4 : EXIT \n  \n  Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf(" \n Invalid Choice \n");
        };
    }
}

void push()
{
    NODE *temp;
    int item;
    printf("\n Enter the Element to be inserted : ");
    scanf("%d", &item);

    temp = (NODE *)malloc(sizeof(NODE));
    temp->data = item;

    if (start == NULL)
    {
        temp->next = NULL;
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}

void pop()
{
    NODE *temp;
    if (start == NULL)
    {
        printf("\n Stack is empty \n ");
    }
    else
    {
        temp = start;
        if (start->next == NULL)
        {
            start = NULL;
        }
        else
        {
            start = start->next;
        }
        printf("\n Deleted Element is %d ", temp->data);
        free(temp);
    }
}

void display()
{
    NODE *p;
    if (start == NULL)
    {
        printf("\n Stack is Empty \n");
    }
    else
    {
        p = start;
        printf(" Stack Elements ");
        while (p->next != NULL)
        {
            printf(" \n %d", p->data);
            p = p->next;
        }
        printf(" \n %d \n", p->data);
    }
}