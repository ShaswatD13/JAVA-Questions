/*
Problem - Loops_Smart ATM Note Dispensing Machine
Platform - HackerRank
Summary - A new Smart ATM system has been introduced to improve the efficiency of cash withdrawal. Unlike regular ATMs, these machines use a precision dispensing algorithm to minimize the number of currency notes handed to the user.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A;
    scanf("%d",&A);
    
    if(A <= 0)
    {
        printf("Invalid amount");
        return 0;
    }
    
      int X = A/500;
      int Y = (A - X*500) / 200;
      int Z = (A - X*500 - Y*200) / 100;
    
    printf("500-rupee notes: %d\n",X);
    printf("200-rupee notes: %d\n",Y);
    printf("100-rupee notes: %d\n",Z);
       
    return 0;
}
