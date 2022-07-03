//to perform selection sort on user-input array
#include <stdio.h>
#include<stdlib.h>
void input(int*,int);
void swap(int*,int*);
void selection(int*,int);
void printArray(int*,int);
void input(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }//end of for loop
}//end of fn.
void swap(int *xp, int *yp)
{
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp;
}//end of fn.
void selection(int *arr, int n)
{ 
int i, j, min_idx; 
for(i = 0; i < n-1; i++)
{ 
	min_idx = i;
	for(j = i+1; j < n; j++) 
	if(arr[j] < arr[min_idx]) 
	min_idx = j;
	swap (&arr[min_idx], &arr[i]); //swap(arr+min_idx,arr+i); 
}
} 
void printArray(int *arr, int size) 
{ 
	int i;
	for(i=0; i < size; i++) 
	printf("%d ", arr[i]);
	printf("\n");
}//end of fn.
void main()
{
    int *arr,n;
    printf("\nEnter the number of elements in the array:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    input(arr,n);
	printf("\nContent of the array before sorting: ");
	printArray(arr,n);
	selection(arr,n);
	printf("\nContent of the array after sorting: ");
	printArray(arr,n);
}//end of main
