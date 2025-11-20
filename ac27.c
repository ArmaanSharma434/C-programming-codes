// WAP to print sum of first n natural numbers
#include <stdio.h>
int main()
{
    int x, sum;
    printf("Enter the number:");
    scanf("%d", &x);

    sum = x * (x + 1) / 2; // formula of sum of n natural numbers
    printf("Sum of first %d n natural numbers is: %d\n", x, sum);

    return 0;
}