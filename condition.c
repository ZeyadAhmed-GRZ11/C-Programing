#include <stdio.h>
#include <stdbool.h>

int main() {

    char password[12];
    printf("Enter a password (12 characters): "); 
    scanf("%s", password);

    if (password){
        printf("your password:%s is valid", password); 
    }
    else{
        printf("Password wrong.\n"); 
    }









//    int x = 5;

//    if (x == 5){
//      printf("TRUE\n");
//    }
//    else {
//      printf("FALSE\n");
//    }

}
// = < > !=