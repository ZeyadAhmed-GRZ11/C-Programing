#include <stdio.h>

int main() {
   
     int search,found = 0;
     int rows,cols;
     printf("Enter the number of rows and cols:\n");
     scanf("%d %d",&rows,&cols);

     int arr[rows][cols];
     printf("Enter Elements in Matrix:\n");

     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Element - [%d][%d]:", i,j);
            scanf("%d",&arr[i][j]);
        }
     }
     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
     
     printf("Enter the element to search:\n");
     scanf("%d",&search);

      for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == search){
               found = 1;
               break;
            }
        }
     }

     if(found == 1){
        printf("Found");
     }
     else{
        printf("Not Found");
     }


     
}
