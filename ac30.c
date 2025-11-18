// WAP to print half range b/w a given range
// #include<stdio.h>
// int main()
// {
//     int spoint, epoint, half;
//     printf("Enter the start point & end point:");
//     scanf("%d %d", &spoint, &epoint);
//     while (spoint != epoint)
//     {
//         half = epoint / 2;
//         if(epoint == half){
//             printf("Even number %d \n", spoint);
//         }
//         continue;
//         spoint++;
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int spoint, epoint, half;
    printf("Enter the start point & end point:");
    scanf("%d %d", &spoint, &epoint);
     half = spoint + epoint / 2;
    while (spoint != half)
    {
       
        printf("number %d \n", spoint);
       
       
        spoint++;
    }
    return 0;
}