/*
Problem - Find Leaders in an Array
Summary - An element is a leader if it is greater than all elements to its right.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n - 1];

    printf("Leaders: %d ", max_from_right);

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] > max_from_right) {
            printf("%d ", arr[i]);
            max_from_right = arr[i];
        }
    }

    return 0;
}