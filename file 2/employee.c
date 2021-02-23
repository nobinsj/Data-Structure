#include <stdio.h>
#include <stdlib.h> 
#include<stdbool.h> 
#include<string.h> 
typedef struct {     
     char fname[25],mname[25],lname[25]; } Name; 
typedef struct {
     Name ename;
     int empid;
     float sal;
 }Employee; 
 void addEmployee(Employee E[], int n, char firstName[], char middleName[], char lastName[], int empId, float salary)
{
         strcpy(E[n].ename.fname,firstName);
         strcpy(E[n].ename.mname,middleName);
         strcpy(E[n].ename.lname,lastName);
         E[n].empid=empId;
         E[n].sal=salary;
} 
 
bool search(Employee E[], int n, int empId) 
{    
	int f=0;
     for(int i=0;i<n;i++)
     {

         if(E[i].empid==empId)
	{
             printf("EMPLOYEE FOUND ON POSITION: %d \n",i+1);
	     f=1;
         break;
	}
	
	}
	if(f==0)
		printf("NOT FOUND THE PARTICULAR EMPLOYEE ID!\n");
      } 
 
int main() 
{
     int q, t, n = 0;
     Employee E[10];
     int empId;
     float salary;
     char firstName[30], middleName[30], lastName[30]; 
	while(1)
	{
   	 printf("1. Add Employee Details\n2. Search ");
         scanf("%d", &t);
         if (t == 1) {
	     printf("Enter Employ id, Salary, Firstname, Middlename and Lastname of employee:");
             scanf("%d%f%s%s%s", &empId, &salary, firstName, middleName, lastName);
             addEmployee(E, n, firstName, middleName, lastName, empId, salary);
             n += 1;
         }
	 else if(t==2)
	   {
	    printf("Enter The Employee Id For Search :");
             scanf("%d", &empId);
             search(E, n, empId);
           }
	else
		exit(0);
	}
}  