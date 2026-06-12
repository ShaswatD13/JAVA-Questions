/*
Problem - Break a 3 Digit Number Into Individual
Platform - HackerRank
Summary - Break Digit Into Individual
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 void split(int n){
     int A = n/100;
     int B = n%100/10;
     int C = n%10%10;
     printf("%d %d %d",A,B,C);
 }

int main() {
    int n;
    scanf("%d",&n);
    split(n);
    
    return 0;
}