/*
Problem - Loops_Squares Series
Platform - HackerRank
Summary - Write a program to generate the series 1, 4, 9, 16, 25, ... of N numbers, but skip the numbers that are divisible by 3.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int flag = 0;

    for (int i = 1;flag<N; i++) {
        if ((i*i) % 3 != 0) {
            printf("%d ",i*i);
            flag++;
        }
    }
   
    return 0;
}