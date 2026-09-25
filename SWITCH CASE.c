//SWITCH CASE
#include <stdio.h>

int fact(int n)
 {
     if (n==0)
        return 1;
     else
        return n * fact(n-1);
 }

int sum(int a, int b)
 {
    return a + b;

 }

int digitSum(int n)
{

 int sum = 0;

    while(n)
    {
        sum = sum + (n%10);
        n = n/10;
    }
   return sum;
}

 int main()
 {
     int choice, n, a, b;

   do
   {
       printf("\nEnter your Choice: ");
       printf("\n1. Factorial\n2. Sum\n3. Sum of Digits\n4. Exit\n\n");
       scanf("%d",&choice);


 switch (choice)
 {
case 1:
    printf("Enter n \n");
    scanf("%d",&n);
    printf("The factorial is %d\n",fact(n));
break;

case 2:
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    printf("The sum is %d\n",sum(a,b));
break;

case 3:
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The sum of digits is %d\n",digitSum(n));
break;

case 4:
    printf("Exiting the Menu\n");
break;

default:
    printf("Enter a valid choice");

 }
}

while (choice != 4);

return 0;
}
