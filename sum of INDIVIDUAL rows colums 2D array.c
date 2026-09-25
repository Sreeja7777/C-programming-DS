#include <stdio.h>
int main()
{
    int a[3][3],i,j,SumRow,SumColumn;
printf("Enter the matrix to be added in rows and colums\n");
for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
     {
        scanf("%d",&a[i][j]);
     }
 }
 printf("\nPRINTING THE ORIGINAL\n");
 for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
     {
        printf("%d\t",a[i][j]);
     }
    printf("\n");
 }

 for (i=0;i<3;i++)
 {
  SumRow=0,SumColumn=0;
    for (j=0;j<3;j++)
     {
     SumRow = SumRow + a[i][j];
     SumColumn = SumColumn + a[j][i];
     }
    printf("\nSum of Rows is %d, Sum of Column is %d\n", SumRow,SumColumn);
 }

 return 0;
}
