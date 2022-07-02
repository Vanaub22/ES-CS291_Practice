//to calculate the sum of first n natural numbers using recursion
#include<stdio.h>
int sum(int);
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return(sum(n-1)+n);
}//end of fn.
int main()
{
    int n;
    printf("The program generates the sum of first n natural numbers.\nEnter the value of n:\n");
    scanf("%d",&n);
    printf("The sum of the first %d natural numbers is %d.\n",n,sum(n));
    return 0;
}//end of main