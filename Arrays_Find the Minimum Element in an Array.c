/*
Problem - Arrays_Find the Minimum Element in an Array
Platform - HackerRank
Summary - Given an array of integers, determine the minimum element present in the array.
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
    
    long long min = a[0];
    
    for(int i=1;i<n;++i)
    {
        scanf("%d",&a[i]);
        
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%lld",min);
    

    return 0;
}
