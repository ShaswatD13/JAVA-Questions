/*
Problem - Bitwise_Swap two numbers
Platform - HackerRank
Summary - Write a program to swap two integers using only the bitwise XOR operator without using a temporary variable.
*/

#include <stdio.h>

int main() {
    int A,B;
    int C;
    C = A^B;
    scanf("%d %d",&A,&B);
    printf("%d\n%d",B^C,A^C);    
    return 0;
}