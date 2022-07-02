//to check is user-input number is a happy number
#include<stdio.h>
#include<math.h>
int sqdig_sum(int);
int sqdig_sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=((int)(pow((n%10),2)));
        n/=10;
    }//end of while loop
    return(sum);
}//end of fn.
int main()
{
    int num,copy;
    printf("Enter the number:\n");
    scanf("%d",&num);
    copy=num;
    while(num>=10)
    num=sqdig_sum(num);
    if(num==1)
    printf("%d is a Happy Number.",copy);
    else
    printf("%d is not a Happy number.",copy);
}//end of main