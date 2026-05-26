/*
Problem - Arrays_Pair Sum
Platform - HackerRank
Summary - You are given an array of integers and a target_sum. Your task is to find the first pair of integers in the array whose sum is equal to the target sum. The pair should be printed in the order they appear in the array.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    long long a[n];
    for(int i = 0;i < n;++i)
    {
        scanf("%lld",&a[i]);
    }
    
    int target_sum;
    scanf("%d",&target_sum);
    
    for(int i = 0; i < n; ++i)
    { 
        for(int j = i + 1; j < n; ++j) 
        {
            if(a[i] + a[j] == target_sum) 
            {
                printf("%lld %lld", a[i], a[j]);
                return 0;
            }
        }
    }
                printf("-1");
    return 0;
}