/*to take an integer N and then perform an opernation on it to change N to N/K
*where K is a divisor of N and has exactly four divisors.
*When no more operations can be performed, the number of divisors of resulting N is displayed.
*/
#include<stdio.h>
#include<math.h>
int countdiv(int);
int operation_res(int);
void main()
{
    int test,N;
    printf("\nEnter the number of test cases: ");
    scanf("%d",&test);
    while(test>0)
    {
        printf("\nEnter the number(N): ");
        scanf("%d",&N);
        N=operation_res(N);
        printf("\nThe resultant value of N is: %d",N);
        printf("\nThus, the resultant value N=%d has %d divisors.",N,countdiv(N));
        test--;
    }//end of while loop
}//end of main
int countdiv(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }//end of for loop
    return(count);
}//end of fn.
int operation_res(int num)
{
    int i;
    for(i=num-1;i<=1;i--)
    {
        if((countdiv(i)==4)&&(num%i==0))
        operation_res(num/i);
    }//end of for loop
    return(num);
}//end of fn.