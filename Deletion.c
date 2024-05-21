#include <stdio.h>

void display_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)

    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {5, 7, 8, 10, 67};
    int size = 5, index = 3;
    display_Array(arr, size);
    // int capacity=100;
    // int element =12; no need of element here

    indDeletion(arr, size, index);
    size -= 1;
    display_Array(arr, size);
    // size decereaces

    return 0;
}