/*
Problem - Arrays_Find Max and Min
Platform - HackerRank
Summary - Given an array of N integers, your task is to determine the maximum and minimum values in the array.
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i = 0;i < n;++i)
    {
        scanf("%d",&a[i]);
    }
    
    long long max = a[0];
    long long min = a[0];
    
    for(int i=0;i < n;++i)
    {   
        if(a[i] > max)
        {
            max = a[i];
        }
        else if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%lld ",max);
    printf("%lld",min);
    
    
    return 0;
}