#include <stdio.h>                     
#include<string.h>                      
#define max 20
char string[max][20];                            
void search(int n,char word[])
{
    int lb, mid, ub;
    lb = 0;                             
    ub = n;                            
    do
    {
        mid = (lb + ub) / 2;             
        if ((strcmp(word,string[mid]))<0)       
            ub = mid - 1;                          
        else if ((strcmp(word,string[mid]))>0)
            lb = mid + 1;                          
    } while ((strcmp(word,string[mid])!=0) && lb <= ub);
    if ((strcmp(word,string[mid]))==0)              
          printf("SEARCHING IS SUCCESSFUL IN POSITION %d\n",mid+1);
    else                                        
          printf("FAILED \n");
}
void sort(int n)
{
char t[20];
for (int i = 1; i < n; i++)
    {
      for (int j = 1; j < n; j++)
      {                                              
          if (strcmp(string[j - 1], string[j]) > 0)
          {                                         
              strcpy(t, string[j - 1]);
               strcpy(string[j - 1], string[j]);
              strcpy(string[j], t);
          }
      }
	}

}        
void main()                  
{
    char t[20],word[20];        
    int i, j, n;
    printf("Enter the number of words: \n");
    scanf("%d", &n);                            
    printf("Enter the words: \n");
    for (i = 0; i < n; i++)                  
            scanf("%s",string[i]);
    printf("Input words \n");                   
    for (i = 0; i < n; i++)
         printf("%s\n", string[i]);
    printf("\n");
   sort(n);
   

    printf("SORTED WORDS \n");                   
    for (i = 0; i < n; i++)
         printf("%s\n", string[i]);
  
   printf("ENTER THE ELEMENT TO BE SEARCHED: \n");
   scanf("%s",word);                                   
   search(n,word);                          
}

