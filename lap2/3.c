#include <stdio.h>
#include <stdlib.h>

// 3- Write a program in C to find the second largest element in an array

int main()
{

        int max1, max2 , arrSize , i ;

       printf("Input the size of array :");

       scanf("%d",&arrSize);

       int arr[arrSize];

       printf("Input %d index in the array :\n",arrSize);

       for(i=0;i<arrSize;i++){

	      printf("index - %d : ",i);

	      scanf("%d",&arr[i]);

	    }

        max1 = max2 = arr[0];

    /*
     * Check for first largest and second
     */
    for(i=0; i<arrSize; i++)
    {
        if(arr[i] > max1)
        {
            /*
             * If current element of the array is first largest
             * then make current max as second max
             * and then max as current array element
             */
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            /*
             * If current array element is less than first largest
             * but is greater than second largest then make it
             * second largest
             */
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}
