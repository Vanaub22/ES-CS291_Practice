//to find the peterson numbers in user-input range
#include<stdio.h>
int peterson(int);
int fact(int);
int fact(int num)
{
	int fact=1;
	if(num==0)
	return(1);
	while(num>0)
	{
	fact*=(num%10);
	num--;
	}//end of while loop
	return(fact);
}//end of fn.
int peterson_check(int n)
{
	int num=n,sum=0;
	while(n>0)
	{
		sum+=fact(n%10);
		n/=10;
	}//end of while loop
	return(sum==num);
}//end of fn.
void main()
{
	int ll,ul,i;
	printf("\nEnter the range...");
	printf("\nEnter the lower limit:");
	scanf("%d",&ll);
	printf("\nEnter the upper limit:");
	scanf("%d",&ul);
	printf("\nThe Peterson numbers from %d-%d are: ",ll,ul);
	for(i=ll;i<=ul;i++)
	{
		if(peterson_check(i))
		printf("%d ",i);
	}//end of for loop
}//end of main