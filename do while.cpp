#include <stdio.h>
# define password
# define username
 registration()
 {
     printf("\t\t\t\t Welcome to Dwark software solutions\n\n\n");
    int phone;
    char email, name;
    printf("Enter your Full names and click enter\n\n");
    scanf("%[^\n]s",name);
    printf("Enter your email address and click enter\n\n");
    scanf("%[^\n]s",email);
    printf("Enter your phone number and click enter key\n\n");
    scanf("%d",&phone);
 }

 main()
{
int choice;

    do{
    printf("Welcome to our foundation group\n\n\npress[1]SIGN IN\npress[2]SIGN UP\n\n");
    scanf("%d",&choice);
    if (choice > 2)
    {
        printf(" You have give an invalid choice!\n\n");
    }
    }
    while(choice >2);
if (choice == 2)
{
 registration();
}
}

