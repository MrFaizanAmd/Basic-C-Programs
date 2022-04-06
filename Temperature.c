#include <stdio.h>
int main()
{
    float Far, Cent;

    printf("\nEnter the temperature (F) : ");
    scanf("%f", &Far);

    Cent = (Far - 32) * 5 / 9;

    printf("Temperaur in centigrate (C) : %f\n", Cent);

    return 0;
}