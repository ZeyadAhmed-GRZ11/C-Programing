#include <stdio.h>

int main() {
    int arr1[100],arr2[100],i,n;

    printf("Enter number of elements in array:");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("element - %d:",i);
        scanf("%d",&arr1[i]);  
        arr2[i] = arr1[i]; 
    }
    printf("stored in first array are:\n");
    for(i=0; i<n; i++){
        printf("%d\n",arr1[i]);
    }
     printf("stored in second array after Copy:\n");
    for(i=0; i<n; i++){
        printf("%d\n",arr2[i]);
    }


}
