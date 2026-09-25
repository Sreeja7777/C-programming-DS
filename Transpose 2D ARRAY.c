#include <stdio.h>
int main ()
{
 int a[3][3],i,j,temp;

    for (i=0;i<3;i++)
     {
         for (j=0;j<3;j++)
         {
             scanf("%d\n",&a[i][j]);
         }
     }

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
            printf("%d\t",temp);
         }
       printf("\n");
     }
return 0;
}

