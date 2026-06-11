/*
Problem - Find the Fourth Largest Element in an Array
Summary - Given an array of integers, find the fourth largest distinct element without sorting the array.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 4) {
        printf("Not enough elements");
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;
    int third = INT_MIN, fourth = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            fourth = third;
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first) {
            fourth = third;
            third = arr[i];
        }
        else if(arr[i] > fourth && arr[i] != third && arr[i] != second && arr[i] != first) {
            fourth = arr[i];
        }
    }

    if(fourth == INT_MIN)
        printf("No fourth largest distinct element");
    else
        printf("Fourth Largest Element: %d", fourth);

    return 0;
}