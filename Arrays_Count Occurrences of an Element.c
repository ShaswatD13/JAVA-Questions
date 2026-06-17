/*
Problem - Arrays_Count Occurrences of an Element
Platform - HackerRank
Summary - You are given an array of integers and a target element. Your task is to count how many times the target element occurs in the array and output that count.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N;
    scanf("%d",&N);
    
    int a[N];
    for(int i=0;i<N;++i)
    {
        scanf("%d",&a[i]);
    }
    
    int target;
    scanf("%d",&target);
    
    int count = 0;
    
    for(int i=0;i<N;++i)
    {
        if(a[i]==target)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}