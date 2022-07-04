//to print Pascal's traingle in inverted fashion
#include<stdio.h>
#define MAX 5
void PascalTriangle(int);
void Invert(int C[int x][int y]);
void PascalTriangle(int N)
{
    int C[MAX][MAX],k,n,r;
    for(n=0;n<=(N-1);n++)
    {
        printf("\n");
        for(k=1;k<=(N-n-1);k++)
        printf(" ");
        for(r=0;r<=n;r++)
        {
            C[n][r]=(r==0||r==n)?1:(C[n-1][r-1]+C[n-1][r]);
            printf("%2d",C[n][r]);
        }//end of inner for loop
    }//end of outer for loop
}//end of fn.
void Invert(int C[int N][int N])
{
    int inverted[N][N];
    for(int i=0;i<=(N-1);i++)
    for(int j=0;j<=(N-1);j++)
    inverted[N-1-i][N-1-j]=C[i][j];
        for(int n=0;n<=(N-1);n++)
    {
        printf("\n");
        for(int k=1;k<=(N-n-1);k++)
        printf(" ");
        for(int r=0;r<=n;r++)
            printf("%2d",C[n][r]);
    }//end of outer for loop
}//end of fn.
}//end of fn.
void main()
{
    int N;
    printf("\nEnter the number of rows:");
    scanf("%d",&N);
    PascalTriangle(N);
}//end of main