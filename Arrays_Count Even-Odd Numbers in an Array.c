/*
Problem - Arrays_Count Even-Odd Numbers in an Array
Platform - HackerRank
Summary - Write a program to count the number of even and odd numbers in an array. The program should print the count of even and odd numbers separately.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    int counte = 0;
    int counto = 0;
    
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        
        if(a[i]%2==0)
        {
            counte++;
        }
        else
        {
            counto++;
        }
    }
    printf("%d ",counte);
    printf("%d",counto);
 
    return 0;
}