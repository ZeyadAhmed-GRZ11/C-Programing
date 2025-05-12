#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input matrix size
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // Declare matrix

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Swap diagonals
    for (i = 0; i < n; i++) {
        int temp = matrix[i][i]; 
        matrix[i][i] = matrix[i][n - i - 1]; 
        matrix[i][n - i - 1] = temp;
    }

    // Print modified matrix
    printf("Matrix after swapping diagonals:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
