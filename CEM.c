#include <stdio.h>

int main() {

    int i, j, r, c;
    int matrix1[r][c], matrix2[r][c];
    int equal = 1;

    printf("Enter the number of rows and cols in matrix1: ");
    scanf("%d %d", &r, &c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Element-[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }
    printf("*************Matrix2***************");
    printf("\n");
    printf("Enter the number of rows and cols in matrix:2 ");
    scanf("%d %d", &r, &c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Element-[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
          if(matrix1[i][j]!=matrix2[i][j]){
              equal=0;
              break;
          }
        }
    }

    if(equal)
    {
        printf("Both matrices are equal.\n");    
    }
    else{
        printf("Both matrices are not equal.\n");    
    }





}