#include <stdio.h>

int main() {

     int r , c, i, j;
     int matrix1[r][c], matrix2[r][c], sum[r][c];

     printf("Enter number of rows and cols in matrix1: ");
     scanf("%d %d", &r, &c);
     for(i=0; i<r; i++){
       for(j=0; j<c; j++){
        printf("Element-[%d][%d] of matrix1: ", i, j);
        scanf("%d", &matrix1[i][j]);
       }
     }
     printf("Enter number of rows and cols in matrix2: ");
     scanf("%d %d", &r, &c);
     for(i=0; i<r; i++){
       for(j=0; j<c; j++){
        printf("Element-[%d][%d] of matrix2: ", i, j);
        scanf("%d", &matrix2[i][j]);
       }
     }
     for(i=0; i<r; i++){
       for(j=0; j<c; j++){
         sum[i][j] = matrix1[i][j] + matrix2[i][j];
       }
     }
      printf("\n");
     for(i=0; i<r; i++){
       for(j=0; j<c; j++){
         printf("%d ", sum[i][j]);
       }
        printf("\n");
     }
     





}