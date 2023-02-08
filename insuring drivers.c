#include <stdio.h>
int main()
{
    int age;
    char  maritalstatus, name, sex;

printf("ENTER DRIVER NAME\n");
scanf("%s", &name);
printf("ENTER THE AGE OF THE DRIVER\n");
scanf("%d", &age);
printf("ENTER THE DRIVER SEX\n");
scanf("%s", &sex);
printf("ENTER THE DRIVER MARITAL STATUS\n");
scanf("%s", &maritalstatus);
if ((sex == 'female')&&(age>=25)&&(maritalstatus =='single'))
{
    printf("DEAR %s YOU HAVE SUCCESSFULY BEEN INSURED", name);
}

return 0;
}
