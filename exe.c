#include<stdio.h>
int main()
{
    float phy, chem, sum;
    printf("Enter the marks for 2 subjects:\n");
        scanf("%f %f", &phy, &chem);
    sum = (30.0/100) * phy + (70.0/100) * chem;
    printf("Total marks are: %.2f\n", sum);
    return 0;
}