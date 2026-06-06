/*
Problem - Arrays_Find the Average of All Elements in an Array
Platform - HackerRank
Summary - Given an array of integers, calculate the average of all elements in the array.
The average must be computed as the sum of all elements divided by N and printed as a floating-point value.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    double sum = 0.0;
    
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    
    printf("%f",sum/n);  
    return 0;
}