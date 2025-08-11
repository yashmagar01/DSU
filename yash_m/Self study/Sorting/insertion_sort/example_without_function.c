#include<stdio.h>
#include<conio.h>

void main() {
    int a[10], i, j, n, temp;
    
    clrscr();
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Insertion Sort Algorithm
    for(i = 1; i < n; i++) {
        temp = a[i];  // Store current element
        
        // Shift elements that are greater than temp to right
        for(j = i-1; j >= 0 && a[j] > temp; j--) {
            a[j+1] = a[j];
        }
        
        a[j+1] = temp;  // Insert temp at correct position
    }
    
    printf("Sorted Array Elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    getch();
}
