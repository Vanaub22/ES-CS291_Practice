// to check if user-input number is prime, composite or unique
#include <stdio.h>
int main()
{
    int num, copy, fact = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    copy = num;
    while (copy >= 1)
    {
        if (num % copy == 0)
            fact++;
        copy--;
    } // end of while loop
    if (fact == 1)
        printf("Unique Number...1\n");
    else if (fact == 2)
        printf("%d is a Prime number\n", num);
    else
        printf("%d is a Composite number\n", num);
    return 0;
} // end of main