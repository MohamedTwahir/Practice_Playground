#include <stdio.h>
/**
 * main - program that prints all possible combination of single-digit numbers.
 * Return - Always 0.
 * Only use putchar 
 */
int main(void){
    
    int d;
    for (d = 0; d <= 9; d++)
    {
        putchar(d + '0');

        if (d != 9) // Avoid printing ", " after the last digit
        {
            putchar(',');
            putchar(' ');
        }
    }
    
    putchar('\n');

    return (0);

}