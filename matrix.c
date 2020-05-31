/*Write a menu driven program for performing matrix addition, multiplication and finding the
transpose. Use functions to (i) read a matrix, (ii) find the sum of two matrices, (iii) find the product
of two matrices, (i) find the transpose of a matrix and (v) display a matrix*/



#include<stdio.h>
#include<stdlib.h>
int getmat(int mat[][100],int row,int col)
{
	int i,j;
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
       {
        printf("The element at position (%d,%d): ",i+1,j+1);
        scanf("%d",&mat[i][j]);
       }
    }
    return 0;
}

int disp_mat(int mat[][100],int row,int col)
{
   int i,j;
   for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
      {
       printf("%d\t",mat[i][j]);
      }
     printf("\n");
    }
    return 0;
}

int add_mat(int a[][100],int b[][100],int row,int col)
{
   int sum[100][100],i,j;
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
       {
         sum[i][j]=a[i][j]+b[i][j];
       }
    }
    printf("Matrix 1:\n");
    disp_mat(a,row,col);
    printf("Matrix 2:\n");
    disp_mat(b,row,col);
    printf("The added matrix is\n");
    disp_mat(sum,row,col);
    return 0;
}

int mul_mat(int a[][100],int b[][100],int row1,int col1,int row2,int col2)
{
	int pro[100][100],i,j,k,sum;
	for(i=0;i<row1;i++)
    {
     for(j=0;j<col2;j++) 
      {
       sum=0;
       for(k=0;k<col1;k++)
        {
         sum+=a[i][k]*b[k][j];
         pro[i][j]=sum;
        }
      }
    }
    printf("Matrix 1:\n");
    disp_mat(a,row1,col1);
    printf("Matrix 2:\n");
    disp_mat(b,row2,col2);
    printf("The product matrix is\n");
    disp_mat(pro,row1,col2);
    return 0;
}

void mat_trans(int a[][100],int row,int col)
{
	int trans[100][100],i,j;
	for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
      {
       trans[j][i]=a[i][j];
      }
    }
    printf("The matrix is:\n");
    disp_mat(a,row,col);
    printf("The transpose matrix is\n");
    disp_mat(trans,col,row);
}
int main()
{
 int mat1[100][100],mat2[100][100];
 int row1,col1,row2,col2;
 int ch;
 printf("Enter rows and cols of first matrix\n");
 scanf("%d%d",&row1,&col1);
 printf("Enter rows and cols of second matrix\n");
 scanf("%d%d",&row2,&col2);
 printf("Enter the elements first matrix\n");
 getmat(mat1,row1,col1);
 printf("\nEnter the elements second matrix\n");
 getmat(mat2,row2,col2);
 while(1)
  {
   printf("Select operation from menu\n");
   printf("\t\tMENU\nl.Matrix addition\n2.Matrix multiplication\n3.Transpose of matrix\n4.Exit\n");
   scanf("%d", &ch);
   switch(ch)
    {
     case 1:
         if(row1==row2&&col1==col2)
		   add_mat(mat1,mat2,row1,row1);
		 else
		   printf("!!incompatable...can't add!!\n");  
		   break;
     case 2:
        if(col1==row2)
		   mul_mat(mat1,mat2,row1,col1,row2,col2);
		 else
		   printf("!!incompatable...can't multiply!!\n");  
		   break;
     case 3:
         mat_trans(mat1,row1,col1);
         mat_trans(mat2,row2,col2);
         break;
     case 4:
         exit(0);
     default:
      printf("Invalid choice!!!\n");
    }
  } 
}
	
