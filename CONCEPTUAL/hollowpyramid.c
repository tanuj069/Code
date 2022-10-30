#include <stdio.h>
int main()
{
    int x, n, i, space, star;
    printf("Enter the number");
    scanf("%d", &n);
    x = 1;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        if (i == 1 || i == n)
        {
            for (star = 1; star <= i; star++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for (space = 1; space <= x; space++)
            {
                printf(" ");
            }

            printf("*");
            printf("\n");
            x = x + 2;
        }
    }

    return 0;
}
