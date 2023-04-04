#include <stdio.h>
#include <stdlib.h>

// 8- C Program to Find the Largest Number Among Three Numbers

int main() {

  int number1, number2, number3;

  printf("Enter three different numbers: ");

  scanf("%d %d %d", &number1, &number2, &number3);

  if(number1 >= number2 && number1 >= number3){

        printf("%d is the largest number.", number1);

  }elseif(number2 >= number1 && number2 >= number3){

        printf("%d is the largest number.", number2);

  }elseif(number3 >= number1 && number3 >= number2){

        printf("%d is the largest number.", number3);

  }
  return 0;
}
