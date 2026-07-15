/*
Problem - Arrays_Difference Between Even-Index and Odd-Index Element Sums
Platform - HackerRank
Summary - You are given an array of N integers. Compute the difference between the sum of elements stored at even indices and the sum of elements stored at odd indices.
Use 0-based indexing
Difference = (sum of even-index elements) − (sum of odd-index elements)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    long long sume = 0;
    long long sumo = 0;
    
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            sume = sume + a[i];
        }
        else
        {
            sumo = sumo + a[i]; 
        }
    }
    long long diff = sume - sumo;
    printf("%lld",diff);
   
    return 0;
}