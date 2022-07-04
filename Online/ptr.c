#include<stdio.h>
void update(int*,int*);
void update(int *a,int *b) 
{
    int sum,dif;
    sum=*a+*b;
    dif=*a-*b;
    *a=sum;
    *b=((dif>=0)?(dif):(-dif));
}//end of fn.
int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}//end of main