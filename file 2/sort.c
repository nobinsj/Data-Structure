#include <stdio.h>
#include<stdlib.h>

void display(int arr[],int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);

int main() {
    int n,ch,i;
    int arr[5000];
printf("Enter number of elements you want to sort: ");
  scanf("%d", &n);
printf("Enter %d integers\n", n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
while(1)
{
    	printf("1.BUBBLE SORT");
	printf("\n2.INSERTION SORT");
	printf("\n3.SELECTION SORT");
	printf("\n4.DISPLAY");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	

   switch(ch)
	 {
            
	case 1:	bubbleSort(arr, n);
		
        
		break;
            
	case 2:	insertionSort(arr, n);
    		break;
	case 3: 	selectionSort(arr, n);
		break;
        case 4:	display(arr,n);
		break;
	case 5:
		return 0;
	default:
		printf("INVALID CHOICE");
		break;
	}
}
}
void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

printf("AFTER BUBBLE SORT ELEMENTS ARE: ");
display(arr ,n);
}
void insertionSort(int arr[], int n) {
   for(int i=1;i<n;i++){
       int key=arr[i];
       int pos=i-1;
       while(pos>=0 && arr[pos]>key){
           arr[pos+1]=arr[pos];
            pos=pos-1;
       }
       arr[pos+1]=key;
   } 

printf("AFTER INSERTION SORT ELEMENTS ARE: ");
display(arr,n);
}
void selectionSort(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(arr[pos] > arr[j]){
                pos = j;
            }
        }
        int temp=arr[pos];
        arr[pos] = arr[i];
        arr[i]=temp;
    }
printf("AFTER SELECTION SORT ELEMENTS ARE: ");
display(arr,n);
}
void display(int arr[],int n)
{
	for(int i = 0; i < n; ++i) 
	{
            printf("%d ", arr[i]);
        }
	printf("\n");
 }

