//WAP to print the numbers in reverse order
#include<stdio.h>
int main()
{
    int n, rev = 0;
    printf("Enter any number:");
    scanf("%d", &n);

    while(n!=0){
        int rem = n%10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reverse number is: %d\n", rev);
    return 0;
}