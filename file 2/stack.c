#include <stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	 top=-1;
	printf("ENTER THE SIZE OF THE STACK: ");
	scanf("%d",&n);
while(1)
{

	printf("\n1.PUSH");
 	printf("\n2.POP"); 
	printf("\n3.DISPLAY");
 	printf("\n4.END");
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
 switch(choice) 
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
	exit(1);
default:
	printf("INVALID CHOICE!");
 	break;
}
}
}

void push()
{
	if(top>=n-1)
	{
		printf("Stack overflow");

	}
	else
	{
		printf("Enter the value to be pushed: ");
	scanf("%D",&x);
	top++;
	stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("Stack underflow");

	}
	else
	{
		printf("The poped element is %d",stack[top]);
	top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("The elements in stack ");
		for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);

	}
	else
	{
		printf("Stack is empty");

	}
}