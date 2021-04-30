
#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
 {
 int fact;
 if(n !=1)
 {
 fact = n*factorial(n-1); // recursive call
 }
 else
 {
 fact=1;
 }

 return fact;
 }
 // main function
 int main()
 {
 int n;

 printf("Enter a positive number : ");
 scanf("%d",&n);

 printf("Factorial of %d : %d\n",n,factorial(n)); // call function
 return 0;
 }

 
