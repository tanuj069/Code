// Multiplication Table of a given number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &n);

    printf("Multiplication table of %d is as follows:\n", n);

    // printf("%d x  1 = %d\n", n, n *  1);
    // printf("%d x  2 = %d\n", n, n *  2);
    // printf("%d x  3 = %d\n", n, n *  3);
    // printf("%d x  4 = %d\n", n, n *  4);
    // printf("%d x  5 = %d\n", n, n *  5);
    // printf("%d x  6 = %d\n", n, n *  6);
    // printf("%d x  7 = %d\n", n, n *  7);
    // printf("%d x  8 = %d\n", n, n *  8);
    // printf("%d x  9 = %d\n", n, n *  9);
    // printf("%d x 10 = %d\n", n, n * 10);
    for (int i = 0; i < 11; i++)
    {
        printf("%d x  %d = %d\n", n, i, n *  i);
    }
    

    return 0;
}