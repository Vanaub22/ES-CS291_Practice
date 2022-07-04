#include <stdio.h>
#include <stdlib.h>
void merge_sort(int*,int,int);
void merging(int*,int,int,int);
void main()
{
	int i;
	int a[]={4,2,5,7,3,8,1,9,0,10,6,13,17,15};
	merge_sort(a,0,14);
	printf("\nSorted list: \n");
	for(i=0;i<14;i++)
	printf(" %d  ",a[i]);
	printf("\n");
}//end of main
void merge_sort(int *a,int left,int right)
{
	int mid;
	if(left!=right)
	{
	mid=(left+right)/2;
	merge_sort(a,left,mid);
	merge_sort(a,mid+1,right);
	merging(a,left,mid,right);
	}//end of if-block
}//end of merge_sort
void merging(int*a,int left,int mid,int right)
{
	int i,j,aux[30],k=0;
	for(i=left,j=mid+1;i<=mid&&j<=right;k++)
	{
		if(a[i]<a[j])
		aux[k]=a[i++];
		else
		aux[k]=a[j++];
	}//end of for loop
	for(;i<=mid;i++)
	aux[k++]=a[i];
	for(;j<=right;j++)
	aux[k++]=a[j];
	for(i=0;i<k;i++)
	a[left++]=aux[i];
}//end of fn.
