/*
Problem - Area Of Rectangle
Platform - HackerRank
Summary - Printing Area Of Rectangle
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length, int width){
    int res = length*width;
    printf("The area is: %d units",res);
    return res;
}
int main() {
    int length,width;
    scanf("%d %d",&length,&width);
    area(length,width);
    return 0;
}
