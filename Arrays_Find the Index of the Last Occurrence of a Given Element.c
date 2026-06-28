/*
Problem - Arrays_Find the Index of the Last Occurrence of a Given Element
Platform - HackerRank
Summary - Given an array of integers and a target value K, determine the index of the last occurrence of K in the array.
Indexing is 0-based.
If the element does not exist in the array, print -1.
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
    
    int K;
    scanf("%d",&K);
    
    int index = -1;
    
    for(int i=0;i<N;++i)
    {
        if(a[i]==K)
        {
            index = i;
        }
    }
    printf("%d",index);
    return 0;
}