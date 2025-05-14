#include <stdio.h>

int main() {
    int size, i, j, sum = 0;

    // Input size of the square matrix
    printf("Enter the size of the square matrix (e.g. 3 for 3x3): ");
    scanf("%d", &size);

    int matrix[size][size];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate sum of main diagonal elements
    for (i = 0; i < size; i++) {
        sum += matrix[i][i];  // Main diagonal elements have i == j
    }

    // Output the result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
