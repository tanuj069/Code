#include <stdio.h>
int main()
{
    int i, n, j, sp, st, a, b, x = 0;
    printf("Enter the b");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        for (sp = 1; sp <= b - i; sp++)
        {
            printf("");
        }

        for (st = 1; st <= i; st++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}