#include <stdio.h>
#define AREA(x)(3.142*x*x)
main()
    {
        float r1 = 2.25, r2 = 6.57, a;
        a = AREA(r1);
        printf("The area of circle 1 = %.3f\n",a);
        a = AREA(r2);
        printf("The area of circle 2 = %.3f\n",a);

    }
