
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int Max, SecondMax, Min;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Element - [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Initialize Max, SecondMax, and Min properly
    if (n >= 2) {
        if (arr[0] > arr[1]) {
            Max = arr[0];
            SecondMax = arr[1];
        } else {
            Max = arr[1];
            SecondMax = arr[0];
        }
        Min = (arr[0] < arr[1]) ? arr[0] : arr[1];

    for (i = 2; i < n; i++) {
        if (arr[i] > Max) {
            SecondMax = Max;
            Max = arr[i];
        } else if (arr[i] > SecondMax && arr[i] != Max) {
            SecondMax = arr[i];
        }

        if (arr[i] < Min) {
            Min = arr[i];
        }
    }

    printf("Max is: %d\n", Max);
    printf("Second Max is: %d\n", SecondMax);
    printf("Min is: %d\n", Min);

    return 0;
}

}





  





