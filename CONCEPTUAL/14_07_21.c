// #include "stdio.h"

// int main()
// {
//     char arr[100];
//     printf("%d", scanf("%s", arr));

//     return 1;
// }

// #include <stdio.h>
// int main()
// {
//     printf(" "Satya %% Prakash %% Yadav" ");
//     getchar();
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int fun(char *str1)
{
    char *str2 = str1;
    while(*++str1);
    printf("str2 %c\n", str2);
    return (str1-str2);
}

int main()
{
    char *str = "Satyaprakash";
    printf("%d",fun(str));
    return 0;
}