/*
Problem - year is a leap year without using if and else statements.
Platform - HackerRank
Summary - Divisible by 4 AND not divisible by 100
OR divisible by 400.
*/

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    printf("%s", 
           (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)? "Leap Year": "Not Leap Year");

    return 0;
}