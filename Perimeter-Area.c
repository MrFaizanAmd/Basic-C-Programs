#include <stdio.h>
int main()
{
    float l, b, r, Area1, Area2, Per, Cir;

    printf("Enter length of rectangle : ");
    scanf("%f", &l);
    printf("Enter breath of rectangle : ");
    scanf("%f", &b);

    Area1 = l * b;
    Per = 2 * (l + b);
    printf("\nArea of rectangel is : %f\n", Area1);
    printf("Perimeter of rectangel is : %f\n", Per);

    printf("\nEnter radius of circle : ");
    scanf("%f", &r);

    Area2 = 3.14 * r * r;
    Cir = 2 * 3.14 * r;

    printf("\nArea of circle is : %f\n", Area2);
    printf("Circumference of circle is : %f\n", Cir);


    return 0;
}