#include <stdio.h>
#include <string.h>

// 1- Write a function to reverse a string by passing it to a function without using strrev function.

void reverse(char *str)
{

    char reversedStr[strlen(str)];
    int j = 0;

    //Iterate through the string from last and add each character to variable reversedStr

    for(int i = strlen(str)-1; i >= 0; i--){
        reversedStr[j++] = str[i];
    }
    reversedStr[j] = '\0';

   printf("Reverse of the string: %s \n", reversedStr);

}

int main()
{
   char str[100];

   printf("Enter a string: ");

   gets(str);

    reverse(str);

   return 0;
}
