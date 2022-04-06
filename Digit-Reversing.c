#include <stdio.h>

int main()
{
    int num, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10; // num = num / 10;
    }
    printf("Reversed number = %d", rev);

    // int num, rev = 0, rem;
    // printf("Enter Number to Reverse : ");
    // scanf("%d", &num);

    // while (num != 0)
    // {
    //     rem = num / 10;
    //     rev = num - rem * 10;
    //     num /= 10;
    // }
    // printf("Reversed number = %d", rev);

    return 0;
}