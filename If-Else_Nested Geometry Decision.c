/*
Problem - If-Else_Nested Geometry Decision
Platform - HackerRank
Summary - Write a program to determine the type of 2D geometric figure based on the following properties:
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("Circle");
    }
    else if(n==3)
    {
        int a,b,c;
        int A,B,C;
        scanf("%d %d %d %d %d %d",&a,&b,&c,&A,&B,&C);
        if(a<=0||A<=0||b<=0||B<=0||c<=0||C<=0||A+B+C!=180|| a + b <= c || a + c <= b || b + c <= a){
           printf("Invalid Figure");
        }
        else if(a==b && b==c && A==B && B==C)
        {
            printf("Equilateral Triangle");
        }
        else if((a==b && A==B && a!=c && A!=C)||(b==c && B==C && a!=b && A!=B)||(a==c && A==C && b!=c && B!=C))
        {
            printf("Isosceles Triangle");
        }
        else if(a!=b && b!=c && a!=c && A!=B && B!=C && A!=C)
        {
            printf("Scalene Triangle");
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else if(n==4)
    {
        int a,b,c,d;
        int A,B,C,D;
        scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&A,&B,&C,&D);
        if(a<=0||A<=0||b<=0||B<=0||c<=0||C<=0||d<=0||D<=0||A+B+C+D!=360){
               printf("Invalid Figure");
           }
        else if(a==b && b==c && c==d && A==90 && B==90 && C==90 && D==90)
        {
            printf("Square");
        }
        else if(a==c && b==d && a!=b && A==90 && B==90 && C==90 && D==90)
        {
            printf("Rectangle");
        }
        else if(a==b && b==c && c==d && A==C && B==D && A!=B)
        {
            printf("Rhombus");
        }
        else if(a==c && b==d && a!=b && A==C && B==D && A!=B)
        {
            printf("Parallelogram");
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    
    return 0;
}