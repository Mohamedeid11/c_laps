#include <stdio.h>
#include <stdlib.h>

// 6 - C Program to make simple calculations (add, sub, multiply, divid) on two integers

int main() {

    int number1, number2, sum ,sub ,multiply , divid;

    printf("Enter two integers: ");

    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;

    sub = number1 - number2;

    multiply = number1 * number2;

    divid = number1 / number2;

    printf("The Adding of %d + %d = %d \n", number1, number2, sum);

    printf("The subtract of %d - %d = %d \n", number1, number2, sub);

    printf("The multiply of %d * %d = %d \n", number1, number2, multiply);

    printf("The divid of %d / %d = %d \n", number1, number2, divid);

    return 0;
}
