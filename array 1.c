#include <stdio.h>
void myfunction(char name[] , int age)

{
    printf("hello %s. , you are %d years old\n", name , age);

}

int main()
{
    myfunction("LIAM", 3);
    myfunction("jenny", 34);
    myfunction("anjala", 30);
    return 0;

}
