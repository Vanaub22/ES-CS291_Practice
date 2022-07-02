//to check if chef passes the exam
#include<stdio.h>
void main()
{
    int test,n,x,p;
    scanf("%d",&test);
    while(test>0)
    {
        test--;
        scanf("%d %d %d",&n,&x,&p);
        if(((x*3)-((n-x)*1))>=p)
        printf("\nPass");
        else
        printf("\nFail");
    }
}