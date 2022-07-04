//to sort a user-input array using bubble-sort technique
#include<stdio.h>
#define MAX 100
void input_elements(int*,int);
void display(int*,int);
void Bubble_sort(int*,int);
void Bubble_sort(int* a,int n)
{
    int i,j,temp,flag;
    for(i=0,flag=1;i<(n-1)&&flag;i++)
    {
        for(j=0,flag=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                flag=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }//end of if-block
        }//end of inner for loop
    }//end of outer for loop
}//end of fn.
void input_elements(int* a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&a[i]);
    }//end of for loop
}//end of fn.
void display(int* a,int n)
{
    int i;
    printf("The sorted array is as follows:\n");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}//end of fn.
void main()
{
    int a[MAX],N;
    printf("\nEnter the number of elements in the array:");
    scanf("%d",&N);
    input_elements(a,N);
    Bubble_sort(a,N);
    display(a,N);
}//end of main