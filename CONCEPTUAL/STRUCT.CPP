#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the a and b");
scanf("%i%i",&a,&b);
c=a;
a=b;
b=c;
printf("%i%i",a,b);
getch();
}