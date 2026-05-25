/*
Problem - Bitwise_Extract the i-th Bit
Platform - HackerRank
Summary - Given an integer n and a position i, your task is to write a program to extract the value of the i-th bit of n
*/

#include <stdio.h>

int main() {
    int n,i;
    scanf("%d %d",&n,&i);
    int bit = 1&(n>>i);
    printf("%d",bit);
    return 0;
}