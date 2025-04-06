#include <stdio.h>
#include <stdbool.h>
#include "code.c"

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sayResult(num1, num2);
    return 0;
}


