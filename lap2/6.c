#include <stdio.h>
#include <stdlib.h>

// 6- Write  a program in C to Sort Array using Bubble Sort &   Selection Sort

#define SIZE 10

int main ()
{
   int data[ SIZE ] = { 3, -2, 7, 10, -5, 22, 1, 27, 25, 30};
   int pass, i, temp;

   printf("Original order of data items:\n");

   //printing data items
   for ( i = 0; i < SIZE; ++i)
   {
      printf("%4d", data[ i ]);
   }

   //bubble sort
   for (pass = 1; pass < SIZE; ++pass) //loop for number of passes
   {
      for (i = 0; i < SIZE - 1; ++i)
      {
         //comparing successive elements and swapping
         if (data[ i ] > data[ i + 1])
         {
            temp = data[ i ];
            data[ i ] = data[ i + 1 ];
            data[ i + 1 ] = temp;
         }
      }
   }

   printf("\nData items in ascending order:\n");
   for (i= 0; i < SIZE; ++i)
   {
      printf("%4d", data[ i ]);
   }
   return 0;
}
