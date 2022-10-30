#include <stdio.h>
int main()
{
    int a, b, d, n, i, j;
    printf("Enter the number for which you want table\n");
    scanf("%d\n%d", &a, &n);

    printf("Enter the digit still you want series of table\n");
    scanf("%d", &d);
    for (j = a; j <= n; j++)
    {
        for (i = 1; i <= d; i++)
        {
            printf("%d X %d = %d\n", j, i, j * i);
        }
        printf("\n\n");
    }

    return 0;
}