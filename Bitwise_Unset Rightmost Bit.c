/*
Problem - Bitwise_Unset Rightmost Bit
Platform - HackerRank
Summary - Write a program to clear the rightmost set bit of an integer n. The result should be the number obtained after flipping the rightmost set bit to 0 while leaving other bits unchanged.
*/

#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    
    printf("%d",n & (n-1));
   
    return 0;
}