/*
Problem - Pattern_Butterfly
Platform - HackerRank
Summary - Write a program to print a butterfly pattern based on an integer input n. The pattern should consist of stars (*) and spaces arranged as follows:
The upper half of the butterfly contains rows where the number of stars increases, and the spaces decrease symmetrically.
The lower half is a mirror image of the upper half.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Shape Not Possible");
        return 0;
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    
    return 0;
}
