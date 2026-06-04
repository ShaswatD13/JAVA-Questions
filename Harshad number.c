/*
Problem - Find Harshad number
Platform - HackerRank
Summary - A number divisible by the sum of its digits
*/

#include <stdio.h>

int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    
    a = n/1000;
    b = (n/100)%10;
    c = (n/10)%10;
    d = n%10;
    
    int sum = a + b + c + d;
    
    if(n%sum == 0)
    {
        printf("%d is a harshad number.",n);
    }
    else
    {
        printf("%d is not a harshad number",n);
    }
    

    return 0;
}
