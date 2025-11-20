//WAP to swap 2 numbers
#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    printf("Before swapping X: %d Y: %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping X: %d and Y: %d\n", x, y);
}
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    printf("Before swapping a: %d b: %d\n", a, b);
    swap(a, b);
    printf("After swappiing a: %d b: %d\n", a, b);
    return 0;
}
