#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct str
{
    int a;
    float b;
    char c;
}s;

int main()
{
    int n;
    
    printf("Enter the n\n");
    scanf("%d",&n);
    s arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer\n");
        scanf("%d", &arr[i].a);

        printf("Enter float\n");
        scanf("%f", &arr[i].b);
        
        printf("Enter character\n");
        scanf("%c", &arr[i].c);
    }
 
    for (int i = 0; i < n; i++)
    {
        printf("%f", arr[i].b);
        printf("%d", arr[i].a);
        printf("%c", arr[i].c);
    }
    
    return 0;
}
