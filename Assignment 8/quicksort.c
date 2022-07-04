#include<stdio.h>
void swap(int a[], int i , int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}//end of fn.
void quicksort(int a[], int left, int right)
{
	int i,pivot;
	if(left>=right)
	return;
	pivot=left;
	swap(a,left, (left+right)/2);
	for(i=left+1;i<=right;i++)
	if(a[left]>a[i])
	swap(a,++pivot,i);
	swap(a,pivot, left);
	quicksort(a, left, pivot-1);
	quicksort(a, pivot+1,right);
}//end of fn.
void display(int a[], int n)
{
	int i;
	printf("List of elements are :");
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d  ", a[i]);
}//end of fn.
void main()
{
int A[11]={7, 5, 9 , 2 , 4, 8, 1 ,6,3 ,2, 4};
quicksort(A,0,10);
display(A,11);
}//end of main

