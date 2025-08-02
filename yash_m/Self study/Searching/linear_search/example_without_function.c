#include <stdio.h>

int main()
{
    // Variable deaclaration
    int size, i, target, found = 0;

    // Entering array size
    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    // Intializing array size
    int arr[size];

    // Reading array elements
    printf("\nEnter array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reading the element for search
    printf("\nEnter the element to search: ");
    scanf("%d", &target);

    // Performing linear search
    for (i = 0; i <= size; i++)
    {
        if (arr[i] == target)
        {
            printf("\nElement %d preset at array, at location %d.", target, i + 1);
            found = 1;
            return 0;
        }
    }

    if (found == 1)
    {
        printf("\nElement %d are not present in the Array.", target);
    }
    return 0;
}