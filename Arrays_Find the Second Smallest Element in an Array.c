/*
Problem - Arrays_Find the Second Smallest Element in an Array
Platform - HackerRank
Summary - Given an array of integers, determine the second smallest distinct element in the array.
The second smallest element is defined as the element that is strictly greater than the smallest element and smaller than all other remaining elements.
If the array does not contain at least two distinct elements, print -1.
Note: Adjacent elements may be the same.
*/

#include <stdio.h>
#include <limits.h>
int main() {     
    int N;
    scanf("%d",&N);
        
    int arr[N];
     for(int i=0; i<N;++i)
     {
       scanf("%d", &arr[i]);
     }
        
    long min=arr[0];
    long secondmin= LONG_MAX;
    
    for(int i=0; i<N;++i)
    {
        if(arr[i]<min)             
        {
            secondmin = min;
            min=arr[i];
        }
            else if(arr[i]>min && arr[i]<secondmin)
            {
                   
                  secondmin = arr[i];
            }             
    }
        if(secondmin == LONG_MAX )
        {
            printf("-1");
            return 0;
        }
        
    printf("%ld",secondmin);

    return 0;
}