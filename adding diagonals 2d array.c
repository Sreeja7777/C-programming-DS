//THIS WILL ONLY WORK WITH SQUARE MATRICES NVM IT ALWAYS WORKS!!!

#include <stdio.h>
int main()
{
    int a[4][3],i,j,sum=0;
printf("Enter the matrix numbers\n");
for (i=0;i<4;i++)
 {
    for (j=0;j<3;j++)
     {
        scanf("%d",&a[i][j]);
     }
 }
 printf("\nPRINTING THE ORIGINAL\n");
 for (i=0;i<4;i++)
 {
    for (j=0;j<3;j++)
     {
        printf("%d\t",a[i][j]);
     }
    printf("\n");
 }

 for (i=0;i<4;i++)
 {
    for (j=0;j<3;j++)
     {
         if (i==j)
          sum = sum + a[i][j];
     }
 }
 printf("Sum of diagonals is %d",sum);
 return 0;
}
