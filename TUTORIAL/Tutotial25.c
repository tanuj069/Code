// fib_recursive(int n):
// if n==1 or n==2:
// return n

// else:
// return fib_recursive(n-1) + fib_recursive(n-2)

// By for loop it take ---  0.062 second and the code is ----

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf(" 0\n 1\n ");
    a = 0;
    b = 1;
    for (int i = 1; i <= 42; i++)
    {

        c = a + b;
        a = b;
        b = c;
        printf("%d\n ", c);
    }
    return 0;
}

// // By Recursive function it take --- 13.952 s and the code is ------
// #include <stdio.h>
// #include <stdlib.h>
// int fibo(int n);
// int main()
// {
//     printf("0 ");

//     for (int i = 1; i <= 42; i++)
//     {
//         printf("%d ", fibo(i));
//     }
//     return 0;
// }
// int fibo(int n)
// {
//     int res;
//     if (n == 1 || n == 0)
//         return n;
//     else
//         res = (fibo(n - 1) + fibo(n - 2));

//     return res;
// }
