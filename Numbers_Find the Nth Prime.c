/*
Problem - Numbers_Find the Nth Prime
Platform - HackerRank
Summary - Given an integer n, write a program to calculate the n-th prime number, starting from 1.
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i=2;count<n;++i) 
    {
        int isPrime = 1;

        for (int j=2;j*j<=i;++j) 
        {
            if (i%j == 0) 
            {
                isPrime = 0;
            }
        }

        if (isPrime) 
        {
            count++;
            if (count == n) 
            {
                printf("%d",i);
            }
        }
    }

  
    return 0;
}