#include <stdio.h>
#include <string.h>
int main()
{
    char name[40] = "WAWERU DAVID";
    char id[40] = "MURANG'A UNIVERSITY";

    int length1, length2;

    length1 = strlen(name);
    length2 = strlen(id);

    printf("\n\nArray name: %s  has  %d characters", name, length1);
    printf("\n\nArray name: %s has %d characters\n\n\n\n\n", id, length2);
}
