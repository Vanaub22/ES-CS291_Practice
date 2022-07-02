#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void quicksort(char**,int,int);
void swap(char**,int,int);
void input(char**,int);
void printArray(char **,int); 
void input(char* v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the string %d: ",i+1);
        fflush(stdin);
        scanf("%[^\n]s",v[i]);
    }//end of for loop
}//end of fn.
void quicksort(char *v[],int left,int right)
{
    int last,i;
    if(left>=right)
    return;
    last=left;
    swap(v,left,(left+right)/2);
    for(i=left+1;i<=right;i++)
    {
        if(strcmpi(v[i],v[left])<0)
        swap(v,++last,i);
    }
    swap(v,last,left);
    quicksort(v,left,last-1);
    quicksort(v,last+1,right);
}
void swap(char *v[],int i,int j)
{
    char *t=v[i];
    v[i]=v[j];
    v[j]=t;
}
void printArray(char *v[], int size) 
{ 
	int i;
	for(i=0; i < size; i++) 
	printf("\n%s ",v[i]);
}//end of fn.
void main()
{
    char **v,*p;
    int n;
    printf("\nEnter the number of elements in the array:");
    scanf("%d",&n);
    v=(char**)malloc(n*sizeof(char*));
    input(v,n);
	printf("\nContent of the array before sorting: ");
	printArray(v,n);
	printf("\nContent of the array after sorting: ");
    quicksort(v,0,n-1);
	printArray(v,n);
}//end of main
