#include <stdio.h>
#include <stdlib.h>
/*
void merge(int arr[], int l, int mid, int r)
{
    int m = mid - l + 1, n = r - mid;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < n; i++)
        b[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }
    for (; i < m; i++)
        arr[k++] = a[i];
    for (; i < n; i++)
        arr[k++] = b[i];
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
*/

void merge(int arr[], int l, int mid, int r)
{
    int m = mid - l + 1, n = r - mid;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < n; i++)
        b[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < m && j < n)
    {
        if (a[i] > b[j])
            arr[k++] = b[j++];
        else
            arr[k++] = a[i++];
    }
    while (i < m)
        arr[k++] = a[i++];
    while (j < n)
        arr[k++] = b[j++];
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}