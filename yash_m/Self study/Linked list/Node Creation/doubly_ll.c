#include <stdio.h>
#include <stdlib.h>

// Creating a doubly node by using structure
struct node
{
    int data;

    // Declaring privious and next pointers
    struct node *prev;
    struct node *next;
};

// Declaring head pointer as a globle pointer
struct node *head = NULL;

int main()
{
    // Declaring node pointers
    struct node *first, *second, *third, *fourth, *fifth;

    // Alloting memory to the node pointers
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    // Storing data in nodes
    first->data = 100;
    second->data = 200;
    third->data = 300;
    fourth->data = 400;
    fifth->data = 500;

    // Set HEAD to point to first node
    head = first;

    // Connecting pointers to go forward in the list
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    // Connecting pointer to go backward in the list
    first->prev = NULL;
    second->prev = first;
    third->prev = second;
    fourth->prev = third;
    fifth->prev = fourth;

    // Printing data stored in nodes in forward direction
    printf("Forward Traversal in list:\n");
    printf("Linked list: ");

    struct node *current = head;
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current->next;
    }

    // Printing the NULL element
    printf("NULL\n");

    // Printing data stored in nodes in backward direction
    printf("\nBackward Traversal in list:\n");
    printf("Linked list: ");

    current = head;

    // First go to the last node
    while(current -> next != NULL)
    {
        current = current -> next;
    }

    // Now Traversal backwards
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current -> prev;
    }

    // Printing the head
    printf("HEAD\n");

    // Deleting the created nodes
    free(first);
    free(second);
    free(third);
    free(fourth);
    free(fifth);

    return 0;
}