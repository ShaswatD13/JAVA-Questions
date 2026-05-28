/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6};
    int *p = arr;

    int x = *p++ + *p;

    printf("%d %d", x, *p);

    return 0;
}


// 6 4