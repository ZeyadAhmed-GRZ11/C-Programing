#include <stdio.h>

int main() {
   
    int arr[100],i,n,j,count = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);

    for(i=0; i<n;i++){
        printf("elements - %d:", i);
        scanf("%d",&arr[i]);
    }
    for(i= 0; i<n; i++){
        for(j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                 count++;
                 break;
        }
      }
    }
    printf("The number of duplicate elements in the array is: %d",count);
}
