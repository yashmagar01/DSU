#include <stdio.h>

int main()
{
    // Creating required variables
    int i, j, size, temp;
    int arr[100];

    // Rading array size;
    printf("\nEnter array size: ");
    scanf("%d", &size);

    // Reading array element
    printf("\nEnter array Elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Entered array element without sorting
    printf("\nEntered Array Elements Without sorting: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Performing Bubble sort
    for (i = 0; i < size; i++)
    {
        for (j = 0; i < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Displying sorted array elements 
    printf("\nSorted Elements by using Buuble Sort: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
