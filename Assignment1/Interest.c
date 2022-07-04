//to calculate simple and compound interest using user-input data
#include<stdio.h>
#include<math.h>
void Interest(float, float, float);
void Interest(float principal, float rate, float time)
{
	float sinterest,cinterest;
	sinterest=(principal*rate*time)/100;
	cinterest=principal*(pow(1+(rate/100),time))-principal;
	printf("\nRequired value of simple interest is Rs. %f",sinterest);
	printf("\nRequired value of compound interest is Rs. %f",cinterest);
}//end of fn.
void main()
{
	float principal,rate,time;
	printf("\nEnter the principal amount(in Rs.):");
	scanf("%f",&principal);
	printf("\nEnter the rate(in percentage per annum):");
	scanf("%f",&rate);
	printf("\nEnter the time period(in years):");
	scanf("%f",&time);
	Interest(principal,rate,time);
}//end of main
