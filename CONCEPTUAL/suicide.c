#include <stdio.h>
int main()
{
    int a = 0, i = 1;

    for (; a <= 900; a++)
    {
        printf("%d %d %d\n", i++, i++, i++);
    }

    return 0;
}