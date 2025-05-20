#include <stdio.h>

int main() {
    int r, c, i, j;
    int large, small, multi;
    int found = 0; // مؤشر إذا تم العثور على الضرب داخل المصفوفة

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    // قراءة عناصر المصفوفة
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // طباعة المصفوفة
    printf("\nMatrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // تهيئة large و small بأول عنصر
    large = small = matrix[0][0];

    // إيجاد أكبر وأصغر عنصر
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(matrix[i][j] > large) {
                large = matrix[i][j];
            }
            if(matrix[i][j] < small) {
                small = matrix[i][j];
            }
        }
    }

    // طباعة الأكبر والأصغر
    printf("\nLargest element in matrix is: %d\n", large);
    printf("Smallest element in matrix is: %d\n", small);

    // ضربهما
    multi = large * small;

    // البحث عن حاصل الضرب داخل المصفوفة
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(matrix[i][j] == multi) {
                printf("The multiplication of the largest and smallest element is %d, and it exists at index [%d][%d].\n", multi, i, j);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("The multiplication of the largest and smallest element is %d, and it does not exist in the matrix.\n", multi);
    }

    return 0;
}
