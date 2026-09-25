//String length with stelen

#include <stdio.h>
#include <string.h>
int main ()
{
    int count=0;
    char name [30];
 printf("Enter your string ");
 gets(name);
 puts(name);

 count = strlen(name);
 printf("\nString length is %d",count);

 return 0;
}
