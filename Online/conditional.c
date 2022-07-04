#include <stdio.h>
char *num(int);
int main() 
{
    int a,b,i;
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        if(i>=1&&i<=9)
        printf("\n%s",num(i));
        else
        printf((i%2==0)?("\neven"):("\nodd"));
    }//end of for loop
    return 0;
}//end of main
char *num(int num)
{
    if(num==1)
    return("one");
    else if(num==2)
    return("two");
    else if(num==3)
    return("three");
    else if(num==4)
    return("four");
    else if(num==5)
    return("five");
    else if(num==6)
    return("six");
    else if(num==7)
    return("seven");
    else if(num==8)
    return("eight");
    else if(num==9)
    return("nine");
    else
    return("\o");
}//end of main

