/*
Problem - Arrays_Count Elements Greater Than a Given Value K
Platform - HackerRank
Summary - Given an array of integers and a value K, count how many elements in the array are strictly greater than K.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N;
    scanf("%d",&N);
    
    int a[N];
    for(int i = 0;i < N;++i)
    {
        scanf("%d",&a[i]);
    }
    
    int K;
    scanf("%d",&K);
    
    int count = 0;
    
    for(int i = 0;i<N;++i)
    {
        if(a[i]>K)
        {
            count++;
        }
    }
    printf("%d",count);
    
    
    return 0;
}