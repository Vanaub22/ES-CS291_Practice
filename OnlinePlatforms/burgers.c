//to find the number of burgers that chef can make
#include<stdio.h>
int findburgers(int,int);
void main()
{
    int i=0,test,bun,patty;
    scanf("%d",&test);
    while(test>0)
    {
        scanf("%d %d",&bun,&patty);
        printf("\n%d",findburgers(bun,patty));
        test--;
    }
}
int findburgers(int bun,int patty)
{
    int burger=0;
    while(bun>0&&patty>0)
    {
        burger++;
        bun--;
        patty--;
    }
    return(burger);
}