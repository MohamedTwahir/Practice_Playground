#include <stdio.h>
/**
 * main - program that prints alphabet in lower case followed by a new line
 * only use putchar function
 */

int main(void){
    // declare variables
    char a = 'a';

    //using while loop to print alphabets
    while (a <= 'z') {
        putchar(a);
        a++;
    }
    putchar('\n');
    return 0;

}
