/*
Problem - Arrays_Find the Sum of All Elements in an Array
platform - HackerRank
Summary - Given an array of integers, compute the sum of all elements present in the array.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    long long sum = 0;
    
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        
        sum = sum + a[i];
    }
    printf("%lld",sum);

    
    return 0;
}