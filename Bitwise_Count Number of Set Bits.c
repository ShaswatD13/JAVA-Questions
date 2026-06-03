/*
Problem - Bitwise_Count Number of Set Bits
Platform - HackerRank
Summary - Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.
*/

#include <stdio.h>

int main() {
    int n,flag;
    scanf("%d", &n);
    flag = 0;

    if(n & 1)
        flag++;
    if(n & 2)
        flag++;
    if(n & 4)
        flag++;
    if(n & 8)
        flag++;

    printf("%d",flag);
    return 0;
}
