// Q8. to display the pattern with user-input central number
#include<stdio.h>
void pattern(int);
void pattern(int num)
{
    int i,j,k,l;
    printf("\nRequired pattern for central element=%d is as follows:\n",num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=(num-i);j++)
        printf("  ");
        for(k=1;k<=i;k++)
        printf("%d ",k);
        for(l=i-1;l>0;l--)
        printf("%d ",l);
        printf("\n");
    }//end of outer for loop
    for(i=1;i<=(num-1);i++)
    {
        for(j=1;j<=i;j++)
        printf("  ");
        for(k=1;k<=(num-i);k++)
        printf("%d ",k);
        for(l=(num-i-1);l>0;l--)
        printf("%d ",l);
        printf("\n");
    }//end of outer for loop
}//end of fn.
void main()
{
    int cn;
    printf("\nEnter the central number:");
    scanf("%d",&cn);
    pattern(cn);
}//end of main