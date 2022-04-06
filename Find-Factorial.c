#include <stdio.h>
int main()
{
    int i, fact = 1;
Home:
    printf("Enter a number : ");
    scanf("%d", &i);

    if (i >= 1)
    {
        for (i; i >= 1; i--)
        {
            fact = i * fact;
        }

        printf("Factorial of a number is %d", fact);
    }

    else
    {
        printf("Please enter +ve number\n\n");
        goto Home;
    }

    return 0;
}