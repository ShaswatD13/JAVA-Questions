/*
Problem - Arrays_Find the Index of an Element
Platform - HackerRank
Summary - You are given an array of integers and a target element. Your task is to find the first occurrence index of the target element in the array. If the element is not found, return -1.
*/

#include <stdio.h>

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
    
    int flag = 0;
    for(int i=0;i<N;++i)
    {
        if(a[i]==target)
        {
            printf("%d",i);
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        printf("-1");
    }

    return 0;
}