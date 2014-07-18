#include <stdio.h>
#include <stdlib.h>

void ch (char a, char b, char c, int n);

int main()
{
    int n;
    printf ("Vvedite chislo \n");
    scanf ("%d", &n);
    ch ('A', 'B', 'C', n);
    return 0;
}

void ch (char a, char b, char c, int n)
{
    if (n==1)
    {
        printf ("%c -> %c\n", a, b);
    }
    else
    {
        ch (a, c, b, n-1);
        printf ("%c -> %c\n", a, b);
        ch (c, b, a, n-1);
    }
}
