#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int number1;
    int number2;
    char operation;

    printf("Enter number1:");
    scanf("%d", &number1);

    printf("Enter operation:");
    scanf("%s", &operation);

    printf("Enter number2:");
    scanf("%d", &number2);


    if (operation == '+'){
        printf("number1 + number2 =%d \n", number1 + number2);
    }
    else if (operation == '-'){
        printf("number1 - number2 =%d \n", number1 - number2);
    }
    else if (operation == '*'){
        printf("number1 * number2 =%d \n", number1 * number2);
    }
    else if (operation == '/'){
        printf("number1 / number2 =%d \n", number1 / number2);
    }
    else if (operation == '%'){
        printf("number1 %% number2 =%d \n", number1 % number2);
    }
    else{
        printf("Invalid operation. Please use +, -, *, /, or %%.\n");
    }

}