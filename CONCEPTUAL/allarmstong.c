#include <stdio.h>
int main()
{
    int r, k, a, b, t, i, n, d, sp, co, row, p, pro, sum;
    printf("Enter the number a and b\n");
    scanf("%d\n%d", &a, &b);
    printf("Abe scan kr liye number \n");

    for (i = a; i <= b; i++)
    {
        r = k = t = i;
        co = 0;
        while (k > 0)
        {
            k = k / 10;
            co = co + 1;
        }

        sum = 0;
        while (r > 0)
        {
            d = r % 10;
            r = r / 10;
            pro = 1;

            for (p = 1; p <= co; p++)
            {
                pro = pro * d;
            }

            sum = sum + pro;
        }
        if (sum == i)
        {
            printf("%d is an amrstrong number\n", i);
        }
    }
    return 0;
}