/*
Write a C program to input a day number from 1 to 7 and display the day name using switch
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int day;
    puts("Enter day:");
    scanf("%d",&day);
    switch(day){
case 0:
    printf("Saturday");
    break;
case 1:
    printf("Sunday");
    break;
case 2:
    printf("Monday");
    break;
case 3:
    printf("Tuesday");
    break;
case 4:
    printf("Wednesday");
    break;
case 5:
    printf("Thursday");
    break;
case 6:
    printf("Friday");
    break;
default:
    printf("not day");
    break;

    }
}
