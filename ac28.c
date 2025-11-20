#include <stdio.h>
int main()
{
    int spoint, epoint, even;
    printf("Enter the start point & end point:"); //# WAP to print even number b/w given range
    scanf("%d %d", &spoint, &epoint);
    while (spoint != epoint)
    {
        even = spoint % 2;
        if (even == 0)
        {
            printf("Even number: %d\n", spoint);
        }
        spoint++;
    }
    return 0;
    }