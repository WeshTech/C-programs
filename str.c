#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    printf("Enter your name and click enter\n");
    scanf("%s",name);
    char greetings[10] ="Hello  ";
    strcat(greetings,name);
    printf("%s\n\n\n",name);
    printf("%s\n\n\n",greetings);
}
