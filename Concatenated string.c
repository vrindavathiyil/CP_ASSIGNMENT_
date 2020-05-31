/*Read two strings, store them in arrays and concatenate them without using library functions*/

#include<stdio.h>
void main()
    {
       char str1[15],str2[20],str3[30];
       int i=0,j=0;
       printf("Enter the first string ending with $");
       scanf("%s",str1);
       printf("Enter the second string ending with $");
       scanf("%s",str2);
       while(str1[i]!='\0')
           {
              str3[j]=str1[i];
              i++;
              j++;
           }
       i=0;
       while(str2[i]!='\0')
           {
             str3[j]=str2[i];
             i++;
             j++;
           }
       str3[j]= '\0';
       printf("concatenated string is:");
    }
