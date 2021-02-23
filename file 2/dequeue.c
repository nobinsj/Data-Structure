
#include<stdio.h>
#include<conio.h>
void main()
{
 	int choice,MAX;
	int left=-1, right=-1;
	printf("Enter the size of Queue: ");
	scanf("%d",&MAX);
	int deque[MAX];
void insertright()
{
 int n;
 printf("\nEnter the value to be added  ");
 scanf("%d",&n);
 if( (left==0 && right==MAX-1) || (left==right+1) )
 {
  printf("OVERFLOW");
  printf("\n");
 }
 if(left==-1)     
 {
  left=0;
  right=0;
 }
 else
 {
  if(right==MAX-1)
   right=0;
  else
   right=right+1;
 }
 deque[right]=n;
}
void insertleft()
{
 int n;
 printf("\nEnter the value to be added  ");
 scanf("%d",&n);
 if( (left==0 && right==MAX-1) || (left==right+1) )
 {
  printf("OVERFLOW");
  printf("\n");
 }
 if(left==-1)       
 {
  left=0;
  right=0;
 }
 else
 {
  if(left==0)
   left=MAX-1;
  else
   left=left-1;
 }
 deque[left]=n;
}

void deleteright()
{
 if(left==-1)
 {
  printf("UNDERFLOW");
  printf("\n");
  return;
 }
 printf("\nThe deleted element is %d\n", deque[right]);
 if(left==right)         
 {
  left=-1;
  right=-1;
 }
 else
 {
  if(right==0)
   right=MAX-1;
  else
   right=right-1;
 }
}

void deleteleft()
{
 if(left==-1)
 {
  printf("UNDERFLOW");
  printf("\n");
  return;
 }
 printf("\nThe deleted element is %d\n", deque[left]);
 if(left==right)          
 {
  left=-1;
  right=-1;
 }
 else
 {
  if(left==MAX-1)
   left=0;
  else
   left=left+1;
 }
}
void display()
{
 int front=left, rear=right;
 if(front==-1)
 {
  printf("Queue is Empty");
  printf("\n");
  return;
 }
 printf("\nThe elements in the queue are: ");
 if(front<=rear)
 {
  while(front<=rear)
  {
   printf("%d\t",deque[front]);
    printf("\n");
   front++;
  }
 }
 else
 {
  while(front<=MAX-1)
  {
   printf("%d\t",deque[front]);
    printf("\n");
   front++;
  }
  front=0;
  while(front<=rear)
  {
   printf("%d\t",deque[front]);
    printf("\n");
   front++;
  }
 }
 printf("\n");
}
while(1)
 {
  	printf("\n1.Insert At Rear ");
  	printf("\n2.Insert At Front ");
  	printf("\n3.Delete From Rear ");
  	printf("\n4.Delete From Front");
 	printf("\n5.Display ");
 	printf("\n6.Exit");
  	printf("\nEnter your choice: ");
  	scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    insertright();
    break;
   case 2:
    insertleft();
    break;
   case 3:
    deleteright();
    break;
   case 4:
    deleteleft();
    break;
   case 5:
    display();
    break;
   case 6:
    return;
   default:
   printf("Wrong choice\n");
  }
 }
}


