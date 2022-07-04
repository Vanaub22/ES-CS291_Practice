//to find the Armstrong numbers within user-input range of natural numbers
#include<stdio.h>
#include<math.h>
void Armstrong(int);
void Armstrong(int range)
{
    int i,copy,sum;
    printf("\nThe Armstrong numbers within the range of 0-%d are: ",range);
    for(i=1;i<=range;i++)
    {
        sum=0;
        copy=i;
        while(copy>0)
        {
            sum+=pow((copy%10),3);
            copy/=10;
        }//end of while loop
        if(sum==i)
        printf("%d ",i);
    }//end of for loop
}//end of fn.
void main()
{   
    int range;
    printf("\nEnter the range:");
    scanf("%d",&range);
    Armstrong(range);
}//end of main