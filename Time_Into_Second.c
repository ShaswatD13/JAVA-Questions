/*
problem - converting time into second
Platform - HackerRank
summarym - Entire time into total seconds.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int toSeconds(int hours, int minutes, int seconds){
    int res = hours*60*60 + minutes*60 + seconds;
    printf("Total seconds: %d",res);
    return res;
    
}
    
int main() {
    int hours,minutes,seconds;
    scanf("%d %d %d",&hours,&minutes,&seconds);
    toSeconds(hours,minutes,seconds);
    return 0;
}