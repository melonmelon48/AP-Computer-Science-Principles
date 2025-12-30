#include <cs50.h>
#include <stdio.h>

// Asks user for change owed
int get_change(void);

// Total coins neded
int count_coins(int cents);

int main(void)
{
    int cents = get_change();
    int coins = count_coins(cents);
    printf("%i\n", coins);
}

// Keep asking until user does not give negative number
int get_change(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    return change;
}

// Calculations
int count_coins(int cents)
{
    int coins = 0;

    // quarters
    coins += cents / 25;
    cents = cents % 25;

    // dimes
    coins += cents / 10;
    cents = cents % 10;

    // nickels
    coins += cents / 5;
    cents = cents % 5;

    // pennies
    coins += cents;

    return coins;
}
