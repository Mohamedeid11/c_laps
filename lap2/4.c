#include <stdio.h>
#include <stdlib.h>

/* 4- You are given a string s. You need to reverse the string.
   Input: char s [] = Geeks
   Output: skeeG
*/

int main()
{
    char string[] = "Geeks";
    //Stores the reverse of given string
    char reversedStr[strlen(string)];
    int j = 0;

    //Iterate through the string from last and add each character to variable reversedStr

    for(int i = strlen(string)-1; i >= 0; i--){
        reversedStr[j++] = string[i];
    }
    reversedStr[j] = '\0';

    printf("Original string: %s", string);
    //Displays the reverse of given string
    printf("\nReverse of given string: %s", reversedStr);

    return 0;
}
