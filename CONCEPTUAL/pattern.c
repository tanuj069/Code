#include <stdio.h>
int main()
{
    int i, b, n, st, sp, a = 0;
    printf("enter a number n");
    scanf("%d", &n);
    a = 1;
    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("*");
        }

        for (st = 1; st <= a; st++)
        {
            printf(" ");
        }
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("*");
        }

        printf("\n");
        a = a + 2;
    }

    a = 2 * n - 3;

    for (i = 1; i <= n - 1; i++)
    {
        for (sp = 1; sp <= i; sp++)
        {
            printf("*");
        }

        for (st = 1; st <= a; st++)
        {
            printf(" ");
        }
        for (sp = 1; sp <= i; sp++)
        {
            printf("*");
        }
        printf("\n");
        a = a - 2;
    }
    return 0;
}