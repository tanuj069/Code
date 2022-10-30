#include<stdio.h>
void main()
{
    long long int n,rem,k,sum=0;
    printf("enter the n ");
    scanf("%lli",&n);
    k=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(k==sum)
    {
        printf("number is palindrome ");
    }
    else
    {
        printf("not palindrome");
    }
}