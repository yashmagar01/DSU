#include <stdio.h>

int main()
{
    // Declaring equired variables
    int size, i, search, found = 0;
    int arr[100];

    // Reading array size
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    // Reading array elements
    printf("\nEnter array elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reading search elements
    printf("\nEnter the search element: ");
    scanf("%d", &search);

    // Performing linear search
    for(i = 0; i < size; i++)
    {
        if(arr[i] == search)
        {
            printf("\n%d Element is present in the array, at position %d.", search, i + 1);
            found = 1;
            return 0;
        }
    }

    if(!found)
    {
        printf("\n%d Element is not found in the array.", search);
    }
    return 0;
}