#include <stdio.h>
#include <stdlib.h>

// Creating a singly node by using structure
struct node
{
    int data;

    struct node *next;
};

struct node *head = NULL;

int main()
{
    // Declaring pointers
    struct node *first, *second, *third;
    struct node *newnode; // Declaring new node

    // Alloting memory to each node
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    newnode = (struct node *)malloc(sizeof(struct node));

    // Storing data at each node
    first->data = 100;
    second->data = 200;
    third->data = 300;

    // Connecting each node in forward direction
    head = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Showing the data stored in the nodes
    printf("--------------Stored Data in the Nodes:--------------\n");
    printf("Linked List: Head -> ");

    struct node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Reading the element to insert at beginning
    printf("Enter the element you want to insert at beginning: ");
    scanf("%d", &newnode->data);

    newnode->next = head; // Point to old list
    head = newnode;       // Update the head

    // Printing the updated list
    // But first, shift the current pointer to head
    current = head;

    printf("\n----------------Updated list:----------------\n");
    printf("Linked list: Head -> ");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free up memeory space
    free(first);
    free(second);
    free(third);
    free(newnode);

    return 0;
}