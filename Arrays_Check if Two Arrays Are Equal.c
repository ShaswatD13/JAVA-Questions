/*
Problem - Arrays_Check if Two Arrays Are Equal
Platform - HackerRank
Summary - You are given two arrays of integers, which may or may not have the same length.
Determine whether the two arrays are equal.
Two arrays are considered equal if and only if:
They have the same length
They contain the same elements
Elements are in the same order
If any of the above conditions fails, the arrays are not equal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);
    long long a[N];
    for(int i = 0; i < N; ++i) 
    {
        scanf("%lld", &a[i]);
    }
    
    int M;
    scanf("%d", &M);
    long long b[M];
    for(int i=0; i<M;++i) 
    {
        scanf("%lld", &b[i]);
    }
    
    
    if (N != M) 
    {
        printf("Not Equal");
        return 0;
    }
    
    for(int i=0;i<N;++i) 
    {
        if (a[i] != b[i]) {
            printf("Not Equal");
            return 0;
        }
    }
    
    printf("Equal");
    return 0;
}
