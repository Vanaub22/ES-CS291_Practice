//to find the Peterson numbers from 1-1000
#include<stdio.h>
int fact(int n);
int fact(int n)
{
    int fact=1;
    while(n>0)
    {
        fact*=n;
        n--;
    }//end of while loop
    return(fact);
}//end of fn.
int main()
{
    int num,sum,i;
    printf("\nThe Peterson numbers from 1-1000 are:");
    for(i=1;i<=1000;i++)
    {
    num=i;
    sum=0;
    while(num>0)
    {
        sum+=(fact(num%10));
        num/=10;
    }//end of while loop
    if(sum==i)
    printf("\n%d",i);
    }//end of for loop
    return 0;
}//end of main