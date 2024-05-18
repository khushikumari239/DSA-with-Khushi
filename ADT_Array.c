#include <stdio.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *a, int tsize, int usize)
{
    (*a).total_size = tsize;
    (*a).used_size = usize;
    .
        // syntax of reserving memory in heap is :- ptr(*int)malloc(n*sizeof(int)); (where n is total size)
        int *ptr = (int *)malloc(tsize * sizeof(int));
}

int main()
{
    struct myArray marks;
    createArray(&marks, 100, 30);
    return 0;
}