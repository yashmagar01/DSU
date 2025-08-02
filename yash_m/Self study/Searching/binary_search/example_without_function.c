#include <stdio.h>

int main()
{
    // Variabl Declaration
    int start, end, mid, target, size = 0, found = 0, i;

    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    // Array size declaration
    int arr[size];

    // Value Initialization
    start = 0;
    end = size - 1;

    // Reading array elemnts
    printf("\nEnter Array elments(in sorted way): ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reading the element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &target);

    // Performing binary search
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            printf("\nElement %d is present at Array, at position %d", target, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (!found)
    {
        printf("\nThe entered element is not present in the list.");
    }

    return 0;
}