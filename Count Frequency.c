/*
Problrm - Count Frequency
Platform - HackerRank
Summary - Write a C program to count how many times each digit (0–9) appears in a number.
*/

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int freq[10] = {0};

    while(n != 0) {
        int digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}