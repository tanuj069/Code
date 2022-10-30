#include <stdio.h>
int prime(int num);

int main()
{
    int lines;
    printf("Enter a and llines\n");
    scanf("%d", &lines);
    int p = 2;
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (prime(p))
                printf("%d\t", p);
            ++p;
        }
        printf("\n");
    }
    return 0;
}

int prime(int num)
{
    if (num == 2 || num == 3)
        return 1;
    for (int i = 2; i <= num; i++)
        if ((num % i) == 0)
            return 0;
    return 1;
}
