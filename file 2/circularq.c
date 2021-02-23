# include<stdio.h>
void main()
{
	int MAX;
	printf("Enter the size of Queue: ");
	scanf("%d",&MAX);
	int cqueue_arr[MAX];
	int front = -1;
	int rear = -1;
	int choice,item;
	void insert()
	{
		if((front == 0 && rear == MAX-1) || (front == rear+1))
		{
		printf("Queue Overflow \n");
		printf("\n");
		return;
		}
		if (front == -1)  
		{
		front = 0;
		rear = 0;
		}
		else
		{
			if(rear == MAX-1)	
			{
				rear = 0;
			}
			else
			{
				rear = rear+1;
			}
		}
	printf("Input the element for insertion in queue: ");
	scanf("%d", &item);
	cqueue_arr[rear] = item ;
      }

void delete()
{
	if (front == -1)
	{
	printf("Queue Underflow\n");
	printf("\n");
	return ;
	}
	printf("Element deleted from queue is   : %d\n",cqueue_arr[front]);
	if(front == rear) 
	{
		front = -1;
		rear=-1;
	}
	else
	{	
		if(front == MAX-1)
		front = 0;
		else
		front = front+1;
	}
}

void display()
{
	int frontp = front,rearp = rear;
	if(front == -1)
	{
	printf("Queue is empty\n");
	printf("\n");
	return;
	}
	printf("\n");
	printf("Queue elements :\n");
 	printf("\n");
	if( frontp <= rearp)
	while(frontp<= rearp)
	{
	printf("%d ",cqueue_arr[frontp]);
	printf("\n");
	frontp++;
	}
	else
	{
	while(frontp <= MAX-1)
	{
		printf("%d ",cqueue_arr[frontp]);
		printf("\n");
		frontp++;
	}
	frontp = 0;
	while(frontp<= rearp)
	{
		printf("%d ",cqueue_arr[frontp]);
		printf("\n");
		frontp++;
	}
}
printf("\n");
}
while(1)
{
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Display\n");
	printf("4.Quit\n");
	printf("\n");
	printf("Enter your choice :  ");
	scanf("%d",&choice);
switch(choice)
{
case 1 :
    insert();
     break;
case 2 :
    delete();
    break;
case 3:
    display();
    break;
case 4:
    return;
default:
printf("Wrong choice\n");
}
}
}
