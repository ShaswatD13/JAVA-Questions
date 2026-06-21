/*
Problem - Check if Two Numbers Have Same Last Digit
Platform - HackerRank
Summary - You are given two integers a and b.
Your task is to determine whether they share the same last digit.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c = a%10;
    int d = b%10;
    if(c==d){
        printf("YES");
    }
    else{
        printf("NO");
    }    
    return 0;
}
