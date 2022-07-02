//to check if an integer is a palidrome without converting it to string
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int countdig(int);
bool checkpal(int);
void main()
{
    int x,copy;
    printf("\nEnter the integer: ");
    scanf("%d",&x);
    checkpal(x)?printf("\n%d is a Palindrome.",x):printf("\n%d is not a Palindrome.",x);
}//end of main
bool checkpal(int num)
{
    int copy=num,pal=0,pv=pow(10,(countdig(num)-1));
    while(copy>0)
    {
        pal+=((copy%10)*pv);
        pv/=10;
        copy/=10;
    }//end of while loop
    return(pal==num);
}//end of fn.
int countdig(int num)
{
    int dig=0;
    while(num>0)
    {
        dig++;
        num/=10;
    }//end of while loop
    return(dig);
}//end of fn.