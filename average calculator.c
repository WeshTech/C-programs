#include <stdio.h>
int main()
{
    int  mathematics, english, kiswahili,   computer, chemistry;
    int total;

    float average;

    printf("ENTER MATHEMATICS GRADE\n");
    scanf("%d", &mathematics);
    printf("ENTER THE ENGLISH GRADE\n");
    scanf("%d", &english);
    printf("ENTER THE KISWAHILI GRADE\n");
    scanf("%d", &kiswahili);
    printf("ENTER THE COMPUTER GRADE\n");
    scanf("%d", &computer);
    printf("ENTER THE CHEMISRY GRADE\n\t");
    scanf("%d", &chemistry);
    total = mathematics + english + kiswahili + computer + chemistry;
    printf("YOUR TOTAL GRADE IS THIS :::::: %d\n", total);
    average = total / 5;
    printf("YOUR AVERAGE GRADE IS THIS:::: %2.4f\n", average);
    if (average>= 60)
    {
        printf("YOU HAVE BEEN AWERDED A FIRST DIVISION\n");

    }
    else if ((average >49)&&(average<60))
    {
        printf("YOU HAVE BEEN AWARDED A SECOND DIVISION\n");
    }
    else if ((average >39)&&(average<50))
    {
        printf("YOU HAVE BEEN AWARDED A THIRD CLASS DIVISION\n");
    }
    else
    {
        printf("SORRY YOU HAVE BEEN AWARDED A FAILED DEGREE\n");
    }
return 0;
}
