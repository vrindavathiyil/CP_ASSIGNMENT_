/*read a string,store it in an array and check whether it is palindrome word or not*/


#include<stdio.h>
void main()
{
      
    char str[10];  
    int i,n,flag=0;
    printf("Enter the string:");
    gets(str);
    n=strlen(str);
    
    for(i=0;i<n/2;i++)
        {
          if(str[i]==str[n-i-1])
          flag=1;
          break;
        }
        if(flag==1)
           printf("string is not palindrome");
        else
           printf("string is palindrome");
        
}       
       
