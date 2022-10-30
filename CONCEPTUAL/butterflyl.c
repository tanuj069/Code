#include <stdio.h>
int main()
{
    int a, b, sp, co, row, n, st;

    printf("Enter the number");
    scanf("%d", &n);
    //First butterfly
    // a = 2 * n - 2;
    // for (row = 1; row <= n; row++)
    // {
    //     for (st = 1; st <= row; st++)
    //         printf("* ");

    //     for (sp = 1; sp <= a; sp++)
    //         printf("  ");

    //     for (st = 1; st <= row; st++)
    //         printf("* ");

    //     printf("\n");
    //     a = a - 2;
    // }

    // a = 2;
    // for (row = 1; row <= n - 1; row++)
    // {
    //     for (st = 1; st <= n - row; st++)
    //         printf("* ");

    //     for (sp = 1; sp <= a; sp++)
    //         printf("  ");

    //     for (st = 1; st <= n - row; st++)
    //         printf("* ");

    //     printf("\n");
    //     a = a + 2;
    // }

    // printf("\n");
    //Second Butterfly
    a = 2 * n - 2;
    for (row = 1; row <= n; row++)
    {
        for (st = 1; st <= row; st++)
            printf("* ");

        for (sp = 1; sp <= a; sp++)
            printf("  ");

        for (st = 1; st <= row; st++)
            printf("* ");

        printf("\n");
        a = a - 2;
    }

    a = 0;
    for (row = 1; row <= n; row++)
    {
        for (st = 1; st <= n + 1 - row; st++)
            printf("* ");

        for (sp = 1; sp <= a; sp++)
            printf("  ");

        for (st = 1; st <= n + 1 - row; st++)
            printf("* ");

        printf("\n");
        a = a + 2;
    }

    return 0;
}
