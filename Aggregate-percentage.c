#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, Agg = 0;
    float per;

    printf("Enter Marks of 5 Subjects: \n\n");
    printf("English : ");
    scanf("%d", &a1);
    printf("Maths : ");
    scanf("%d", &a2);
    printf("History : ");
    scanf("%d", &a3);
    printf("Hindi : ");
    scanf("%d", &a4);
    printf("Science : ");
    scanf("%d", &a5);

    Agg = a1 + a2 + a3 + a4 +a5;
    per = Agg / 5;

    printf("\nSum of 5 Subjects is: %d\n", Agg);
    printf("Percentage is: %f", per);
    
    return 0;
}