/* to count the number of vowels,consonants and spaces*/



#include<stdio.h>
void main()
     {
        char str[30];
        int i,vowels=0,consonants=0,spaces=0;
        printf("Enter the string with $\n");
        gets(str);
        for(i=0;str[i]!='/0';i++)
            {
               if(str[i]==' ')
                  spaces++;
               else if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
                  vowels++;
               else
                  consonants++;
            }
        printf("vowels=%d consonants=%d spaces=%d,vowels,consonants,spaces");
      }      
       
