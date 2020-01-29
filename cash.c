#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    
    int coins = round(dollars * 100);
    int coins1 = 0;
    while (coins >= 25)
    {
        coins -= 25;
        coins1++;
    }
    while (coins >= 10)
    {
        coins -= 10;
        coins1++;
    }
    while (coins >= 5)
    {
        coins -= 5;
        coins1++;
    }
    while (coins >= 1)
    {
        coins -= 1;
        coins1++;
    }
    printf("%i\n", coins1);
}
