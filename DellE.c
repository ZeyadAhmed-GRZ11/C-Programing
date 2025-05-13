#include <stdio.h>

int main() {
    
    int arr[100], i, n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Element-[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position to Delete between(0):(%d): ", n-1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){
        printf("Invalid position\n");
    }
    else{
        for(i = pos; i < n-1; i++){
            arr[i] = arr[i+1];
        } // shift elements to the left and delete 
        n--;//for reducing the size of array

        printf("After deleting the elements is: ");
        for(i = 0; i<n; i++){
            printf("%d ", arr[i]);
        }
         printf("\n");
    }



}
