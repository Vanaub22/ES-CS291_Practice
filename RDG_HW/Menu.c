// to write a menu-driven program and perform various tasks
#include <stdio.h>
int gcd(int, int);
int fact(int);
int fibo(int);
int combination(int, int);
void main()
{
    int choice, num, num1, num2, n, r, terms, i;
    printf("\n1.Factorial of number.\n2.GCD of 2 numbers.\n3.Combination Coefficient generation.\n4.Fibonacci Number generation.");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("\nEnter the number:");
        scanf("%d", &num);
        printf("\nThe required factorial of the number: %d!=%d", num, fact(num));
        break;
    } // end of case 1
    case 2:
    {
        printf("\nEnter the numbers:");
        scanf("%d %d", &num1, &num2);
        printf("\nThe required GCD of the numbers is %d", gcd(num1, num2));
        break;
    } // end of case 2
    case 3:
    {
        printf("\n Enter the value of n:");
        scanf("%d", &n);
        printf("\n Enter the value of r:");
        scanf("%d", &r);
        printf("\nResult:C(%d,%d)=%d", n, r, combination(n, r));
        break;
    } // end of case 3
    case 4:
    {
        printf("\nEnter the number of terms:");
        scanf("%d", &terms);
        printf("\nThe fibonacci series upto %d terms is as follows:", terms);
        for (i = 0; i < terms; i++)
            printf("\t%d", fibo(i));
        break;
    } // end of case 4
    default:
    {
        printf("INVALID INPUT");
    } // end of default case
    } // end of switch case
} // end of main
int fact(int x)
{
    return ((x == 0) ? 1 : x * fact(x - 1));
} // end of fn.
int gcd(int x, int y)
{
    return ((y % x == 0) ? (x) : gcd(y % x, x));
} // end of fn.
int combination(int n, int r)
{
    if (r == 0 || r == n)
        return (1);
    else
        return (combination(n - 1, r - 1) + combination(n - 1, r));
} // end of fn.
int fibo(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    else
        return (fibo(n - 2) + fibo(n - 1));
} // end of fn.
