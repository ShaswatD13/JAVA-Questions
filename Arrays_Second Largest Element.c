/*
Problem - Arrays_Second Largest Element
Platform - HackerRank
Summary - Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.
*/

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int a[], int n) {
  
    
   
    int flag=0;
    long long max1 = a[0];
    
    
    
    for(int i = 1;i < n; ++i)
    {
        if(a[i] > max1)
        {
            max1 = a[i];
        }
        if(a[0]==a[i])
            flag++;
    }
    
    long long max2;
    
    for(int i = 0;i < n; ++i)
    {
        if(a[i] != max1)
        {
            max2 = a[i];
            break;
        }
    }
    
    for(int i = 0;i < n;++i)
    {
        if((a[i] > max2) && (a[i] != max1))
        {
            max2 = a[i];
        }
    }
    if((flag==n-1)||(n==1))
        return -1;
    else
   return max2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", findSecondLargest(a, n));
    return 0;
}