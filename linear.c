#include <stdio.h>

void main()
{
    int arr[100];
    int s, t;
    printf("\nEnter the total elements in array : ");
    scanf("%d", &t);
    printf("\nEnter the Elements in tha array \n");

    for (int i = 0; i < t; i++)
    {
        scanf(" %d", &arr[i]);
    }
    printf("\nEnter the element to be search : ");
    scanf("%d", &s);
    int j;
    for (j = 0; j < t; j++)
    {
        if (arr[j] == s)
        {
            printf("\n Element Exist at position %d ", j);
            break;
        }
    }
    if (j == t)
    {
        printf("\nELement not found ");
    }
}