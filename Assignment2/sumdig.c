//to find the sum of the digits of a user-input number
#include<stdio.h>
int sumdig(int);
int sumdig(int num)
{
	int sum=0;
	if(num==0)
	return(1);
	while(num>0)
	{
	sum+=(num%10);
	num/=10;
	}//end of while loop
	return(sum);
}//end of fn.
void main()
{
	int n;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	printf("\nRequired sum of digits of %d is %d",n,sumdig(n));
}//end of main
