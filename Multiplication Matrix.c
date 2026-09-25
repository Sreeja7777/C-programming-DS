#include<stdio.h>
int main()
 {
  int a[3][3],b[3][2],c[3][2],i,j,k,sum;

  printf("Enter first matrix of\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
       scanf("%d",&a[i][j]);
   }
  }

  printf("Enter second matrix of\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<2;j++)
   {
       scanf("%d",&b[i][j]);
   }
  }


  //Printing the matrix
printf("Printing the first Matrix\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
      printf("%d\t",a[i][j]);
   }
   printf("\n");
  }

  printf("Printing the second Matrix\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<2;j++)
   {
      printf("%d\t",b[i][j]);
   }
   printf("\n");
  }

  //MULTIPLICATION
  for (i=0;i<3;i++)
  {
    for (j=0;j<2;j++)
    {
        sum=0;
      for (k=0;k<3;k++)
      {
         sum = sum + a[i][k] * a[k][j]; //ITS I AT FIRST THEN J AT LAST!!
      }
         c[i][j]= sum;
    }
  }

  printf("Printing the result Matrix\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<2;j++)
   {
      printf("%d\t",c[i][j]);
   }
   printf("\n");
  }

return 0;
 }


