//WAP to implement stack using array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100

int arr[MAX];
int top = -1;

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow ");
    }
    else
    {

        top = top + 1;
        arr[top] = item;
    }
}

int pop()
{
    int item;
    if (top == -1)
    {
        printf("Stack underflow ");
    }
    else
    {
        item = arr[top];
        top = top - 1;
        return item;
    }
}

int peek()
{
    if (top == -1)
    {
        printf("Stack underflow ");
    }
    else if (top == MAX - 1)
    {
        printf("Stack overflow ");
    }
    else
    {
        return arr[top];
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack underflow ");
    }
    else
    {
        printf("Stack Elements are : \n");
        for (i = top; i >= 0; i--)
            printf("  %d \n", arr[i]);
        printf("\n");
    }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("\nOptions are \n 1 : PUSH \n 2 : POP \n 3 : PEEK \n 4 : DISPLAY \n 5 : EXIT \n");
        printf(" Enter the Option : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf(" Enter the element to be inserted ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            printf(" Popped Element is : %d ", item);
            break;
        case 3:
            printf(" The Element at the top is : %d ", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf(" Wrong Choice");
        }
    }
    return 0;
}