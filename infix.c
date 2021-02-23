#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int function(char c)
{
    if(c == '(')
        return 0;
    if(c == '+' || c == '-')
        return 1;
    if(c == '*' || c == '/')
        return 2;
    return 0;
}
int main()
{
    char exp[100];
    char *e, c;
    printf("Enter the expression: ");
    scanf("%s",exp);
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((c = pop()) != '(')
                printf("%c ", c);
        }
        else
        {
            while(function(stack[top]) >= function(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}
