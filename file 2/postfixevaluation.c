#include <stdio.h>
#include <ctype.h>
#define max 100 
#define psize 100 
int stack[max];
int top = -1; 
void push(int item)
{
	if (top >= max - 1)
 	{
        printf("Stack over flow");
        return;
    	}
    else 
	{
        top = top + 1;
        stack[top] = item;
    	}
}
int pop()
{
    int item;
    if (top < 0) 
    {
        printf("Stack under flow");
    }
    else 
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}
void post(char exp[])
{

    int i;
    char n;
    int val;
    int n1, n2;
    for (i = 0; exp[i] != ')'; i++) {
        n = exp[i];
        if (isdigit(n)) {
           
            push(n - '0');
        }
        else if (n == '+' || n== '-' || n== '*' || n== '/') 
       {    
            n1 = pop();
            n2 = pop();

            switch (n) 
            {
            case '*':
                val = n2 * n1;
                break;

            case '/':
                val = n2 / n1;
                break;

            case '+':
                val = n2 + n1;
                break;

            case '-':
                val = n2 - n1;
                break;
            }
	 push(val);
        }
    }
    printf(" RESULT OF EXPRESSION: %d \n", pop());
printf("\n");
}
int main()
{

    int i;
    char poste[psize];
   printf(" ENTER THE POSTFIX EXPRESSON THAT IS ENDING WITH THE SYMBOL ')' : ");
	for (i = 0; i <= psize - 1; i++) {
        scanf("%c", &poste[i]);

        if (poste[i] == ')') 
        {
            break;
        } 
    }
post(poste);
return 0;
}		
			

