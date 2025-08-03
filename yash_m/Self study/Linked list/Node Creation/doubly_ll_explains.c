#include <stdio.h>
#include <stdlib.h>

// Structure definition for doubly linked list node
struct node
{
    int data;
    struct node *prev; // Previous node pointer
    struct node *next; // Next node pointer
};

// Global head pointer - points to first node
struct node *head = NULL;

// Function to create a new node with data
struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("❌ Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to display list forward
void displayForward()
{
    printf("\n📍 Forward Traversal (HEAD → TAIL):\n");
    printf("Path: ");

    struct node *current = head;
    while (current != NULL)
    {
        printf("[%d]", current->data);
        if (current->next != NULL)
        {
            printf(" <-> ");
        }
        current = current->next;
    }
    printf(" -> NULL\n");
}

// Function to display list backward
void displayBackward()
{
    printf("\n📍 Backward Traversal (TAIL → HEAD):\n");
    printf("Path: NULL <- ");

    if (head == NULL)
    {
        printf("Empty list!\n");
        return;
    }

    // Find last node
    struct node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Traverse backward
    while (current != NULL)
    {
        printf("[%d]", current->data);
        if (current->prev != NULL)
        {
            printf(" <-> ");
        }
        current = current->prev;
    }
    printf(" <- HEAD\n");
}

int main()
{
    printf("🔗 DOUBLY LINKED LIST CREATION DEMO\n");
    printf("=====================================\n");

    // Create 5 nodes
    struct node *first = createNode(100);
    struct node *second = createNode(200);
    struct node *third = createNode(300);
    struct node *fourth = createNode(400);
    struct node *fifth = createNode(500);

    // Set head pointer
    head = first;

    // Forward connections
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next is already NULL from createNode()

    // Backward connections
    // first->prev is already NULL from createNode()
    second->prev = first;
    third->prev = second;
    fourth->prev = third;
    fifth->prev = fourth;

    printf("✅ Successfully created doubly linked list with 5 nodes!\n");

    // Display both ways
    displayForward();
    displayBackward();

    // Cleanup memory
    printf("\n🧹 Cleaning up memory...\n");
    free(first);
    first = NULL;
    free(second);
    second = NULL;
    free(third);
    third = NULL;
    free(fourth);
    fourth = NULL;
    free(fifth);
    fifth = NULL;
    head = NULL;

    printf("✅ Memory cleaned successfully!\n");

    return 0;
}
