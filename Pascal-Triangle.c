#include <stdio.h>
// #include <conio.h>

int main()
{

    int row, col, space, n, num;
    printf("Enter the number of rows : ");
    scanf("%d", &num);

    for (row = 0; row < num; row++)
    {
        for (space = 1; space < (num - row); space++)
        {
            printf(" ");
        }
        n = 1;
        for (col = 0; col <= row; col++)
        {
            printf("%d ", n);
            n = n * (row - col) / (col + 1);
            // printf("%d = %d * (%d - %d) / (%d + 1 )", n, n, row, col, col);
        }
        printf("\n");
    }
    // getch();

    return 0;
}