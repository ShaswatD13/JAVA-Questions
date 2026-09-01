/*
Problem - Discounted Price
Platform - HackerRank
Summary - Calculating the discount offered based on the price and discount percentage.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted(float price, float percent){
    int discountAmount = ( price * percent ) / 100;
    float res = price - ( price * percent ) / 100;
    return res;
}

int main() {
    float price;
    float percent;
    scanf("%g %g",&price,&percent);
    printf("The final price is: %f",discounted(price, percent));
    return 0;
}