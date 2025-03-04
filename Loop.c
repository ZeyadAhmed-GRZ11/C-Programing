#include <stdio.h>
#include <stdbool.h>

int main() {
    
   for (int x = 0; x < 10; x++){
      if (x == 5)
      {
         //break;  
         continue;    // it will skip 5
      }
         printf("done %d \n", x);
   }


   // int x = 2;
   // do{
   //    printf("done %d \n", x);
   //    x++;
   // }while (x < 2);


//   for (int x = 0; x < 10; x++){
//    printf("done %d \n", x);
//   }


   // while (x < 3) {
   //    printf("done  %d\n", x);
   //    x = x + 1;
   // }
   
   

}
// x-- // x++