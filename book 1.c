#include<stdio.h>
int main (){
int number1 ;
int number2 ;
int result;
printf("ENTER YOUR FIRST NUMBER TO BE MULTIPLIED TO THE SECOND NUMBER\n");
scanf("%d" , &number1);

printf("ENTER YOUR SECOND NUMBER TO BE MULTIPLIED BY THE FIRST NUMBER\n");
scanf("%d", &number2);

 result = (number1 * number2);
printf("%d\n", result);
return 0;
}
