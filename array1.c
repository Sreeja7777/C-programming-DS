#include <stdio.h>
int main()
{
int a[5],i;
for(i=0;i<5;i++)
 {
  printf("Enter the values to be printed ");
  scanf("%d",&a[i]);
 }
for(i=0;i<5;i++)
 {
  printf("The values are %d\n",a[i]);
 }
return 0;
}
