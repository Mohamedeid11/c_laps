#include <stdio.h>
#include <stdlib.h>

// 12- Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and separated by group of " *'s ".



int main() {


    for (int i = 1; i <= 10; i++) {
            printf("\n");

        for(int z = 1 ; z <= 10 ; z++){

             printf("%d * %d = %d \n", i ,z , i * z);
        }
    }



  return 0;
}

