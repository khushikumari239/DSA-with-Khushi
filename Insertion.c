// #include <stdio.h>

// Insertion operation in Array .... visiting every element of ARRAY ....👻

// Here comes the modified code to say that the insertion is successful or NOT .... If successful then Display the Array🚀

#include <stdio.h>

// Function to display the array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specific index in the array
int indinsertion(int size, int element, int index, int arr[], int capacity)
{
    if (size >= capacity)
    {
        return -1; // Indicate failure if array is already at capacity
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[index] = element; // Insert the element
    return 1; // Indicate success
}

int main()
{
    int arr[100] = {2, 4, 7, 56}; // Initial array
    int size = 4, index = 2, element = 30;

    printf("Original array: ");
    display(arr, size);

    // Call the insertion function and store the return value
    int result = indinsertion(size, element, index, arr, 100);

    // Check if the insertion was successful
    if (result == 1)
    {
        size += 1; // Increment size if insertion was successful
        printf("Insertion successful. New array: ");
        display(arr, size); // Display the array
    }
    else
    {
        printf("Insertion failed. Array is at full capacity.\n");
    }

    return 0;
}


// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int indinsertion(int size, int element, int index, int arr[], int capacity)

// // code for Insertion 🤓
// {
//     if (size >= capacity)
//     {
//         return -1;
//     }

//     for (int i = size - 1; i >= index; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
// }

// int main()
// {
//     int arr[100] = {2, 4, 7, 56};
//     int size = 4, index = 2, element = 30;

//     display(arr, size);
//     // int capacity = 100;

//     indinsertion(size, element, index, arr, 100);
//     size += 1;
//     display(arr, size);

//     return 0;
// }