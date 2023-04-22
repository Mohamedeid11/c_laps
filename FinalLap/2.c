#include <stdio.h>
#include <string.h>

// 2- Write a function to concatenate two strings without using strcat function.


void concatenate(char *str1 , char *str2)
{

   int i = strlen(str1);

   for (int j = 0; str2[j] != '\0'; i++, j++) {
      str1[i] = str2[j];
   }

   str1[i] = '\0';

   return;

}

int main()
{
   char str1[100], str2[100];

   printf("Enter first string: ");
    gets(str1);

   printf("Enter second string: ");
    gets(str2);

    concatenate(str1 , str2);

    printf("Concatenated string: %s \n", str1 );

   return 0;
}
