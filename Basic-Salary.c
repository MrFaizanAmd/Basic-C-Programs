#include <stdio.h>
int main()
{
    // Bs- Basic Salary, Da- Dearness Allowance, Hra- House Rent Allowance
    float Bs, Da, Hra, GP;
    printf("\nEnter your Salary : ");
    scanf("%f", &Bs);

    Da = 40 * Bs / 100;
    Hra = 20 * Bs / 100;
    GP = Da + Hra + Bs;

    printf("Your gross salary is %f\n", GP);

    return 0;
}