/*
Problem - Arrays_Find the First Repeating Element
Platform - HackerRank
Summary - You are given an array of integers. Your task is to find the first repeating element in the array. An element is considered "repeating" if it occurs more than once. If multiple elements repeat, the answer is the one whose first occurrence appears earliest in the array. If no element repeats, print "No Repeating Element".
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
    
    int target = 0;
    
    for(int i = 0;i < n;++i)
    {
        for(int j = i + 1;j < n;++j)
        {
            if(a[i] == a[j])
            {
                printf("%d",a[i]);
                target = 1;
                break;
            }
        }
        if(target)
        {
            break;
        }
    }
    
    if(target != 1)
    {
        printf("No Repeating Element");
    }

    return 0;
}