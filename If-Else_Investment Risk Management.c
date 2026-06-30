/*
Problem - If-Else_Investment Risk Management
Platform - HackerRank
Summary - Print one of the following messages based on the risk level:
"Low Risk Portfolio: Suitable for conservative investments."
"Medium Risk Portfolio: Balanced risk for moderate returns."
"High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance."
*/

#include <stdio.h>

int main() {
    
    int age;
    int income;
    int risk;
    scanf("%d %d %d",&age,&income,&risk);
    
    if(age<30)
    {
       printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(age>=30 && age<=50 && income>75000 && risk==3)
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(30<=age && age<=50 && income<=75000 && risk==2)
    {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if(30<=age && age<=50 && income>=75000 &&(risk==1 || risk==2) )
    {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if(age>50 && income>75000 && risk==3)
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else
    {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    
    return 0;
}