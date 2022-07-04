#include <stdio.h>
int binarysearch(int *arr,int item,int left,int right)
{
	int mid;
	if(right<=left)
	return(item>arr[left])? (left+1):left;
	mid=(left+right)/2;
	if(item==arr[mid])
	return mid+1;
	if(item>arr[mid])
	return binarysearch(arr,item,mid+1,right);
	else 
	return binarysearch(arr,item,left,mid-1);
}//end of fn.
void Binaryinsertion(int arr[ ],int n)
{
	int i,loc,j,key,selected;
	for(i=1;i<n;++i)
	{
		j=i-1;
		key=arr[i];
		loc=binarysearch(arr,key,0,j);
		while(j>=loc)
		{
			arr[j+1]=arr[j];
			j--;
		}//end of for loop
	arr[j+1]=key;
	}//end of for loop
}//end of fn.
int main( )
{
	int arr[ ]={12,56,1,67,45,8,82,16,63,23};
	int n,i;
	n=sizeof(arr)/sizeof(arr[0]);
	Binaryinsertion(arr,n);
	printf("sorted array is : \n");
	for(i=0;i<n;i++)
	printf(" %d ",arr[i]);
	return 0;
}//end of main
