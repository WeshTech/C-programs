#include <stdio.h>
int main(){
int yearofservice;
char gender, qualifications, name;
printf("ENTER THE NAME OF THE DRIVER\n");
scanf("%s", &name);
printf("ENTER THE GENDER\n");
scanf("%s", &gender);
printf("ENTER THE QUALIFICATIONS ATTAINED\n");
scanf("%s", &qualifications);
printf("ENTER THE YEARS OF SERVICE IN THE INDUSTRY\n");
scanf("%d", &yearofservice);
if ((qualifications == 'graduate') && (yearofservice >=10) && (gender == 'male'))
{
    printf("DEAR %s YOUR SALARY WILL NOW BE 15000", name);
}

return 0;

}
