#include <stdio.h>

// Traversal operation in Array .... visiting every element of ARRAY ....👻

void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int main()
{
    int arr[100] = {2, 4, 7, 56};
    display_array(arr, 4);

    return 0;
}