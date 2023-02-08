#include <stdio.h>
struct student
{
    int adm_number;
};
int main()
{
    typedef struct student stud;
    stud anil;
    anil.adm_number = 9884;
    struct student *ptr;
    ptr = &anil;
    printf("The student age is %d\n\n\n", ptr -> adm_number);

}
