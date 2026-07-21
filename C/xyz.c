#include <stdio.h>

// Function to swap two integer values
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort function to sort the array in ascending order
void bubbleSort(int arr[], int n) {
    int i, j;
    
    // Outer loop for the number of passes
    for (i = 0; i < n - 1; i++) {
        
        // Inner loop for comparisons and swaps
        // The last 'i' elements are already in their correct sorted place
        for (j = 0; j < n - i - 1; j++) {
            
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    
    // 1. Read the size of the array
    scanf("%d", &n);
    
    // Declare an array of size 'n' (Variable Length Array)
    // Note: If 'n' can be very large, you might declare a fixed-size
    // array like int arr[1000]; if 'n' is guaranteed to be less than 1000.
    int arr[n];
    
    // 2. Read 'n' space-separated integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 3. Call the bubble sort function to sort the array
    bubbleSort(arr, n);
    
    // 4. Print the sorted elements, separated by a space
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        
        // Print a space, but only if it's NOT the last element
        if (i < n - 1) {
            printf(" ");
        }
    }
    
    // Print a newline at the very end for clean output
    printf("\n");
    
    return 0;
}