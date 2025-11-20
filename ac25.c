#include<stdio.h>
int main()
{
    char colour;
    printf("Enter the letter: ");
    scanf("%c", &colour);

    switch(colour)
    {
        case 1:
            case 'r':
            case 'R':
            printf("Red\n");
            break;
        case 2:
            case 'g':
            case 'G':
            printf("Green\n");
            break;
        case 3:
            case 'w':
            case 'W':
            printf("White\n");
            break;
        case 4:
            case 'b':
            case 'B':
            printf("Blue or black\n");
            break;
        case 5:
            case 'p':
            case 'P':
            printf("Pink\n");
            break;
        case 6:
            case 'y':
            case 'Y':
            printf("Yellow\n");
            break;
        case 7:
            case 'v':
            case 'V':
            printf("Violet\n");
            break;
        case 8:
            case 'i':
            case 'I':
            printf("Indigo\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}