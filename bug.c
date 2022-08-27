/*
Bishal Giri
This program will ask the user the number of sides in a polygon and prints it back.
*/

#include <stdio.h>

int main(void)
{
    int sides;
    printf("How many sides does your polygon have? ");
    scanf("%d", &sides); //The bug was the & symbol
    printf("Your answer was: %d", sides);
    return 0;
}
