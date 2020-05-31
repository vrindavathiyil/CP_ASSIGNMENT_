/* Read a string (word), store it in an array and obtain its reverse by using a user defined function*/


#include <stdio.h>
#include <string.h>
void reversestr(char str[])
{ 
  int i,n;
  char ch;
  n=strlen(str);
  for(i=0;i<n/2;i++)
    {   ch=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=ch;
    }
}
int main()
{
  char str[100];
  printf("Enter the string \n"); 
  scanf("%[^\n]",str);
  reversestr(str);
  printf("Reversed string is=%s\n",str);
}
