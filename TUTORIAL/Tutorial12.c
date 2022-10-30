#include <stdio.h>

int main()
{
    int i, count = 1;
    printf("Enter a number\n");
    scanf("%d", &i);

while (count <= i)    
    {
        printf("%dHello World\n", count);

        count = count + 1;
        
    } 

    return 0;
}