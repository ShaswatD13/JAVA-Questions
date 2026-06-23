/*
Problem - If-Else_New Year Celebration Budget Planner
Platform - HackerRank
Summary - Write a program to evaluate whether Sharib can host the celebration or not.
*/

#include <stdio.h>

int main() {
    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    scanf("%d %d %d %d %d %d",&budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
    int tc;
    if(numGuests>25)
    {
        tc = foodCostPerGuest*numGuests + decorationCost + musicCost + extraExpenses;
       if((numGuests>5 && numGuests<=50) && ((decorationCost<(0.3*budget)) || ((foodCostPerGuest*numGuests)<0.5*budget)) && (musicCost>0) && (tc<=budget))
        {
           printf("Celebration Approved");
        }
        else{
            printf("Celebration Denied");
        }
    }
    else
    {
        tc = foodCostPerGuest*numGuests + decorationCost + extraExpenses;
        if((numGuests>5 && numGuests<=50) && ((decorationCost<(0.3*budget)) || ((foodCostPerGuest*numGuests)<0.5*budget)) && (tc<=budget))
        {
           printf("Celebration Approved");
        }
        else{
            printf("Celebration Denied");
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}