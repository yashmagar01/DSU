#include <stdio.h>

int main() {
    int i, j, size, key;

    // Reading size of array
    printf("\nEnter the array size: ");
    scanf("%d", &size);

    int arr[size];

    // Reading array elements
    printf("\nEnter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display entered array
    printf("\nEntered array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Performing Insertion Sort
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Display sorted array
    printf("\nSorted array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
