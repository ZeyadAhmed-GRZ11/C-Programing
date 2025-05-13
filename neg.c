#include <stdio.h>

int main() {

    int arr[100], n, i;
    int NegativeCount = 0;

    printf("Enter number of elements in array:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element-[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i = 0; i < n; i++){
       if(arr[i] < 0){
         NegativeCount++;
       }
    //    else if(NegativeCount == 0){
    //      printf("all elements are positive");
    //    }
    }


printf("\n");
printf("Negative Counts = %d\n", NegativeCount);



}