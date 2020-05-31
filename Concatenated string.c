#include<stdio.h>
void main()
    {
       char S1[15],S2[20],S3[30];
       int i=0,j=0;
       printf("Enter the first string ending with $");
       scanf("%s",S1);
       printf("Enter the second string ending with $");
       scanf("%s,S2);
       while(S1!='\o')
           {
              S3[j]=S1[i];
              i++;
              j++;
           }
       i=0;
       while(S2[i]!='\o')
           {
             S3[j]=S2[i];
             i++;
             j++;
           }
       S3[j]= '\o';
       printf("concatenated string is:");
    }
