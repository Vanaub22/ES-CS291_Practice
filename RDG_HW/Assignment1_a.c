//to calculate Simple and Compound Interest using user-input data
#include<stdio.h>
#include<math.h>
void main()
{
    float principal,rate,time,sinterest,cinterest;
    printf("\nEnter Principal amount(in Rs.):");
    scanf("%f",&principal);
    printf("\nEnter Rate(in percentage p.a.):");
    scanf("%f",&rate);
    printf("\nEnter Time period(in years):");
    scanf("%f",&time);
    sinterest=(principal*rate*time)/100.0;
    cinterest=(principal*pow((1+rate/100),time))-principal;
    printf("\nSimple Interest=Rs.%f/-\nCompound Interest=Rs.%f/-",sinterest,cinterest);
}//end of main