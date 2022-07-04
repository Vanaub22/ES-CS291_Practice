//to check if user-input year is a leap year or not
#include<stdio.h>
void main()
{
    int year;
    printf("\nEnter the year:");
    scanf("%d",&year);
    if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
    printf("The year %d is a leap year.",year);
    else
    printf("The year %d is not a leap year.",year);
}//end of main