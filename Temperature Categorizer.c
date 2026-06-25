/*
Problem - Temperature Categorizer
Platform - HackerRank
Summary - Temperature     |       Category
          t < 0           |       Freezing
          0 ≤ t ≤ 30      |       Normal
          t > 30          |       Hot
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    
    if(t<0)
    {
        printf("Freezing");
    }
    else if(0<=t && t<=30)
    {
        printf("Normal");
    }
    else
    {
        printf("Hot");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}