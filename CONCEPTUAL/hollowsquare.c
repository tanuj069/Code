#include <stdio.h>
int main()
{
    int a, b, co, n, sp, st, row;
    printf("Enter the number");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (co = 1; co <= n; co++)
        {
            if (row == 1 || row == n || co == 1 || co == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}