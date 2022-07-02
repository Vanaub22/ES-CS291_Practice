// to find the factorial of user input number using while loops
#include <stdio.h>
int main()
{
    int num, copy, fact = 1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    copy = num;
    while (copy > 0)
    {
        fact = fact * copy;
        copy--;
    } // end of while loop
    printf("The calculated factorial is %d!=%d\n",num,fact);
    return 0;
} // end of main