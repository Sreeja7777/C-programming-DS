
#include <stdio.h>
int main()
{
    int a[3][3],i,j,temp;
printf("Enter the matrix to be trasposed\n");
for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
     {
        scanf("%d",&a[i][j]);
     }
 }
 printf("\nPRINTING THE ORIGINAL SHIT\n");
 for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
     {
        printf("%d\t",a[i][j]);
     }
    printf("\n");
 }

 //TRANSPOSE WITH SWAP
 printf("\nFUCKIN TRANSPOSED!\n");
 for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
     {
        if (i<j)
        {
           temp = a[i][j];
           a[i][j] = a[j][i];
           a[j][i] = temp;
        }
        printf("%d\t", a[i][j]);
        }
    printf("\n");
 }

 return 0;
}
