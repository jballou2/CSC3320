






#include<stdio.h>


//main function
int main()
{      
   int original_integer = 5332;

      //display the original integer
         printf("Original integer: %d\n", original_integer);

            //compute the new integer value
               int new_integer = ((original_integer) << 3) + (~original_integer);

                  //display the new integer
                    printf("New integer: %d\n", new_integer);
 }
