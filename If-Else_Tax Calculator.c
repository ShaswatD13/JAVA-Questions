/*
Problem - If-Else_Tax Calculator
Platform - HackerRank
Summary - Aakash has recently started his new job and is extremely busy managing his work and tasks. As a result, he doesn’t have time to figure out his income tax calculations manually. To simplify this, he wants someone to create a reliable system that can calculate his income tax based on the Indian tax rules.
*/

#include <stdio.h>

int main() {
    int income;
    float tax;
    scanf("%d",&income);

    if(income>=0 && income<=250000)
    {
       printf("0.00");   
    }
    else if(income>250000 && income<=500000)
    {
        tax=0.05*(income-250000);
        printf("%.2f",tax);
    }
    else if(income>500000 && income<=1000000)
    {
        tax=0.05*250000 + (income-500000)*0.2;
        printf("%.2f",tax);
    }
    else if(income>1000000)
    {
        tax= 250000*0 + 0.05*250000 + 0.2*(500000) + 0.3*(income-1000000);
        printf("%.2f",tax);
    }
    else if(income<0)
    {
        printf("INVALID");
    }
    
    return 0;
}