/*
Problem - Bitwise_Check the Sign of a Number
Platform - HackerRank
Summary - Write a program to determine whether a given integer n is positive or negative using bitwise operators.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if((n&(1<<31))!=0)
    {
        printf("Negative");
    }
    else 
    {
        printf("Positive");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}