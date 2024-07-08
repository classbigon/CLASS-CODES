#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for each row, printing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

