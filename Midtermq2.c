#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int myCompare(const void* a, const void* b)//comparator function
{
//rules 
 return strcmp(*(const char**)a, *(const char**)b);
}						//sort function
void sort(const char* arr[], int n)
{						//calling qsort
qsort(arr, n, sizeof(const char*), myCompare);
}

int main()					//gets array of names to be sort
{
const char* arr[]= { "Programming","Deep", "Learning", "Internet", "Things", "Robotics", "Course" };

        int n = sizeof(arr) / sizeof(arr[0]);
        int i;
//print given names
printf("Given array is\n");
        for (i = 0; i < n; i++)
                printf("%d: %s \n", i, arr[i]);
		//sort names 
sort(arr, n);

printf("\nSorted array is\n");
        for (i = 0; i < n; i++)
                printf("%d: %s \n", i, arr[i]);

        return 0;
}
