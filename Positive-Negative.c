#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check +ve or -ve : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is -ve", num);
    }

    else if (num > 0)
    {
        printf("%d is +ve", num);
    }

    else
    {
        printf("%d is zero", num);
    }
    

    return 0;
}