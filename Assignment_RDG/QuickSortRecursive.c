//to implement quick sort technique using recursion
#include<stdio.h>
#include<stdlib.h>
void swap(int*,int,int);
void recursiveQS(int*,int,int);
void display(int*,int);
void swap(int* a,int i,int j)
{
    int t;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
}//end of fn.
void recursiveQS(int* a,int left,int right)
{
    int i,last;
    if(left>=right)
    return;
    last=left;
    swap(a,left,(left+right)/2);
    for(i=left+1;i<=right;i++)
    if(a[left]>a[i])
    swap(a,++last,i);
    swap(a,last,left);
    recursiveQS(a,left,last-1);
    recursiveQS(a,last+1,right);
}//end of fn.
void display(int* a,int n)
{
    int i;
    printf("\nList of elements:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}//end of fn.
void main()
{
    int a[11]={7,5,9,2,4,8,1,3,6,2,4};
    recursiveQS(a,0,10);
    printf("\nAfter sorting...");
    display(a,11);
}//end of main

