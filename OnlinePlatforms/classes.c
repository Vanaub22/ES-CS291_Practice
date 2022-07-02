//calculate amount of money that chef has to pay for classes
#include<stdio.h>
void main()
{
    int test,x,y;
    scanf("%d",&test);
    while(test>0)
    {
        test--;
        scanf("%d %d",&x,&y);
        printf("%d\n",x*y);
    }
}