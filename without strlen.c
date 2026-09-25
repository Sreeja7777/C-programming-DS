//String length without stelen

#include <stdio.h>
int main ()
{
    int count=0,i;
    char name [30];

 printf("Enter your string ");
 gets(name);
 puts(name);

 while (name[i] != '\0')
 {
     count++;
     i++;
 }

 printf("\nString length is %d",count);

 return 0;
}
