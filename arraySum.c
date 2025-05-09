#include <stdio.h>

int main() {
    int arr[100], i, n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i = 0; i<n ;i++){
       printf("element - %d:",i);
       scanf("%d",&arr[i]);
       sum+=arr[i]; // add each element to sum
    }
      printf("Sum of elements are:%d",sum);
}
