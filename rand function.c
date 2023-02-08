#include<stdio.h>
int main()
{
    int number;
int count = 0;
while (count < 35)
{
    number = rand();
    printf("The random number %d  is  %d\n",count, number);
    count++;
}
}
