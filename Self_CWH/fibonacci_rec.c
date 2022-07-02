//to  calculate the nth term of fibonacci series using recursion
#include<stdio.h>
int fibo(int n);
int fibo(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return(fibo(n-1)+fibo(n-2));
}//end of fn.
int main()
{
    int n;
    printf("The program generates the nth term of the fibonacci series.\nEnter the value of n:\n");
    scanf("%d",&n);
    printf("The %dth term of the fibonacci series is %d.\n",n,fibo(n));
    return 0;
}//end of main