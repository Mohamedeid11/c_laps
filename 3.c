#include <stdio.h>
#include <stdlib.h>

//3- C Program to print a float number entered by the user

int main()
{

      float InputFloat;

      printf(" Please Enter Float Value :  ");

      scanf("%f", &InputFloat);

      printf(" \n The Float Value that you Entered is :  %f", InputFloat);

      printf(" \n The Float Value with precision 2 is :  %.2f", InputFloat);

      printf(" \n The Float Value with precision 4 is :  %.4f", InputFloat);

      printf(" \n The Float Value with precision 1 is :  %.1f", InputFloat);

      return 0;
}
