#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    
    char password[] = "12345" ;
    char user_input[10];

    do{
       
        printf("Enter your password: ");
        scanf("%s", user_input);

        if (!strcmp(user_input, password)){
           printf("Success.\n");
           break;  
        }
        else{
           printf("invalid.\n");
        }

    }while (1);
  
}

// strcmp() function for compare between strings returns zero if the two strings are equal. If the strings are not equal, it returns a non-zero value.