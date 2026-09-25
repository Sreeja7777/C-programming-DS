#include <stdio.h>
int main()
{
int arr1[5],arr2[5],arr3[5],i;

for (i=0; i<5; i++)
 {
  printf("Enter the first array elements ");
  scanf("%d\n", &arr1[i]);
 }

 for (i=0; i<5; i++)
 {
  printf("Enter the second array elements ");
  scanf("%d\n", &arr2[i]);
 }

 for (i=0; i<5; i++)
 {
 arr3[i] = arr1[i] + arr2[i];
 printf("\nThe sum of element at index %d is %d", i, arr3[i] );
 }
return 0;
}
