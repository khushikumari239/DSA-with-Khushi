// Linked list data structure Creation and traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element in : %d \n", ptr->data);
        ptr = ptr->next; //updation of ptr every time 
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocate the memory for nodes in the linkded list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first node to second node
    head->data = 7;
    head->next = second;

    // linking second node to third
    second->data = 8;
    second->next = third;

    // Termonate the list at the third node by doing it NULL
    third->data = 11;
    third->next = NULL;
 linkedlistTraversal(head); //calling the function
    return 0;
}