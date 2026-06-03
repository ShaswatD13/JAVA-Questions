/*
Problem - Numbers_Decimal to Binary [Without using Arrays]
Platform - HackerRank
Summary - Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros). [Without using Arrays]
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long binary = 0;
    long long place = 1;

    if (N == 0) 
    {
        printf("Binary equivalent of %d: 0", N);
        return 0;
    }

    for (int i = N; i > 0; i = i / 2) 
    {
        int rem = i % 2;
        binary = binary + rem * place;
        place = place * 10;
    }

    printf("Binary equivalent of %d: %lld", N, binary);

    return 0;
}