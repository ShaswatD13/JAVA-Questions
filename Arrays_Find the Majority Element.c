/*
Problem - Arrays_Find the Majority Element
Platform - HackerRank
Summary - You are given an array of integers. A majority element in an array is an element that appears more than ⌊n/2⌋ times, where n is the size of the array. Your task is to determine if the array contains a majority element. If it does, print the majority element; otherwise, print "No Majority Element".
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // ----- Step 1: Find Candidate -----
    int candidate = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // ----- Step 2: Verify Candidate -----
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate)
            count++;
    }

    if(count > n/2)
        printf("%d", candidate);
    else
        printf("No Majority Element");

    return 0;
}