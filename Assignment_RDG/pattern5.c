// Q5. to display the pattern
#include <stdio.h>
void pattern(int);
void pattern(int n)
{
    int i, j, l, k = 0;
    printf("\nThe required pattern upto %d rows:\n",n);
    for (i = 1; i <= n; i++)
    {
        for (l = 1; l <= (n - i); l++)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            k++;
            printf("%d ", k);
        } // end of inner for loop
        printf("\n");
    } // end of outer for loop
} // end of fn.
void main()
{
    int rows;
    printf("\nEnter the number of rows:");
    scanf("%d",&rows);
    pattern(rows);
}//end of main