#include<stdio.h>

int main(){
    int i, j, size, temp;

    //Reading the size of array
    printf("\nEnter the array size: ");
    scanf("%d",&size);

    int arr[size];

    //Reading the array elements
    printf("\nEnter array elements:\n");
    for(i = 0; i < size; i++){
        printf("Enter element no. %d: ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("\nEntered array elements: ");
    //Showing the enterd array 
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    
    //Performing Bubble sorting on array
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array elements: ");
    //Printing the sorted array
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
