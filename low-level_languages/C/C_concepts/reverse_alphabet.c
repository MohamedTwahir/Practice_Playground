#include <stdio.h>

/**
 * main -  program that prints lowercase alphabets in reverse.
 */

 int main(void){

    char z = 'z';

    while  (z >= 'a')
    {
        putchar(z);
        z--;
    }
    putchar('\n');
    return (0);
 }
