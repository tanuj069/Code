#include <stdio.h>
int main()
{
    int i, a[50], n;
    printf("Enter no\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
       

        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}