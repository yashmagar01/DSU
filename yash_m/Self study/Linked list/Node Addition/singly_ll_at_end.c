#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;

    struct node *next;
};

struct node *head = NULL;

int main()
{ // Creating node pointers
    struct node *first, *second, *third;
    struct node *newnode;

    // Alloting memory to each node pointer
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    newnode = (struct node *)malloc(sizeof(struct node));

    // Connecting each node in forward direction
    head = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Putting values in each node
    first->data = 100;
    second->data = 200;
    third->data = 300;

    // Connecting with last element and putting data into newnode
    newnode -> next = NULL;
    newnode->data = 500;

    struct node *current = head;

    // Displaying stored data in nodes
    printf("-----------------Stored Data in Nodes:-----------------\n");
    printf("Linked List: Head -> ");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Reading the inserting element
    printf("Enter the element you want to insert:\n");
    scanf("%d", &newnode->data);

    // Updating last nodes path
    while (current != NULL)
    {
    }
    return 0;
}