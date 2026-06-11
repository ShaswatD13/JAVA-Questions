/*
Problem - Arrays_Check Whether the Array Is Sorted
Platform - HackerRank
Summary - Given an array of integers, determine whether the array is sorted.
Print "Ascending" if the array is sorted in non-decreasing (ascending) order
Print "Descending" if the array is sorted in non-increasing (descending) order
Print "Not Sorted" otherwise
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &a[i]);
    }

    if (N == 1) 
    {
        printf("Ascending");
        return 0;
    }

    int flag1 = 1;
    int flag2 = 1;

    for(int i = 0; i < N - 1; i++) 
    {
        if(a[i] > a[i + 1])
            flag1 = 0;
        
        if(a[i] < a[i + 1])
            flag2 = 0;
    }

    if(flag1)
        printf("Ascending");
    
    else if(flag2)
        printf("Descending");
    
    else
        printf("Not Sorted");

    return 0;
}