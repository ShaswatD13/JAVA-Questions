/*
Problem - Arrays_Find the Union and Intersection of Two Sorted Arrays
Platform - HackerRank
Summary - You are given two sorted arrays of integers. Your task is to find:
Union: A sorted array containing all unique elements from both arrays.
Intersection: A sorted array containing only the common elements from both arrays.
You must write a code which takes two array inputs and outputs union and intersection of two arrays, if possible.
*/

#include <stdio.h>

int main() {
    
    int n1;
    scanf("%d", &n1);
    int a[n1];
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    
    int n2;
    scanf("%d", &n2);
    int b[n2];
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0;
    int lastUnion = 1000000007;

    // -------- UNION --------
    for(i = 0, j = 0; i < n1 && j < n2; ) {

        int val;

        if(a[i] < b[j]) {
            val = a[i];
            i++;
        }
        else if(a[i] > b[j]) {
            val = b[j];
            j++;
        }
        else {
            val = a[i];
            i++;
            j++;
        }

        if(val != lastUnion) {
            printf("%d ", val);
            lastUnion = val;
        }
    }

    for(; i < n1; i++) {
        if(a[i] != lastUnion) {
            printf("%d ", a[i]);
            lastUnion = a[i];
        }
    }

    for(; j < n2; j++) {
        if(b[j] != lastUnion) {
            printf("%d ", b[j]);
            lastUnion = b[j];
        }
    }

    printf("\n");

    // -------- INTERSECTION --------
    int lastIntersection = 1000000007;
    int found = 0;

    for(i = 0, j = 0; i < n1 && j < n2; ) {

        if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
        else {
            if(a[i] != lastIntersection) {
                printf("%d ", a[i]);
                lastIntersection = a[i];
                found = 1;
            }
            i++;
            j++;
        }
    }

    if(!found)
        printf("Intersection Not Possible");

    return 0;
}