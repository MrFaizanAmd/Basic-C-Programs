#include <stdio.h>

int main()
{

    int i, j, n;
    
    // First Pattern : Right Increasing Triangle
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    // for (i = 0; i < n; i++)
    //         OR
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Second Pattern : Right Decreasing Triangle
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Third Pattern : Square
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Fourth Pattern : Left Increasing Triangle
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf("  "); // Because ("* ") is 2digit
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    // Fifth Pattern : Left Decreasing Triangle
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < /*=*/i; j++) // I am not using "=" because it print extra space
        {
            printf("  "); // Because ("* ") is 2digit
        }
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Sixth Pattern : Increasing Equilateral Triangle
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    // Seventh Pattern : Decreasing Equilateral Triangle
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < /*=*/i; j++) // I am not using "=" because it print extra space
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Eighth Pattern : Hill Pattern
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf("  ");
        }
        for (j = 1; j < /*=*/i; j++) // I am not using "=" because it print extra line
        {
            printf("* ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Ninth Pattern : Reverse Hill Pattern
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < /*=*/i; j++) // I am not using "=" because it print extra space
        {
            printf("  ");
        }
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra line
        {
            printf("* ");
        }
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Tenth Pattern : Diamond Pattern
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < /*=*/i; j++) // I am not using "=" because it print extra space
        {
            printf(" ");
        }
        for (j = i; j <= n; j++) // I am not using "=" because it print extra line
        {
            printf("* ");
        }
        printf("\n");
    }

    // Eleventh Pattern : Double Hill Pattern
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Twelth Pattern : Butterfly
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf("    ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("    ");
        for (j = 1; j < /*=*/i; j++) // I am not using "=" because it print extra space
        {
            printf("    ");
        }
        for (j = i; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Thirtinth Pattern : Cat Pattern
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i; j < /*=*/n; j++) // I am not using "=" because it print extra space
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (j = i; j <= n; j++) // I am not using "=" because it print extra line
        {
            printf("* ");
        }
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}