/*
Problem - Arrays_Left Rotate an Array by One Position
Platform - HackerRank
Summary - You are given an array of integers. Your task is to implement a function that modifies the given array in-place to left rotate it by one position.
*/

#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    
    int temp = arr[0];
    for(int i = 0;i < n - 1;++i)
    {
        arr[i] = arr[i + 1];
        
    }
      arr[n - 1] = temp;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}