#include <stdio.h>
#include <stdbool.h>


int main() {

    int var = 11;
    int *ptr = &var;
    printf("Value of var = %d\n", var);
    printf("Address of var = %p\n", &var);

    return 0;

}