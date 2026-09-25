#include <stdio.h>
int main()
{
int a[5],i;
for(i=0;i<5;i++)
 {
  printf("Enter the values to be printed in Reverse ");
  scanf("%d",&a[i]);
 }
for(i=4;i>=0;i--)
 {
  printf("The values are %d\n",a[i]);
 }
return 0;
}
