/*
Problem - Arrays_Find Missing Number in an Array
Platform - HackerRank
Summary - You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.
Your task is to read the input, determine the missing number, and print the output.
*/

#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    
    int a[N-1];
    for(int i = 0;i < N-1;++i)
    {
        scanf("%d",&a[i]);
    }
    
    int sum = 0;
    int sumn = (N*(2 + (N - 1)))/2;
    
    for(int i = 0;i < N - 1;++i)
    {
        sum = sum + a[i];
    }
    int missing = sumn - sum;
    printf("%d",missing);
    
    return 0;
}