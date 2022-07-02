//to multiply matrices using given structured definition of matrix
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
typedef struct
{
    int n_row,n_col;
    int A[MAX][MAX];
}MATRIX;
void input(MATRIX*);
void display(MATRIX);
MATRIX multiply(MATRIX, MATRIX);
void main()
{
    MATRIX M1,M2;
    input(&M1);
    input(&M2);
    display(multiply(M1,M2));    
}//end of main
void input(MATRIX *p)
{
    int i,j;
    printf("\nEnter the number of rows:");
    fflush(stdin);
    scanf("%d",&p->n_row);
    printf("\nEnter the number of columns:");
    fflush(stdin);
    scanf("%d",&p->n_col);
    for(i=0;i<p->n_row;i++)
    {
        for(j=0;j<p->n_col;j++)
        {
            printf("\nEnter element[%d][%d]:",i+1,j+1);
            fflush(stdin);
            scanf("%d",&p->A[i][j]);
        }//end of inner for loop
    }//end of outer for loop
}//end of fn.
void display(MATRIX M)
{
    int i,j;
    for(i=0;i<M.n_row;i++)
    {
        for(j=0;j<M.n_col;j++)
        printf("%2d",M.A[i][j]);
        printf("\n");
    }//end of outer for loop
}//end of fn.
MATRIX multiply(MATRIX M1, MATRIX M2)
{
    MATRIX T;
    int i,j,k;
    if(M1.n_col!=M2.n_row)
    {
        printf("\nMatrix multiplication is impossible");
        exit(1);
    }//end of if block
    T.n_row=M1.n_row;
    T.n_col=M2.n_col;
    printf("\nThe product of the given matrices is as follows\n"); 
    for(i=0;i<T.n_row;i++)
    {
        for(k=0;k<T.n_col;k++)
        {
            T.A[i][k]=0;
            for(j=0;j<M1.n_col;j++)
            T.A[i][k]+=M1.A[i][j]*M2.A[j][k];
        }//end of inner for loop
    }//end of outer for loop
    return(T);
}//end of fn.
