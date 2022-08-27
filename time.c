/*
Bishal Giri
This is a program that computes the time to arrive at a destination given the distance and current car speed.
*/

#include<stdio.h>

void main()
{
//Declaring variables for the distance and the car speed
    float distance;
    float car_speed;
//Provides basic information about the program and reads the user for required variables
    printf("This program will compute the travel time. \n");
    printf("Enter the distance (miles) : ");
//Reads the user for the distance
    scanf("%f", &distance);
    printf("Enter the car speed (miles/hour) : ");
//Reads the user for the speed of the vehicle
    scanf("%f", &car_speed);
//Declaration and Initialization of float variable traveltime with the formula
    float traveltime = distance/car_speed;
//Printing the final result of the calculation in the line above
    printf("Travel time: %f", traveltime);
}
