



#include <math.h>
#include <stdio.h>


int convertBinaryToInteger(long long n) {
int dec = 0, i = 0, rem;
while (n != 0) {
rem = n % 10;
n /= 10;
int p = pow(2, i);
dec += rem * p;
++i;
}
return dec;
}


long long convertIntegerToBinary(int m) {
long long bin = 0;
int rem, i = 1, step = 1;
while (m != 0) {
rem = m % 2;
m /= 2;
bin += rem * i;
i *= 10;
}
return bin;
}


int main() {
long long n;
printf("binary number: ");
scanf("%lld", &n);
printf("%lld in binary = %d in integer\n", n, convertBinaryToInteger(n));
int m;
printf("Enter integer number: ");
scanf("%d", &m);
printf("%d in integer = %lld in binary\n", m, convertIntegerToBinary(m));
return 0;
}

