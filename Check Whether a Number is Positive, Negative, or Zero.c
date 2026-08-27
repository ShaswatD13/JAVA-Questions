/*
Problem - Check Whether a Number is Positive, Negative, or Zero
Platform - HackerRank
Summary - Write a C program that takes an integer as input and prints:
"Positive" if number > 0
"Negative" if number < 0
"Zero" if number == 0
*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if(num > 0)
        printf("Positive");
    else if(num < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}