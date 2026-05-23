/*
Problem - Arrays_Move Zeros to End
Platform - HackerRank
Summary - You are given an array of integers. Your task is to implement a function that moves all the zeros to the end of the array in-place, while maintaining the relative order of the non-zero elements. You do not need to return anything.
*/

#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    // Implement your logic here
    int pos = 0;
    for(int i = 0;i < n;++i)
    {
        if(arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    
    for(int i = pos;i < n;++i)
    {
        arr[i] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}