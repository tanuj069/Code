#include<stdio.h>
int tanuj(int n);
void main()
{
    int n, sum=0, k;
    printf("enter the n");
    scanf("%d,&n");
    k=n;
    sum=tanuj(n);
    if (sum==k)
    {
        printf("armstrong no");
    }
    else{
        printf("not armstrong");
    }
}
int tanuj(int n)
{
    int sum=0,rem;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    return sum;
}