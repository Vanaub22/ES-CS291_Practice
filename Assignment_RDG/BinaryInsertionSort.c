#include <stdio.h>
int binarySearch(int *arr, int item, int left, int right)
{
    int mid;
    if (right <= left)
        return (item > arr[left]) ? (left + 1) : left;
    mid = (left + right) / 2;
    if (item == arr[mid])
        return mid + 1;
    if (item > arr[mid])
        return binarySearch(arr, item, mid + 1, right);
    else
        return binarySearch(arr, item, left, mid - 1);
}
void BinaryInsertionSort(int arr[],int n)
{
    int i, loc, j, key, selected;
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        key = arr[i];
        loc = binarySearch(arr, key, 0, j);
        while (j >= loc)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        arr[loc] = key;
    }
}
int main()
{
    int arr[] = {12, 56, 1, 67, 45, 8, 82, 16, 63, 23};
    int n, i;
    n = sizeof(arr) / sizeof(arr[0]);
    BinaryInsertionSort(arr, n);
    printf("Sorted array is : \n");
    for (i = 0; i < n; i++)
        printf("\t %d", arr[i]);
    return 0;
}