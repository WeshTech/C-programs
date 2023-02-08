#include <stdio.h>
#define pi 3.1416
int main (void){
float circ;
float area;
float radius;
printf("\nplease enter the value of the radius of the circle");
scanf("%f", &radius);
circ = 2 * pi * radius;
area = pi * radius * radius;
printf("\n%10.2f", radius);
printf("\n%10.2f",circ);
printf("\n%10.2f",area);
return 0;

}
