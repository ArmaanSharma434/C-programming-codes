#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("You are eligible for vote");
        printf("\nGood luck!");
    }
    else{
        printf("You are not eligible for vote");
    return 0;
    }
}