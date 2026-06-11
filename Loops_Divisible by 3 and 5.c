/*
Problem - Loops_Divisible by 3 and 5.
Platform - HackerRank
Summary - Write a program that prints all the numbers between 1 and 100 (inclusive) that are divisible by both 3 and 5.
*/

#include <stdio.h>

int main() {
    for(int i=15;i<=90;i+=15)
    {
        printf("%d\n",i);
    } 
    return 0;
}