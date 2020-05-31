/*Read two input each representing the distances between two points in the Euclidean space,
store these in structure variables and add the two distance values*/

#include <stdio.h>
struct Point
  {
   int dist1,dist2;

  }point1,point2,point3;
  int main()
    {
      printf("Enter the first point(dist1,dist2)\n"); 
      scanf("%d,%d",&point1.dist1,&point1.dist2);
      printf("Enter the second point(dist1,dist2)\n"); 
      scanf("%d,%d",&point2.dist1,&point2.dist2);
      point3.dist1=point1.dist1+point2.dist1;
      point3.dist2=point1.dist2+point2.dist2;
      printf("new point after addition\n");
      printf("(%d,%d)\n",point3.dist1,point3.dist2);
    }
