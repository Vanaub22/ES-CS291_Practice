//to find the gcd of two numbers by recursion via long division method
#include<stdio.h>
int gcd(int,int);
int gcd(int x, int y)
{
    return((y%x==0)?(x):gcd(y%x,x));
}//end of fn.
void main()
{
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Required G.C.D of %d and %d is: %d",a,b,gcd(a,b));
}//end of main