#include <stdio.h>
#include <string.h>
int main()
{
    char name[30] = "WAWERU";
    char name2[20];
    xstrcpy(name2, name);

    printf("The name is %s\n", name);
    printf("The name2 is %s\n", name2);

}
    xstrcpy( char *p , char *m)
    {
        while (*m!= '\0' )
        {
            *p = *m;
            m++;
            p++;
            *p = '\0';

        }
    }
