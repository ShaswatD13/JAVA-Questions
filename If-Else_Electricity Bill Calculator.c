/*
Problem - If-Else_Electricity Bill Calculator
Platform - HackerRank
Summary - Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.
*/

#include <stdio.h>

int main() {
    int unit;
    float a;
    scanf("%d %f",&unit,&a);
    if(unit<0){
        printf("Invalid Input!");
    }
    else if(unit<100){
        a = 0.9*unit*5;
        printf("The electricity bill is: %.2f.",a);
    }
    else if(unit<=200){
        a = 0.9*100*5 + 0.9*(unit-100)*7;
        printf("The electricity bill is: %.2f.",a);
    }
    else if(unit>200 && unit<=300){
        a = 100*5 + (unit-100)*7;
        printf("The electricity bill is: %.2f.",a);
    }
    else if(unit>300){
        a = 100*5 + 200*7 + (unit - 300)*10;
        printf("The electricity bill is: %.2f.",a);
    }
    
    return 0;
}