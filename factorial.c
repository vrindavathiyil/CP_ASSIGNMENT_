/* Find the factorial of a given Natural Number n using recursive and non recursive functions*/


#include <stdio.h>
long int factnr(int n)
 { 
    int i;
    long int f=1;
    for(i=1;i<=n;i++)
       f=f*i;
    return f;
 }
  long int factr(int n)
   {
     if(n==0) return 1;
     else
     return (n*factr(n-1));
   }
     int main()
      {
        int n;
        printf("Enter the number\n");
        scanf("%d",&n);
        printf("Factorial using non recursive function %d!=%ld\n",n,factnr(n));
        printf("Factorial using recursive function %d!=%ld\n",n,factr(n));
      }
