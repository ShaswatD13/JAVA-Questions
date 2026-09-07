/*
Problem - If-Else_Money Heist
Platform - HackerRank
Summary - Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.
*/

#include <stdio.h>

int main() {
    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    int i1,r1;
    int i2,r2;
    int i3,r3;
    scanf("%d %d %d %d %d %d %d %d %d %d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    scanf("%d %d\n",&i1,&r1);
    scanf("%d %d\n",&i2,&r2);
    scanf("%d %d\n",&i3,&r3);
    
    if(i1==0)
    {
        n0 = (n0 + r1)%10;
    }
    else if(i1==1)
    {
        n1 = (n1 + r1)%10;
    }
    else if(i1==2)
    {
        n2 = (n2 + r1)%10;
    }
    else if(i1==3)
    {
        n3 = (n3 + r1)%10;
    }
    else if(i1==4)
    {
        n4 = (n4 + r1)%10;
    }
    else if(i1==5)
    {
        n5 = (n5 + r1)%10;
    }
    else if(i1==6)
    {
        n6 = (n6 + r1)%10;
    }
    else if(i1==7)
    {
        n7 = (n7 + r1)%10;
    }
    else if(i1==8)
    {
        n8 = (n8 + r1)%10;
    }
    else if(i1==9)
    {
        n9 = (n9 + r1)%10;
    }
    
    
    if(i2==0)
    {
        n0 = (n0 + r2)%10;
    }
    else if(i2==1)
    {
        n1 = (n1 + r2)%10;
    }
    else if(i2==2)
    {
        n2 = (n2 + r2)%10;
    }
    else if(i2==3)
    {
        n3 = (n3 + r2)%10;
    }
    else if(i2==4)
    {
        n4 = (n4 + r2)%10;
    }
    else if(i2==5)
    {
        n5 = (n5 + r2)%10;
    }
    else if(i2==6)
    {
        n6 = (n6 + r2)%10;
    }
    else if(i2==7)
    {
        n7 = (n7 + r2)%10;
    }
    else if(i2==8)
    {
        n8 = (n8 + r2)%10;
    }
    else if(i2==9)
    {
        n9 = (n9 + r2)%10;
    }
    
    
    if(i3==0)
    {
        n0 = (n0 + r3)%10;
    }
    else if(i3==1)
    {
        n1 = (n1 + r3)%10;
    }
    else if(i3==2)
    {
        n2 = (n2 + r3)%10;
    }
    else if(i3==3)
    {
        n3 = (n3 + r3)%10;
    }
    else if(i3==4)
    {
        n4 = (n4 + r3)%10;
    }
    else if(i3==5)
    {
        n5 = (n5 + r3)%10;
    }
    else if(i3==6)
    {
        n6 = (n6 + r3)%10;
    }
    else if(i3==7)
    {
        n7 = (n7 + r3)%10;
    }
    else if(i3==8)
    {
        n8 = (n8 + r3)%10;
    }
    else if(i3==9)
    {
        n9 = (n9 + r3)%10;
    }
        printf("%d %d %d %d %d %d %d %d %d %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
 return 0;
}