#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r], i = l - 1, j = l;
    while (j < r)
    {
        if (arr[j] < pivot)
            swap(arr, ++i, j);
        j++;
    }

    swap(arr, i + 1, r);
    return i + 1;
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
}

int main()
{
    int n;
    printf("enter the n\n");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));

    printf("enter the element\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}