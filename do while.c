#include <stdio.h>
#define NUMLINES 6
void main()
{

    int i, indent, howmany;
    void display(int, char);
    for (i = 1; i <= NUMLINES; i++)
    {
        display((NUMLINES + 1 -1),' ');
        display((2 * i -1), '*');
        printf("\n");

    }
}
    void display (int howmany, char symbol)
    {
        int i;
        for (i = 1; i<= howmany; i++)
            printf("%c",symbol);
    }



