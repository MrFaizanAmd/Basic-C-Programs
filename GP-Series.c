#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, sum = 0;
    printf("Enter the Starting : ");
    scanf("%d", &i);
    printf("Enter the Ending : ");
    scanf("%d", &j);

    for (i, j; i <= j; i++)
    {
        sum = sum + pow(i, i);
    }
    printf("%d\n", sum);

    return 0;
}