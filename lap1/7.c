#include <stdio.h>
#include <stdlib.h>

// 6 - C Program to make simple calculations (add, sub, multiply, divid) on two integers

int main() {

    int number1, number2, quotient, remainder;

    printf("Enter Number1: ");

    scanf("%d", &number1);

    printf("Enter Number2: ");

    scanf("%d", &number2);

    if(number1 > number2){

        quotient = number1 / number2;

        remainder = number1 % number2;

    }else{

        quotient = number2 / number1;

        remainder = number2 % number1;
    }

    printf("Quotient = %d\n", quotient);

    printf("Remainder = %d", remainder);

    return 0;
}
