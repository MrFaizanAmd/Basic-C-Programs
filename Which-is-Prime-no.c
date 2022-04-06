#include <stdio.h>
int main()
{
    int i, num, Prime;
    printf("Enter Any Number : ");
    scanf("%d", &num);

    // for (i = 2; i <= (num / 2); i++)
    for (i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            Prime = 0;
            break;
        }
    }

    if (Prime == 0)
    {
        printf("\n%d is Not Prime Number\n", num);
    }

    else
    {
        printf("\n%d is Prime Number\n", num);
    }

    return 0;

}