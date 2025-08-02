#include <stdio.h>
#include <stdlib.h>

// Creating singly linked list using structure
struct node
{
    int data;          // The data at this specific node
    struct node *next; // Next named node creation
};

int main()
{
    // Creating three nodes
    struct node *one, *two, *three;

    // Alloting memory for nodes
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    // Data initialize
    one->data = 100;
    two->data = 200;
    three->data = 300;

    // Node connections
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Using the linked list
    printf("-------Printing the linked list:-------\n");
    printf("Linked List: ");

    struct node *current = one;

    while (current != NULL)
    {
        printf("%d -> ", current->data);

        current = current->next; // Increamenting the current pointer to next node
    }

    // Printing null element
    printf("NULL\n");
    
    // Deleting the space
    free(one);
    free(two);
    free(three);

    return 0;
}