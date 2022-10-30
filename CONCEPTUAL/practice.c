// #include<stdio.h>
// int tanuj(int n);
// void main()
// {
//     int n, sum=0, k;
//     printf("enter the n");
//     scanf("%d",&n);
//     k=n;
//     sum=tanuj(n);
//     if (sum==k)
//     {
//         printf("armstrong no");
//     }
//     else{
//         printf("not armstrong");
//     }
// }
// int tanuj(int n)
// {
//     int sum=0,rem;
//     while (n>0)
//     {
//         rem=n%10;
//         sum=sum+rem*rem*rem;
//         n=n/10;
//     }
//     return sum;
// }
































#include <stdio.h>                                                       
int main()                                                                                                              
{
    for (int i = 1; i <= 5; i++)
    {                                                       //print upper part
        for (int k = 1; k <= 5 - i; k++)                                                       
        {                                                                                                              
            printf(" ");                                                       
        }                                                                                                              
        for (int j = 1; j <= i; j++)                                                       
        {                                                                                                              
            printf("%d", i);                                //print star to upper part
            printf(" ");                                                       
        }                                                                                                              
        printf("\n");
    }
    return 0;
}