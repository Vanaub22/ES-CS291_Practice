#include <stdio.h>
#include <stdlib.h>//contains functions for DMA
void input(int**,int,int);
int** transpose(int **,int,int);
void display(int**mat,int R,int C);
void main()
{
	int i,row, col;
	int**A,**T;
	printf("\nEnter the number of rows of the matrix:");
	scanf("%d",&row);
	printf("\nEnter the number of columns of the matrix:");
	scanf("%d",&col);
	A=(int**)malloc(row*sizeof(int*));
	for(i=0;i<row;i++)
	*A=(int*)malloc(col*sizeof(int));
	input(A,row,col);
	T=(int**)malloc(col*sizeof(int*));
	for(i=0;i<col;i++)
	*T=(int*)malloc(row*sizeof(int));
	T=transpose(A,row,col);
	printf("\nThe original matrix is as follows:");
	display(A,row,col);
	printf("\nThe transpose of the user-input matrix is as follows:");
	display(T,col,row);
	free(A);
	free(T);
}///end of main
void input(int **A,int R,int C)
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("\nEnter the element at row %d and column %d",i,j);
			scanf("%d",&A[i][j]);
		}
	}
}//end of fn.
int** transpose(int **A,int row,int col)
{
	int i,j,**T;
	for(i=0;i<col;i++)
	for(j=0;j<row;j++)
	T[i][j]=A[j][i];
	return(T);
}//end of fn.
void display(int**mat,int R,int C)
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		printf("%d	",mat[i][j]);
		printf("\n");
	}
}//end of fn.