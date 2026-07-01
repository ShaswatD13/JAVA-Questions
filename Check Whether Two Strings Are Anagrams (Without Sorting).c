/*
Problem - Check Whether Two Strings Are Anagrams (Without Sorting)
Platform - GDB Compiler
Summary - Write a C program to check if two strings are anagrams without sorting them.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[256] = {0};

    for(int i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
    }

    for(int i = 0; str2[i] != '\0'; i++) {
        freq[(int)str2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}