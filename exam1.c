#include <stdio.h>

int main() {
  
    int i,j,n;
    int temp, avg_all, avg_small, sum = 0;

    printf("Enter number of Elements in array:");
    scanf("%d",&n);

    int arr[n+1];

    for(i=0; i<n; i++){
        printf("index-[%d]:",i);
        scanf("%d ",&arr[i]);
        sum += arr[i];
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    for(i=0; i<n-1; i++){
       for(j=0; j<n-1; j++){
         if(arr[j] < arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }// by method bubble sort
      }
    }
    int smallest = arr[n-1];     
    int second_smallest = arr[n-2];
    
    avg_all = sum / n;
    avg_small = (smallest + second_smallest) / 2;

    arr[n] = avg_all;

    printf("Sorted array as descending\n ");
    for(i=0;i<=n;i++){
        printf("%d ", arr[i]);   
    }

     printf("\nSmallest number: %d", smallest);
    printf("\nSecond smallest number: %d", second_smallest);
    printf("\nAverage of smallest and second smallest: %d", avg_small);
    printf("\nAverage of all numbers: %d\n", avg_all);



}