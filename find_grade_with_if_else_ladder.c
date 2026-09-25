//Find the Grade using nested if else

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 40) // First check: pass or fail
    {
        if (marks >= 90)
        {
            printf("Grade A\n");
        }
        else
        {
            if (marks >= 75)
            {
                printf("Grade B\n");
            }
            else
            {
                if (marks >= 60)
                {
                    printf("Grade C\n");
                }
                else
                {
                    printf("Pass\n");
                }
            }
        }
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}


