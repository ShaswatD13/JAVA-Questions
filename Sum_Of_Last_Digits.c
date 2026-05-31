/*
Problem - Extract their last digits and print the sum of those digits
Platform - HackerRank
Summary - Sum Last Digits
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b){
    int res = a%10 + b%10;
    printf("The sum of last digits is: %d",res);
    return res;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    sumLastDigits(a,b);   
    return 0;
}