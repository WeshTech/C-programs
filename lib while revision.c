#include <stdio.h>
int main()
{
    printf("Welcome to school system marks entry\n\n\n\n");
    int math,eng,kiswa,histo,total,registration,count = 1, i, j;
    float average;

    for (count = 1; count <=5; count++)
        {printf("Enter the registration number of the student\n");
        scanf("%d",&registration);
                    for (j = 1; j <=4; j++)

                       {

                        printf("Enter the grades the student has scored in the four subjects\n\n");
                        scanf("%d\n%d\n%d\n%d", &math,&eng,&kiswa,&histo);
                        total = 0;
                        total = total + math + eng + kiswa + histo;
                        average = total / j;
                        printf("The total marks scored is %d \n The average marks are %d\n", total, average);
                       }
        }


}
