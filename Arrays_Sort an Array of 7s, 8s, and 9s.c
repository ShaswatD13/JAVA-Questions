/*
Problem - Arrays_Sort an Array of 7s, 8s, and 9s
Platform - HackerRank
Summary - You are given an array that contains only the integers 7, 8, and 9 in arbitrary order. Your task is to write a function sortArray() that sorts the array in non-decreasing order. In other words, after sorting, all 7s should appear first, followed by all 8s, and finally all 9s. The function should modify the array in-place.
*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    // Implement sorting logic here
    int count7 = 0, count8 = 0, count9 = 0;

    // Count occurrences
    for(int i = 0; i < n; i++) {
        if(arr[i] == 7)
            count7++;
        else if(arr[i] == 8)
            count8++;
        else
            count9++;
    }

    // Rewrite array
    int index = 0;

    for(int i = 0; i < count7; i++)
        arr[index++] = 7;

    for(int i = 0; i < count8; i++)
        arr[index++] = 8;

    for(int i = 0; i < count9; i++)
        arr[index++] = 9;
}




int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}