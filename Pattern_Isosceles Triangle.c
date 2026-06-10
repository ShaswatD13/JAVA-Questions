/*
Problem - Pattern_Isosceles Triangle
Platform - HackerRank
Summary - Write a program to print an isosceles triangle pattern based on the number of rows n provided by the user.
The pattern has the following properties:
The triangle consists of n rows.
Each row contains spaces followed by asterisks (*), forming a centered isosceles triangle.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the triangle cannot be drawn by the given input value.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Shape Not Possible");
    }
    else{
    for(int i=1;i<=n;++i)
    {
        for(int k = 1;k<=(n-1)-i+1;++k)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i - 1;++j)
        {
            printf("*");
        }
        printf("\n");
    }
        }
   
    return 0;
}