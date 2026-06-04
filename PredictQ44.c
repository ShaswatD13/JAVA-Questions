/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 5;
    printf("%lu", sizeof(a++));
    printf(" %d", a);
    return 0;
}


// 4 5