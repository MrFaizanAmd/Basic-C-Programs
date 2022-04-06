#include <stdio.h>
int main()
{
    // int a0h, a0w, a1h, a1w;
    int a2h, a2w, a3h, a3w;
    // int a4h, a4w, a5h, a5w;
    // int a6h, a6w, a7h, a7w;
    // int a8h, a8w;

    // a0h = 1189;
    // a0w = 841;
    a2h = -5 % 2;
    printf("Value is %d\n", a2h);
    a3h = 5 % 2;
    printf("Value is %d\n", a3h);
    a2w = -5 % -2;
    printf("Value is %d\n", a2w);
    a3w = 5 % -2;
    printf("Value is %d\n", a3w);

    return 0;
}