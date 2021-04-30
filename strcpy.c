#include<stdio.h>
#include<stdlib.h>

char* strcpy(char* strDest, const char* strSrc)

{

unsigned i;

//copy the src string to dest string

for (i=0; strSrc[i] != '\0'; ++i)

strDest[i] = strSrc[i];

  

  strDest[i]='\0';//null to end

  return strDest;//return pointer to dest

  }

int main()
{

					//declare variables
	char src[] = "Jordon Ballou"; 
	char dest[100];

	printf("Source string: %s\n",src);
	printf("copied string: %s", strcpy(dest,src));
	return 0;
}
