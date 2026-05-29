/*
Problem - If-Else_Magical Mirror
Platform - HackerRank
Summary - Your task is to create a program that simulates the enchanted mirror. Based on the input number, the program should output the mirror's verdict.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N<=0){
        printf("The verdict for the number %d is: INVALID",N);
        return 0;
    }
    int a = (N>10 && N%2==0);
    int b = (N>15 && N%3==0);
    int c = (N%7==0);
   if(a){
       if (a && b && c){
           printf("The verdict for the number %d is: SUPERNATURAL",N);
           }
       else if(b || c){
           printf("The verdict for the number %d is: MIRACULOUS",N);
           }
       else if(a){
           printf("The verdict for the number %d is: MAGICAL",N);
           }
    }
    
    
    else if(b){
        if(a || c){
           printf("The verdict for the number %d is: MIRACULOUS",N);
           }
       else if(b){
           printf("The verdict for the number %d is: MAGICAL",N);
           }
    }
        
    else if(c){
        if(a || b){
           printf("The verdict for the number %d is: MIRACULOUS",N);
           }
       else if(c){
           printf("The verdict for the number %d is: MAGICAL",N);
           }
        }
    
    
    
    else{
        printf("The verdict for the number %d is: NORMAL",N);
    }
    
    return 0;
}