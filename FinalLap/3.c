#include <stdio.h>
#include <string.h>

// 3- Write a function to  swap two numbers in c without using third variable(2 Methods).

// Method 1: Using + and -

int Method1(int a , int b)
{
    a = a + b; //a=15 (5+10)
    b = a - b; //b=5 (15-10)
    a = a - b; //a=10 (15-5)
    printf("\nUsing Method 1 After swap a=%d b=%d",a,b);
    return;
}


// Method 2: Using * and /

int Method2(int a , int b)
{
    a = a * b; //a=50 (5*10)
    b = a / b; //b=5 (50/10)
    a = a / b; //a=10 (50/5)
    printf("\nUsing Method 2 After swap c=%d d=%d",a,b);
    return;
}


int main()
{
    int a = 5, b = 10 , c = 100 , d = 50;

    printf("Method 1 Before swap a=%d b=%d \n",a,b);

    printf("Method 2 Before swap c=%d d=%d \n",c,d);

    Method1(a , b);

    Method2(c , d);
   return 0;
}
