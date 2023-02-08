#include <stdio.h>
struct students
{
    int id;
    int fun;
};
int main()
{
    struct students david;
    struct students calc();
    david = calc();
    printf("The student id is %d", david.id);
    printf("The student name is %d", david.fun);
}
struct students calc()
{
    struct students shiru;
    shiru.id = 7887;
    shiru.fun = 555;
    return shiru;
};
