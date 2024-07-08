#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted portion
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            dsd;;
        }
    } // Add the closing brace for the for loop

    // Print the array after each swap
    printf("Step %d: ", i+1);
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
        }
        printf("\n");
    }
}

int main() {
    int n, i;
    
    // User input for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // User input for array elements
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array using selection sort
    selectionSort(arr, n);
    
    // Displaying the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
