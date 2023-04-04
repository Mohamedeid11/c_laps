#include <stdio.h>
#include <stdlib.h>

// 13- Rewrite the previous program to print them in descending order.



int main() {


    for (int i = 10 ; i >= 1 ; i--) {

            printf("\n");

        for(int z = 1 ; z <= 10 ; z++){

             printf("%d * %d = %d \n", i ,z , i * z);
        }
    }



  return 0;
}
