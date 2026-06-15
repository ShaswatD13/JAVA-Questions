/*
Problem - Bitwise_Toggle i-th bit
Platform - HackerRank
Summary - Given a number n and a position i, write a program to toggle the i-th bit of n using bitwise operators.
*/

#include <stdio.h>

int main() {
    int n;
    int i;
    scanf("%d",&n);
    scanf("%d",&i);
    printf("%d",n ^ (1<<i));

    return 0;
}