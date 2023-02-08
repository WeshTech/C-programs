#include <stdio.h>
main ()
{

        int a, *p;

        a = 11257;
        p = &a;
        printf("The address of a is %d\n",&a);
        printf("The address of p is  %d\n,p");
        printf("The value at address p is %d\n", *p);
        printf("Size of integer is %lu bytes\n", sizeof (a));
        printf("The address of p+1 is %d\n",p+1);
        printf("The value at address p+1 is %d\n",*(p+1));
}
