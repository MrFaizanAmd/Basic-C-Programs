#include <stdio.h>

int main()
{

    int Num, Even = 0, Odd = 0;
    printf("Enter a number : ");
    scanf("%d", &Num);

    for (int i = 1; i <= Num; i++)
    {
        if (i % 2 == 0)
        {
            Even = Even + i;
        }

        else
        {
            Odd = Odd + i;
        }
    }

    printf("Sum of Even Numbers : %d\n", Even);
    printf("Sum of Odd Numbers : %d\n", Odd);

    return 0;
}