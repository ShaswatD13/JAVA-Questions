/*
Problem - Arrays_Kth Smallest Element
Platform - HackerRank
Summary - Given an array of integers that may contain duplicate elements and an integer K, your task is to find the Kth smallest element in the array without using a sorting algorithm. Instead of sorting the entire array, solve the problem using an efficient algorithm.
*/

#include <stdio.h>
#include <limits.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
  int Min = INT_MIN;
    int kthMin = 0;
    for(int i = 0; i<=k-1; i++){
        kthMin = INT_MAX;
        for (int j=0; j<=n-1; j++){
            if(arr[j]>Min && arr[j]<kthMin){
                kthMin = arr[j];
            }
        }
        Min = kthMin;
    }
    return kthMin;
}   

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}