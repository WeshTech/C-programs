#include <stdio.h>
#include <string.h>
struct students
{
    int adm_number;
    char name[20];
};
int main()
{
    struct students v[5];
    int i;
    for (i = 0; i <5; i++)
    {
        printf("Enter the admission number of the student\n");
        scanf("%d",v[i].adm_number);
        printf("Enter the name of the student\n");
        fgets(&v[i].name,20,stdin);
    }
}
