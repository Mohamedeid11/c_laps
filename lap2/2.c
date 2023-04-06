#include <stdio.h>
#include <stdlib.h>

// 2- C Program to find the minimum & maximum value of array elements. (Min_Max Array)

int main()
{

       int i, mx, mn, arrSize;

       printf("Input the size of array :");

       scanf("%d",&arrSize);

       int arr[arrSize];

       printf("Input %d index in the array :\n",arrSize);

       for(i=0;i<arrSize;i++)
            {

	      printf("index - %d : ",i);
	      scanf("%d",&arr[i]);

	    }


        mx = arr[0];
        mn = arr[0];

        for(i=1; i<arrSize; i++)
        {
            if(arr[i]>mx){

                mx = arr[i];

            }


        if(arr[i]<mn){

            mn = arr[i];

        }
    }

    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
