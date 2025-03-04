#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lower case followed by new line
 * Return - always zero
 */
int main(void)
{
    char hex;
    
    for (hex = '0'; hex <= '9'; hex++)
        putchar(hex);
    
    for (hex = 'a'; hex <= 'f'; hex++)
    {
        putchar(hex);
    }
    putchar('\n');
    
    return (0);
}
