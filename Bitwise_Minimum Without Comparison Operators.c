/*
Problem - Bitwise_Minimum Without Comparison Operators
Platform - HackerRank
Summary - Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.
*/

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",a);
    }
   
    return 0;
}