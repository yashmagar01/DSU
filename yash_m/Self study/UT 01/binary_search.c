#include <stdio.h>

int main()
{
    // Creating required variables
    int start = 0, mid, end, search, size, i, found = 0;
    int arr[100];

    // Reading the size of list
    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    // Reading array elements
    printf("\nEnter array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reading search element
    printf("\nEnter the search element: ");
    scanf("%d", &search);

    // Initialising variables
    start = 0;
    end = size - 1;

    // Performing binary search
    while (start <= end)
    {
        // Applying mid's formula
        mid = (start + end) / 2;

        if (arr[mid] == search)
        {
            printf("\n%d Element is present in array, at position %d.", search, mid + 1);
            found = 1;
            break; // Remove break statement, if to find out multiple occurances in a array
        }

        else if (arr[mid] < search)
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
    }

    if(!found)
    {
        printf("\n%d Element is not found in the array.", search);
    }

    return 0;
}