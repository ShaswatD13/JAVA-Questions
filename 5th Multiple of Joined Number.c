/*
Problem - 5th Multiple of Joined Number
Platform - HackerRank
Summary - combine them into a single 4-digit number in the same order and multiply it by 5 to get the final       number.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a, int b, int c, int d){
    int ABCD = a*1000 + b*100 + c*10 + d;
    int res = ABCD*5;
    printf("The number is: %d",res);
    return res;
    
}

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    buildNumber(a,b,c,d);
    return 0;
}


