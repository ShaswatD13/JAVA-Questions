/*
Problem - Check Whether a Number is a Strong Number
Platform - GDB Compiler
Summary - A Strong Number is a number whose sum of factorial of digits is equal to the number itself.
*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, original, sum = 0;
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        int digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }

    if(sum == original)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}