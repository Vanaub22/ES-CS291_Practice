//to perform insertion sort upon an user-input array
#include<stdio.h>
#include<math.h>
void InsertionSort(int* arr, int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}//end of while loop
		arr[j+1]=key;
	}//end of for loop
}//end of fn.
	void printArray(int arr[], int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			printf("\n");
			printf("%d",arr[i]);
		}//end of for loop
	}
	void main()
	{
		int arr[]={12,11,13,5,6};
		int n=sizeof(arr)/sizeof(arr[0]);
		printf("\nContent of the array before sorting:\n");
		printArray(arr,n);
		InsertionSort(arr,n);
		printf("\nContent of the array after sorting");
		printArray(arr,n);
	}
