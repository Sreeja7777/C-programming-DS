#include <stdio.h>
int main()
{
int marks[10];
int i, sum=0;
float avg;

for(i=0;i<10;i++)
 {
  printf("Enter the marks ");
  scanf("%d",&marks[i]);
 }
for(i=0;i<10;i++)
 {
  sum = sum + marks[i];
 }
 avg = sum/10.0;
printf("The Sum is %d and the Average is %.2f\n", sum, avg);
return 0;
}
