#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "math_operations.h"


void main()
{
    printf("Lab 13.2. Using macros and preprocessing directive\n");
    int x, y, z, x_cube, x_plus_y, maxim, minim;
    char ch;
    float rad, s;

    do
    {
            printf("Define the maximum of two numbers\n");
            printf("Input 3 integer numbers\n");
            scanf("%d", &x);
            PRINTI(x);
            scanf("%d", &y);
            PRINTI(y);
            scanf("%d", &z);
            PRINTI(z);
if (z > 10)
            {
            x_cube = CUBE(x);
            PRINTI(x_cube);
            x_plus_y = SQR(x + y);
            PRINTI(x_plus_y);
            maxim = MAX(x_cube,x_plus_y);
            PRINTR(maxim);
        }
else
        {
                int x_minus_z = ABS(x - z);
                int x_plus_z = ABS(x + z);
                minim = MIN(x_minus_z, x_plus_z);
                PRINTR(minim);
            
        }
        printf("Repeat?  y / n ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

}
