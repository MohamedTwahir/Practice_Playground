#include <stdio.h>
/**
 * print_alphabet - function that prints alphabet in lowercase, followed by a new line.
 */

 void print_alphabet_x10(void){

    char alphabet;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
            putchar(alphabet);
        }
        putchar('\n');
        
    }
    putchar('\n');

 }
