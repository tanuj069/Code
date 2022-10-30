#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,f,g,h;
float p;
clrscr();
printf("..");
scanf("%i%i%i%i%i%i",&a,&b,&c,&f,&g,&h);
p=a+b+c*f-g/h;
printf("%f",p);
getch();
}