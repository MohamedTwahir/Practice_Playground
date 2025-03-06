#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 9; i++)  /* Loop for the first digit */
    {
        for (j = i + 1; j < 10; j++)  /* Loop for the second digit */
        {
            putchar(i + '0');  /* Print the first digit */
            putchar(j + '0');  /* Print the second digit */
            if (i != 8 || j != 9)  /* Avoid printing comma and space after the last combination */
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');  /* Print new line at the end */
    
    return (0);
}
