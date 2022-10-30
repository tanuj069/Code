#include <stdio.h>
int HCF(int, int);

int main()
{
    int a, b, c, d, result;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    result = HCF(HCF(a, b), HCF(c, d));
    printf("The HCF is %d", result);
}

int HCF(int a, int b)
{
    int min, hcf;
    min = a < b ? a : b;
    for (int i = 1; i <= min; i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            hcf = i;
        }
    }
    return hcf;
}
