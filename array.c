#include <stdio.h>

int main() {
  
    int array[10],i,n;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter %d elements in array:\n",n);
    for(i = 0; i<n; i++){
        printf("Enter element - %d:\n",i);
        scanf("%d",&array[i]);
    } // this loop for number of elements in array
    printf("numbers in array are:\n");
    for(i=0; i<n; i++){
        printf("Elements in array are:%d\n",array[i]);
    }
  
}