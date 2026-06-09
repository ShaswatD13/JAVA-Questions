/*
Problem - Arrays_Find the Maximum Element in an Array
Platform - HackerRank
Summary - Given an array of integers, determine the maximum element present in the array.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int a[n];
    scanf("%d",&a[0]);
    
    long long max = a[0];
    
    for(int i=1;i<n;++i)
    {
        scanf("%d",&a[i]);
        
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%lld",max);
    
    return 0;
}