/*
 * Author: Manav Chotalia
 * Sub: ESP
 * Question: A Program to find maximum
 */
#include <stdio.h>

void main()
{
    int x, y, z;

    printf("\n Enter three values");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d \t y = %d \t z = %d\n", x, y, z);

    if (x > y)
    {
        if (x > z)
        {
            printf("x is the greatest \n");
        }
        else{
            printf("z is the greatest \n");
        }
    }
    else if (y > z)
        printf("y is the greatest \n");
    else
        printf("z is the greatest \n");
}
