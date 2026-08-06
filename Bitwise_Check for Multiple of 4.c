/*
Problem - Bitwise_Check for Multiple of 4
Platform - HackerRank
Summary - Write a program to check if a given integer n is a multiple of 4 using only bitwise operators. You are not allowed to use the modulus operator (%), division operator (/), or loops. Use bitwise operations to determine the result efficiently.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(((n&2)==0)&&((n&1)==0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}