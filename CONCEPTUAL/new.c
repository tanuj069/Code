// //       1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - ..................

// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main()
// {
//     long int i, j, n, sum = 0;
//     printf("Enter the n\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i = i++)
//     {
//         j = i * pow(-1, i);
//         sum = sum + j;
//         // j++;
//     }

//     printf("%d\n", sum);
//     return 0;
// }

//       1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - ..................

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i = 1, j = 0, p, n, sum = 0;
    printf("Enter the n\n");
    scanf("%d", &n);
    printf("Complete n\n");

    // while (i <= n)
    // {
    //     j = pow(-1, i);
    //     p = j*i;
    //     sum = sum + p;
    //     i++;
    // }

    for (i = 1; i <= n; i++)
    {
        j = pow(-1, i);
        p = j * i;
        sum = sum + p;
    }

    printf("last n\n");
    printf("%d\n", sum);
    return 0;
}
