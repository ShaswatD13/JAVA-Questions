/*
Problem - Arrays_Find the First Repeating Element
Platform - HackerRank
Summary - You are given an array of integers. Your task is to find the first repeating element in the array. An element is considered "repeating" if it occurs more than once. If multiple elements repeat, the answer is the one whose first occurrence appears earliest in the array. If no element repeats, print "No Repeating Element".
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000001

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Since range is -10^6 to 10^6
    int size = 2000001;
    int *index = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        index[i] = -1;  // initialize
    }

    int minIndex = n;
    int repeatingElement = -1;

    for(int i = 0; i < n; i++) {
        int key = arr[i] + 1000000;  // shift negative values

        if(index[key] == -1) {
            index[key] = i;  // store first occurrence
        } else {
            if(index[key] < minIndex) {
                minIndex = index[key];
                repeatingElement = arr[i];
            }
        }
    }

    if(repeatingElement == -1)
        printf("No Repeating Element\n");
    else
        printf("%d\n", repeatingElement);

    free(arr);
    free(index);

    return 0;
}