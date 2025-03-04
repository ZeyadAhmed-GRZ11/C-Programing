#include <stdio.h>
#include <stdbool.h>

int main() {
    
   int x = 5;

   switch (x)
   {
   case 2:
     printf("Case 2\n");
    break;

    case 4:
     printf("Case 4\n");
    break;

    case 5:
     printf("Case 5\n");
    break;

    default:
     printf("Default\n");
    break;  // this is optional, it will break the switch statement if not used.
 
   }

}