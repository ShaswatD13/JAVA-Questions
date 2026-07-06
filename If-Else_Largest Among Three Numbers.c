/*
Problem - If-Else_Largest Among Three Numbers
Platform - HackerRank
Summary - Write a program to determine the largest number among three integer numbers
*/

#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("The largest number is : %d",a);
    }
    else if(b>a && b>c){
        printf("The largest number is : %d",b);
    }
    else if(c>a && c>b){
        printf("The largest number is : %d",c);
    }
    return 0;
}