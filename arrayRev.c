#include <stdio.h>

int main() {

    int arr[100],i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0; i<n;i++){
        printf("elements - %d:", i);
        scanf("%d",&arr[i]);
    }
    printf("Elements stored in array are:");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("in reverse are:");
    for(i = n-1; i>=0; i--){
        printf("%d ",arr[i]);
    } // this loop to reverse the array from last to first element by (i=n-1; i>=0; i--)

}
