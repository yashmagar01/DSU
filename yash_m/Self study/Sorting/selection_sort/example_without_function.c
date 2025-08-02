#include <stdio.h>

int main(){
    int i, j, temp, size;

    //Read the size of array
    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    //Reading array elements
    printf("\nEnter the elements of array:\n");
    for(i = 0; i < size; i++){
        printf("Enter element no. %d: ", i + 1);
        scanf("%d",&arr[i]);
    }

    //Printing the entered array
    printf("\nEntered array elements: ");
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }

    //Performing selection sort
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Printing the sorted array
    printf("\nSorted array: ");
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}