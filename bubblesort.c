/*read n integers,store them in an array  and sort the elements in the array using bubble sort algorithm*/

#include<stdio.h>
int main()
      {
         int array_size,array[10],pass,i,temp;
         printf("\nEnter the number of elements");
         scanf("%d",&array_size);
         printf("\nEnter the array elements");
         for(i=0;i<array_size;i++)
            {
              scanf("%d",&array[i]);
            }
         printf("\nThe array elements are");
         for(i=0;i<array_size;i++)
            { 
              printf("%d\t",array[i]);
            }
         for(pass=0;pass<=array_size-1;pass++)
            {
              for(i=0;i<array_size-1;i++)
                {
                  if(array[i]>array[i+1])
                     { 
                       temp=array[i];
                       array[i]=array[i+1];
                       array[i+1]=temp;
                     }
                }  
            }
         printf("\nThe sorted elements are:\n");
         for(i=0;i<array_size;i++)
             {
               printf("%d\t",array[i]);
               
             }
         return0;
          
      }      
