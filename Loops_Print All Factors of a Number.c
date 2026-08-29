/*
Problem - Loops_Print All Factors of a Number
Platform - HackerRank
Summary - Given a positive integer N, print all its factors in ascending order.
You need to write a program that reads N and prints all its factors separated by spaces.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        {
            printf("%d ",i);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
