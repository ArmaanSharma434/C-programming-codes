#include<stdio.h>
int main()
{
    char citizen;
    int age;
    printf("Are u an Indian citizen? (y/n): ");
    scanf("%c", &citizen);

    if(citizen=='y' || citizen=='Y'){
        printf("OK! Forward to the next step..\n");
        printf("Enter ur age: ");
        scanf("%d", &age);
        if(age>=18){
            printf("You are eligible to vote-\n");
            printf("Thank u!\n");
        }
        else{
            printf("U are not eligible to vote-\n");
            printf("Sorry about the inconvenience\n");
        }
    }
    else if (citizen=='n' || citizen=='N'){
            printf("U are not a citizen so u are not eligible to vote-\n");
            printf("Sorry\n");
    }
    else{
            printf("Invalid input- pls enter y or n only\n");
            printf("Try again-\n");
    }
    return 0;
}