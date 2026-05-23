/*
Problem - structure Book with members.
Platform - HackerRank
Summary - Write a C program to define a structure Book with members: book ID, title, author, and price. Read the details of n books and display the details of the most expensive book.
*/

#include <stdio.h>

int main()
{
    struct student{
        int book_id;
        char title[2];
        char author[2];
        int price;
    };
    struct student s[2];
    
    for(int i = 0;i < 2;++i)
    {
        scanf("%d %s %s %d",&s[i].book_id,s[i].title,s[i].author,&s[i].price);
    }
    
    int max = s[0].price;
    int flag = 0;
    for(int i = 0;i < 2;++i)
    {
        if(max < s[i].price)
        {
            max = s[i].price;
            flag = i;
        }
    }
    printf("\n");
    printf("%d",max);

    return 0;
}