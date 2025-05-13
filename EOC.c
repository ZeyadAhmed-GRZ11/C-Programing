#include <stdio.h>

int main() {

    int arr[100], n, i;
    int EvenCount = 0, OddCount = 0;

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

    for(i = 0; i < n; i++){
       if(arr[i] % 2 == 0){
         EvenCount++;
       }
       else{
        OddCount++;
       }
    }

printf("\n");
printf("Even Counts = %d\n", EvenCount);
printf("Odd Counts = %d\n", OddCount);


}





