#include<stdio.h>
void main()
{
    int i;
    clrscr();
    printf("enter the value of");
    scanf("%d",&i);
    if(i>5000)
    {
        if(i>10000)
        {
          printf("shubham can go with her gf neha on road trip and sing a song for her");
        }
       else
       {
           printf("shubham make a shopping with neha");
       }
    }
    else if(i>2000)
    {
        printf("shubham can go with rashmi");
    }
    else    
    {
        printf("shubham have to go with his friends");
    }
    getch();
}