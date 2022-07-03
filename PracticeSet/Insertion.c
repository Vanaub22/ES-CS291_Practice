//to perform insertion sort upon an user-input array
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void InsertionSort(int*,int);
void printArray(int*,int);
void input(int*,int);
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
void printArray(int* arr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%d",arr[i]);
	}//end of while loop
}//end of fn.
void input(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }//end of for loop
}//end of fn.
void main()
{
    int *arr,n;
    printf("\nEnter the number of elements in the array:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    input(arr,n);
	printf("\nContent of the array before sorting:");
	printArray(arr,n);
	InsertionSort(arr,n);
	printf("\nContent of the array after sorting");
	printArray(arr,n);
}//end of main
