#include <stdio.h>
int main()
{
    int r, k, a, b, i, n, st, sp, co = 0, row, pro, sum;
    printf("Enter the number a and b");
    scanf("%d %d ", &a, &b);

    for (i = a; i <= b; i++)
    {
        r = k = n;

        while (k > 0)
        {
            k / 10;
            co = co++;
        }

        while (r > 0)
        {
            st = r % 10;
            r = r / 10;
            pro = 1;

            for (sp = 1; sp <= co; sp++)
            {
                pro = pro * sp;
            }

            sum = sum + pro;
        }
        if (sum == n)
        {
            printf("%d is an amrstrong number", n);
        }
    }

    return 0;
}