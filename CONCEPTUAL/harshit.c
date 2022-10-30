#include <stdio.h>
int main()
{
    int a, i, j, row, space, n, b, c;
    printf("Enter the number\n");
    scanf("%d", &n);
    c = 65;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", c);
            c++;
        }

        printf("\t\n");
    }

    return 0;
}