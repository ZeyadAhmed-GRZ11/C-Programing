#include <stdio.h>

int main() {

    int arr1[100], arr2[100], merge[200], i, j, n1, n2;

    printf("enter number of elements in first array:\n");
    scanf("%d", &n1);
    for(i=0; i<n1; i++){
        printf("Element-[%d]\n", i);
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter number of elements in Second array:\n");
    scanf("%d", &n2);
    for(i=0; i<n2; i++){
        printf("Element-[%d]\n", i);
        scanf("%d", &arr2[i]); ///////// BE CAREFUL HERE
    }

    for(i=0; i<n1; i++){
        merge[i] = arr1[i];
    }
    for(j=0; j<n2; j++){
        merge[i + j] = arr2[j];
    }

    printf("Merged array:\n");

    for(i=0; i< n1+n2; i++){
         printf("%d ", merge[i]);
    }
     printf("\n");

         // طباعة المصفوفة بشكل معكوس
    printf("Reversed array:\n");
    for (i = n1+n2 - 1; i >= 0; i--) {
        printf("%d ", merge[i]);
    }
    printf("\n");


}