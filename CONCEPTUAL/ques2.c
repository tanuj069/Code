#include <stdio.h>
int main()
{
    int x = 1;

    switch (x)
    {
    default:
        printf("hello\n");
    case 1:
        printf("hi\n");
        break;
    }

    return 0;
}