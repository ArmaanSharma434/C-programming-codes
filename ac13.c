#include<stdio.h>
int main()
{
    int num;
    ("Enter the value of num: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("%d is even number",num);
    }
    return 0;
}