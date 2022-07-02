//to print the multiplication table of user-input number n
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number for which you need the multiplication table:\n");
    scanf("%d",&num);
    printf("Multiplication table of %d\n",num);
    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }//end of for loop
    return 0;
}//end of main