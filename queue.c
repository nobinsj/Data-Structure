#include <stdio.h>
#include<stdlib.h>

int front=-1;
int rear=-1;
int i,x,choice,max;
int qarray[100];
void insert();
void delete();
void display();
int main()
{
	printf("Enter the size of Queue: ");
	scanf("%d",&max);
while(1)
{
	
	printf("\n1.INSERT");
 	printf("\n2.DELETE"); 
	printf("\n3.DISPLAY");
 	printf("\n4.END");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
 switch(choice) 
{
 case 1:
	 insert();
	 break;
 case 2: 
	delete();
	 break;
 case 3: 
	display();
 	break;
 case 4: 
	exit(1);
default:
	printf("Wrong choice");
 	break;
}
}
}
void insert()
{
	if(rear==max-1)
	{
		printf("Queue overflow");

	}
	else
	{
	if(front==-1)
	front=0;
		printf("Enter the element in the queue:");
	scanf("%d",&x);
	rear=rear+1;
	qarray[rear]=x;
	}
}
void delete()
{
	if(front==-1 || front>rear)
	{
		printf("Queue underflow");
		return;
	}
	else
	{
		printf("The deleted element is %d",qarray[front]);
		front=front+1;
	}
}
void display()
{
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		printf("\n%d",qarray[i]);

	}
}
