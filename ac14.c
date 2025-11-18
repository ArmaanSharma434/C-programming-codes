#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number:");
    scanf("%d",&x);
    if((x/2)*2==x)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}