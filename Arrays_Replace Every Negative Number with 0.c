/*
Problem - Arrays_Replace Every Negative Number with 0
Platform - HackerRank
Summary - Given an array of integers, replace every negative number in the array with 0 and print the updated array.
The relative order of elements must remain unchanged.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N,i;
    scanf("%d",&N);
    
    int a[N];
    for(i = 0; i < N; ++i)
    {
        scanf("%d",&a[i]);
    }
    
    for(i = 0; i < N; ++i)
    {
        if(a[i] < 0)
        {
            a[i] = 0;
        }
        printf("%d ",a[i]);
    }
    
    
    return 0;
}