/*
Problem - Bitwise_Divisible By 4
Platform - HackerRank
Summary - You are given a single integer N.
Your task is to determine whether N is divisible by 4, using only bitwise operations.
You are NOT allowed to use the modulo operator (%), multiplication, or division.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld",&n);
    
    if(n>= -2147483648 && n<=2147483647)
        if((n&3)==0)
        {
            printf("Divisible");
        }
        else
        {
            printf("Not Divisible");
        }
    else
    {
        printf("Out of Range");
    }
    
    return 0;
}