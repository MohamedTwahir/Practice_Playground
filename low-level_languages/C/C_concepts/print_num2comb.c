#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits using three for loops.
 * Return: Always 0.
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; i++)  /* First digit */
    {
        for (j = i + 1; j < 9; j++)  /* Second digit */
        {
            for (k = j + 1; k < 10; k++)  /* Third digit */
            {
                putchar(i + '0');  /* Print first digit */
                putchar(j + '0');  /* Print second digit */
                putchar(k + '0');  /* Print third digit */
                if (i != 7 || j != 8 || k != 9)  /* Avoid trailing comma and space */
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');  /* Print newline at the end */
    
    return (0);
}
