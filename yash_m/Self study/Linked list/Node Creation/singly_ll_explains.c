#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    // Step 1: Declare pointers (these are just variables to store addresses)
    struct node *first, *second, *third;

    // Step 2: Allocate memory for each node
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Step 3: Check if allocation succeeded
    if (first == NULL || second == NULL || third == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    // Step 4: Initialize the data
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Step 5: Connect the nodes (build the chain)
    first->next = second; // first points to second's address
    second->next = third; // second points to third's address
    third->next = NULL;   // third points nowhere (end of list)

    // Step 6: Use the linked list
    printf("Linked List: ");
    struct node *current = first;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Step 7: Free the memory (return the rooms!)
    free(first);
    free(second);
    free(third);

    return 0;
}
