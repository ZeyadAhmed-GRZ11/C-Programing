#include <stdio.h>

int main() {

     int arr[100],i,n,search,found = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);

    for(i=0; i<n;i++){
        printf("elements - %d:", i);
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&search);
    for(i=0; i<n; i++){
        if(arr[i] == search){
           found = 1;
           break;
        }
    }
    if(found){
        printf("%d is found in array.\n",search);
    }
    else{
        printf("%d is not found in array.\n",search);
    }

}
