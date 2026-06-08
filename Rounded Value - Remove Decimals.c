/*
Problem - Rounded Value - Remove Decimals
Platform - HackerRank
Summary - Write a program that takes a floating-point number and prints it without decimal values.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    float value;
    scanf("%f",&value);
    n = value;
    printf("Rounded Value = %d",n);   
    return 0;
}