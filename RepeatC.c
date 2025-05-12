#include <stdio.h>

int main() {
   
    int arr[100],i,j,n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Element - [%d]:", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    printf("\n");

    for(i = 0; i<n; i++){
        for(j = i+1; j<n;j++){
            if(arr[i] == arr[j]){
             count++;
             break;

        }
    }
}

printf("total number of duplicate elements are: %d", count);

}