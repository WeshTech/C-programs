#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int reg ();
int signin();
int namesize;
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
    if (choice == 2)
    {
        signin();
    }
   /* if (choice == 3)
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
    FILE*filepointer;
    filepointer = fopen("lexcon.txt","w");

    if (filepointer == NULL)
    {
        printf("ERROR opening the file\n");
    }
    else{
        printf("File created successfuly\n\n\n");
    }
    char names[30];
    char email[30];
    char password[10];
    char passcon[10];

    printf("Enter your full names and press enter\n");
    fflush(stdin);
    fgets(names,30,stdin);
    namesize = strlen(names);
    fprintf(filepointer,"NAME::%s", names);
    printf("\n\n\nEnter your valid email address\n");
    fflush(stdin);
    fgets(email,30,stdin);
    fprintf(filepointer,"EMAIL::%4s", email);
    printf("\n\n\nEnter your preffered password and press enter\n");
    fflush(stdin);
    fgets(password,10,stdin);
    fprintf(filepointer,"PASSWORD::%7s\n\n", password);
    printf("\n\n\nRe enter your password and click enter\n");
    fflush(stdin);
    fgets(passcon,10,stdin);
    fflush(stdin);
    fclose(filepointer);
   int j;
   j = strcmp(passcon,password);
   if (j == 0)
   {
       printf("You have been reggistered\n\n");
   }
   else
   {
       printf("Your passwords do not match\n");
       main();
   }
}
int signin()
{
   FILE* filepointer = fopen("lexcon.txt","r");

    if (filepointer == NULL)
    {
        printf("ERROR in opening the files\n");
    }
    else
    {
        printf("File opened for reading\n");
    }
    char name;
    fseek(filepointer, namesize,SEEK SET);
    do
    {(fgets(filepointer, "%s" ,name));
}




