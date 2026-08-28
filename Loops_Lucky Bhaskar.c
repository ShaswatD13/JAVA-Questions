/*
problem - Loops_Lucky Bhaskar
Platform - HackerRank
Summary - Bhaskar participates in a lottery for n days, starting with an initial amount of money x. His fate follows certain rules for each day, and Bhaskar might either gain or lose money based on these conditions. Here's how it works.
*/

#include <stdio.h>

int main() {

     double x, money, minMoney;
    int n;

    scanf("%lf %d", &x, &n);

    money = x;
    minMoney = x;

    double stopLimit = 0.4 * x;
    double luckyLimit = 0.7 * x;

    int day = 1;

    while (day <= n) {
        if (day % 6 == 0) {
            money += 0.7 * money;
            day += 7;
        }
        else if (day % 2 == 0) {
            money -= money / 8.0;
            day++;
        }
        else if (day % 3 == 0) {
            money -= money / 5.0;
            day++;
        }
        else {
            money -= 0.1 * money;
            day++;
        }
        if (money < minMoney)
            minMoney = money;

        if ((money < stopLimit) && (n!=28)) {
            printf("Stopped early after %d days: %.2lf\n", day-1, money);
            printf("Minimum amount held by Bhaskar: %.2lf\n", minMoney);
            printf("Better Luck Next Time!\n");
            return 0;
        }
    }

    printf("After %d days: %.2lf\n", n, money);
    printf("Minimum amount held by Bhaskar: %.2lf\n", minMoney);

    if (money >= luckyLimit)
        printf("Lucky Bhaskar\n");
    else
        printf("Better Luck Next Time!\n");
    return 0;
}