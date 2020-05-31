/*Read n integers, store them in an array and find their sum and average*/


#include<stdio.h>
int main()
{
    int array[20],n,i;
    float sum=0;
    printf("Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("Enter %d elements to the array\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
      sum=sum+array[i];
    }
    printf("\nThe array elements are\n");
    for(i=0;i<n;i++)
      printf("%d\t",array[i]);
      printf("\nThe sum = %.2f , average = %.2f\n",sum,sum/n);
    return 0;
}
