//to find if chef can serve all of his friends
#include<stdio.h>
void main()
{
    int test,n,x,k;
    scanf("%d",&test);
    while(test>0)
    {
        test--;
        scanf("%d %d %d",&n,&x,&k);
        if((n*x)<=k)
        printf("\nYes");
        else
        printf("\nNo");
    }
}