/*
Problem - Find the Fifth Largest Element in an Array
Summary - Given an array of integers, find the fifth largest distinct element without sorting the array.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 5) {
        printf("Not enough elements");
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    int fourth = INT_MIN, fifth = INT_MIN;

    for(int i = 0; i < n; i++) {

        if(arr[i] > first) {
            fifth = fourth;
            fourth = third;
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            fifth = fourth;
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first) {
            fifth = fourth;
            fourth = third;
            third = arr[i];
        }
        else if(arr[i] > fourth && arr[i] != third && arr[i] != second && arr[i] != first) {
            fifth = fourth;
            fourth = arr[i];
        }
        else if(arr[i] > fifth && arr[i] != fourth && arr[i] != third 
                && arr[i] != second && arr[i] != first) {
            fifth = arr[i];
        }
    }

    if(fifth == INT_MIN)
        printf("No fifth largest distinct element");
    else
        printf("Fifth Largest Element: %d", fifth);

    return 0;
}