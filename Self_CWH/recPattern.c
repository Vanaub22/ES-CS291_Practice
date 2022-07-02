//to print a pattern upto n lines using recursive functions
#include<stdio.h>
void pattern(int n);
void pattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }//end of if block
    pattern(n-1);
    for(int i=1;i<=(2*n-1);i++)
    printf("*");
    printf("\n");
}//end of fn.
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The required pattern upto %d lines is as follows:\n",n);
    pattern(n);
}//end of main