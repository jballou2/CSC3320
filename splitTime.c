//jordon Ballou
//3320 System Level Programming
//Lab10
#include <stdio.h>

void split_time(long total_sec, int* hr, int* min, int* sec)
{
					//declaration
*hr = (int)(total_sec / (60 * 60));	
total_sec = total_sec % (60 * 60);
*min = (int)(total_sec / 60);
*sec = (total_sec % 60);
}

int main()	//main function
{
int n, hr, min, sec;
printf("Enter seconds: ");		

scanf("%d", &n);			//scanner
split_time(n, &hr, &min, &sec);
printf("Converted format: %d hour %d mins %d secs \n", hr, min, sec); 	//print call
return 0;				//return
}
