#include <stdio.h>
void swap (int,int);
int main ()
{
 int x = 5 , y = 7;
 printf("\nBefore swap x=%d and y=%d\n",x,y);

 swap (x,y);

  printf("\nAfter swap x=%d and y=%d\n",x,y);

  return 0;
}

void swap(int a,int b)
{
 int temp;
 temp = a;
 a = b;
 b = temp;

 printf("\nAfter swap inside function a = %d and b = %d\n",a,b);
 }
