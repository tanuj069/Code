#include <stdio.h>
int main()
{

    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1);

    int arr[] = {1,2,3,4,5,6,7,};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);
    // arr--; this line will show an error
    arrayptr--;

    printf("The value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", arr[0]);
    printf("The value at address of the first element of the array is %d\n", *(arr));
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of the second element of the array is %d\n", arr[1]);
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));

    return 0;
}