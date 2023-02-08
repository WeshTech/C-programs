#include<stdio.h>
int main(){
int my[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
my[5] = 50000;
printf("%d\n", my[4]);
printf("%d", my[5]);
char greetings [] = "HELLO WORLD!";
printf("%s\n" , greetings);
return 0;
}
