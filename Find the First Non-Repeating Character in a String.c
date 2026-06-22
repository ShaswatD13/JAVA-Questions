/*
Problem - Find the First Non-Repeating Character in a String
Platform - HackerRank
Summary - Write a C program to find the first non-repeating character in a string.
If all characters repeat, print "No unique character".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[256] = {0};   // ASCII characters

    // Count frequency
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find first non-repeating character
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No unique character");

    return 0;
}