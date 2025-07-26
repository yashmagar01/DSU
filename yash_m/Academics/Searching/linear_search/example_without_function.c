#include <stdio.h>

int main(){
    //Variable deaclaration
    int size, i, target;

    //Entering array size
    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    //Intializing array size
    int arr[size];

    //Reading array elements
    printf("\nEnter array elements: ");
    for(i = 0; i < size; i++){
    scanf("%d",&arr[i]);
    }

    //Reading the element for search
    printf("\nEnter the element to search: ");
    scanf("%d",&target);

    //Performing linear search
    for(i = 0; i < size; i++){
        if(arr[i] == target){
            printf("\nElement %d preset at array, at location %d", target, i + 1);
            break;
        }
        else{
            printf("\nElement %d are not present int the Array.", target);
            break;
        }
    }

    return 0;
}