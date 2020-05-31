#include<stdio.h>
void main()
{
      
    char s[10];  
    int i,n,flag=0;
    printf("Enter the string:");
    gets(s);
    n=strlen(s);
    
    for(i=0;i<n/2;i++)
        {
          if(s[i]==s[n-i-1])
          flag=1;
          break;
        }
        if(flag==1)
           printf("string is not palindrome");
        else
           printf("string is palindrome");
        
}       
       
