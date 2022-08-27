/*
Bishal Giri
Sample program that helps the company find the price their customer has to pay given the number of windows and their respective dimensions
*/

#include<stdio.h>

int main()
{
    //Declare variables for the user to input about their order
    int window_width;
    int window_height;
    int window_number;
    printf("This program calculates area and cost of windows given size and count. \n");
    printf("The price for one square foot of new window is 50 $ \n");
    printf("Enter window width (in feet): ");

    //Read the user for the no.of windows and its dimensions
    scanf("%d", &window_width);
    printf("Enter window height (in feet): ");
    scanf("%d", &window_height);
    printf("Enter number of windows: ");
    scanf("%d", &window_number);

    //Declaration + Initialization of variables followed by Calculations based on numerical data values provided earlier
    int window_area = window_width*window_height;
    int total_window_area = window_area*window_number;
    int total_client_pay = total_window_area*50;

    //Finally printing the total value the customer has to pay for their order
    printf("Your total is: $%d, for %d sq ft.", total_client_pay, total_window_area);
}
