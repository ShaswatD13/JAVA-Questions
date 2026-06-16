/*
Problem - Arrays_Count the Number of Elements Greater Than the Average Value
Platform - HackerRank
Summary - Given an array of integers, calculate the average value of all elements in the array and count how many elements are strictly greater than the average.
The average is defined as: (sum of all elements) / N
Comparison must be strictly greater (>), not greater than or equal to.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N;
    scanf("%d",&N);
    
    int a[N];
    for(int i = 0;i < N;++i)
    {
        scanf("%d",&a[i]);
    }
    
    long long sum = 0;
    int count = 0;
    
    for(int i = 0;i < N;++i)
    {
        sum = sum + a[i];
    }
    
    double avg = (double)sum/N;
    
    for(int i = 0;i < N;++i)
    {
        if(avg < a[i])
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}