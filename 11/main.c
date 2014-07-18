#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int kub(int s);
int main()
{
    int s;
    s=srand(time(NULL))%5+1;
    while ()
    {
        printf ("%d", s);
    }
    return 0;
}

int kub(int s)
{
for (int a=0; a<5; ++a)
    {
        printf ("#");
    };
    switch (s)
    {
    case 1:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            if (n==1)
            {
                printf (" ");
                printf ("*");
                printf (" ");
            }
            else
            {
                for (int b=0; b<3; ++b)
                {
                    printf (" ");
                };
            };
            printf ("#");
        };
        break;
    case 2:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf (" ");
                printf (" ");
                printf ("*");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf (" ");
                break;
            case 1:
                printf (" ");
                printf (" ");
                printf (" ");
                break;
            };
            printf ("#");
        };
        break;
    case 3:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf (" ");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf (" ");
                printf ("*");
                printf (" ");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf (" ");
                break;
            };
            printf ("#");
        };
        break;
    case 4:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf (" ");
                printf (" ");
                printf (" ");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            };
            printf ("#");
        };
        break;
        case 5:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf (" ");
                printf ("*");
                printf (" ");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            };
            printf ("#");
        };
        break;
        case 6:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            };
            printf ("#");
        };
        break;
    };
    printf ("\n");
    for (int a=0; a<5; ++a)
    {
        printf ("#");
    };
}

