#include <stdio.h>
int main()
{
int i, a[10], even=0, odd=0;

for(i=0; i<10; i++)
 {
   printf("Enter the elements ");
   scanf("%d",&a[i]);
 }
for(i=0; i<10; i++)
 {
   if (a[i]%2==0)
    even = even + 1;
   else
    odd++;
 }
printf("Even elements are %d\n",even);
printf ("Odd elements are %d",odd);

return 0;
}
