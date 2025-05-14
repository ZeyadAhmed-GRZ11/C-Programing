#include <stdio.h>

int main() {
    int r, c, i, j;

    // Get the number of rows and columns first
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    // Declare matrix AFTER getting r and c
    int matrix[r][c];
    int rowsum, colsum;

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Sum of each row
    printf("\nSum of each row:\n");
    for (i = 0; i < r; i++) {
        rowsum = 0;
        for (j = 0; j < c; j++) {
            rowsum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i, rowsum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for (j = 0; j < c; j++) {
        colsum = 0;
        for (i = 0; i < r; i++) {
            colsum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j, colsum);
    }

    return 0;
}
