#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    printf("Enter the string\n");
    scanf("%s", a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome\n");
    }

    return 0;
}