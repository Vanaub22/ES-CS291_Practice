//to demonstrate the use of pointers by swapping values using call by reference
#include<stdio.h>
int swap(int* a, int* b);
int swap(int* a, int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}//end of fn.
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Values before swapping: x=%d and y=%d\n",x,y); 
    swap(&x,&y);
    printf("Values after swapping: x=%d and y=%d\n",x,y);    
    return 0;
}//end of main