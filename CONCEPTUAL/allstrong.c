#include <stdio.h>
int main()
{
    int a, b, d, pro, sum, i, j, r;

        printf("\n\nEnter the number a and b\n");
        scanf("%d\n%d", &a, &b);
        printf("Your number are %d and %d\n", a, b);

        for (i = a; i <= b; i++)
        {
            r = i;

            sum = 0;
            while (r > 0)
            {
                d = r % 10;
                r = r / 10;
                pro = 1;
                for (j = 1; j <= d; j++)
                {
                    pro = pro * j;
                }
                sum = sum + pro;
            }
            if (sum == i)
            {
                printf("%d is a strong number\n", i);
            }
        }

    return 0;
}
