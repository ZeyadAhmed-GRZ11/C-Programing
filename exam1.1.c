#include <stdio.h>

int main() {
    int rows, cols, i, j, k, l;
    int temp, sum = 0;
    float avg_all, avg_small;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Step 1: Input array
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    // Step 2: Print original array
    printf("\nOriginal 2D Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Step 3: Flatten 2D array into 1D array for easier sorting
    int size = rows * cols;
    int flat[size];
    int index = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            flat[index++] = arr[i][j];
        }
    }

    // Step 4: Sort 1D array in descending order using Bubble Sort
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (flat[j] < flat[j + 1]) {
                temp = flat[j];
                flat[j] = flat[j + 1];
                flat[j + 1] = temp;
            }
        }
    }

    // Step 5: Calculate smallest, second smallest, averages
    int smallest = flat[size - 1];
    int second_smallest = flat[size - 2];

    avg_all = (float)sum / size;
    avg_small = (smallest + second_smallest) / 2.0;

    // Step 6: Print sorted 1D array
    printf("\nFlattened and sorted array (descending):\n");
    for (i = 0; i < size; i++) {
        printf("%d ", flat[i]);
    }

    // Step 7: Print results
    printf("\nSmallest number: %d", smallest);
    printf("\nSecond smallest number: %d", second_smallest);
    printf("\nAverage of smallest and second smallest: %.2f", avg_small);
    printf("\nAverage of all numbers: %.2f\n", avg_all);

    return 0;
}
