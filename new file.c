#include <stdio.h>
int main()
{
    FILE* filepointer;
    filepointer = fopen("Newnew.txt","w");
    if (filepointer == NULL)
    {
        printf("The file has not been created");

    }
    else{
        printf("The file has been created");
    }
}
