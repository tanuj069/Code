#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
end:
    printf("Enter the size of array n\n");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
        scanf("%d", arr + i);

    for (i = num - 1; i >= 0; i--)
        printf("%d ", *(arr + i));
    printf("\n");
    goto end;
    return 0;
}