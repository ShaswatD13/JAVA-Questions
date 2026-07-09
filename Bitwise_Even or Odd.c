/*
Problem - Bitwise_Even or Odd
Platform - HackerRank
Summary - Write a program to determine whether a given integer N is even or odd using only bitwise operators.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if((N&1)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }   
    return 0;
}