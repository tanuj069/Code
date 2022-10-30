#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the a and b");
scanf("%i%i",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%i%i",a,b);
getch();
}