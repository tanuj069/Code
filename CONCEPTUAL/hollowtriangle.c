#include <stdio.h>
int main()
{
    int a, b, n, row, st, sp;
    printf("Enter the number");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        if (row == 1 || row == n)
        {
            for (st = 1; st <= row; st++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");

            for (sp = 1; sp <= row - 2; sp++)
            {
                printf(" ");
            }

            printf("*");

            printf("\n");
        }
    }

    return 0;
}