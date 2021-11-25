/*
 * Author: Manav Chotalia
 * Sub: ESP
 * Question: A Program to find maximum
 */
#include <stdio.h>

void main()
{
    int num1, num2, num3;

    printf("\n Enter three values");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d \t num2 = %d \t num3 = %d\n", num1, num2, num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest \n");
        }
        else{
            printf("num3 is the greatest \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest \n");
    else
        printf("num3 is the greatest \n");
}
