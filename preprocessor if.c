#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int reg ();
int signin();
int main()
{
    int choice;
    printf("To sign up press 1\n");
    printf("To sign in press 2\n");
    printf("To reset password press 3\n");
    printf("To change password press 4\n");
    printf("\n\n\n Enter your choice and press enter::");
    scanf("%d",&choice);
    if (choice == 1)
    {
        reg();
    }
   /* if (choice == 2)
    {
        signin();
    }
    if (choice == 3)
    {
        resetpass();
    }
    if (choice == 4)
    {
        changepass();
    }*/
}
int reg()
{
    char names[30];
    char email[30];
    char password[10];
    char passcon[10];

    printf("Enter your full names and press enter\n");
    fflush(stdin);
    fgets(names,30,stdin);
    printf("\n\n\nEnter your valid email address\n");
    fflush(stdin);
    fgets(email,30,stdin);
    printf("\n\n\nEnter your preffered password and press enter\n");
    fflush(stdin);
    fgets(password,10,stdin);
    printf("\n\n\nRe enter your password and click enter\n");
    fflush(stdin);
    fgets(passcon,10,stdin);
    if (passcon != password)
    {
        printf("\n\n\n\t\t\tYour passwords do not match");
        main();
    }
    else
    {
        printf("You have been registered succcessfully\n");
    }
}



