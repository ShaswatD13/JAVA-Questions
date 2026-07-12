/*
Problem - Arrays_Check if Array is Sorted
Platform - HackerRank
Summary - You are given an array of integers. Your task is to determine whether the array is sorted in non-decreasing order.
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
    
    for(int i = 0;i < N - 1;++i)
    {
        if(a[i] > a[i + 1])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
    
    return 0;
}