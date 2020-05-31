/*Using structure, read and print data of n employees (Name, Employee Id and Salary)*/


#include <stdio.h>
struct Employee
{
  int empid;
  char name[50];
  int salary;
}emp[50];
   int main()
     { int n,i;
       printf("Enter the number of employees\n"); 
       scanf("%d",&n);
       for(i=0;i<n;i++)
         {
           printf("Enter the employee details-%d\n",i+1);
           printf("Employee id:");
           scanf("%d",&emp[i].empid);
           getchar();
           printf("Employee name:");
           scanf("%[^\n]",emp[i].name);
           printf("Employee salary:");
           scanf("%d",&emp[i].salary);
         }
          //printing the details
          printf("Employee Details\n");
          printf("Employee id,Employee name,Employee salary\n");
          for(i=0;i<n;i++)
             printf("%d %s %d\n",emp[i].empid,emp[i].name,emp[i].salary);
     }
