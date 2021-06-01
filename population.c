#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // variables
    long start;
    long end;
    long current;
    int years;

    //Prompt for start size
    do
    {
        start = get_long("Enter starting population: ");
    }

    while (start < 9 || start < 1);

    //Prompt for end size
    do
    {
        end = get_long("Enter ending population: ");
    }

    while (start > end);

    //Setting values
    current = start;
    years = 0;
    //Calculate number of years until we reach threshold
    while (current < end)
    {
        current = (current + ((current / 3) - (current / 4)));
        years++;
    }

    //Print number of years
    printf("Years: %i\n", years);
}