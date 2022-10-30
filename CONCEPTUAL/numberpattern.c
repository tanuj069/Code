#include <stdio.h>
int main()
{
    int a, n, row, co, sp, st, b = 1;
    printf("Enter the number");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (co = 1; co <= row; co++)
        {
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }

    return 0;
}