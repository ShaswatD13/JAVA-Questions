/*
Problem - Half The Number
Platform - HackerRank
Summary - Print Half Of The Number
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float shaswat(int a)
{
    float b=a/2.0;
    printf("Half of %d is %.2f", a, b);
    return b;
}
int main()
{
    int a;
    scanf("%d", &a);
    shaswat(a);
    return 0;
}