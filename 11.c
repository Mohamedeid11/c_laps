#include <stdio.h>
#include <stdlib.h>

// 11- Receive numbers from the user, and exit when the sum exceeds 100.

int main()
{

    int sum = 0 , value;

    while(sum < 100)
    {

        printf("Enter Number  : ");

        scanf("%d" , &value);

        sum += value;

        printf("\n The sum is %d.", sum);

    }

    return 0;

}
