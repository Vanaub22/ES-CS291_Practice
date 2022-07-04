#include <stdio.h>
int max_of_four(int,int,int,int);
int max(int,int);
int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",max_of_four(a,b,c,d));
    return 0;
}//end of main
int max(int a,int b)
{
    return((a>b)?a:b);
}//end of fn.
int max_of_four(int a,int b,int c,int d)
{
    return((max(a,b)>max(c,d))?max(a,b):max(c,d));
}//end of fn.