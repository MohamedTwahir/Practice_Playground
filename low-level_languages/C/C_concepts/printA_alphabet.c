#include <stdio.h>
/**
 * main - program that prints alphabet in lowercase then uppercase followed by a newline.
 * only use putchar
 */
int  main(void){
    
    char a = 'a';
    char A = 'A';
    char b;

    //using while loop to print alphabets
    for (b = 'a'; b <= 'z'; b++){
        putchar(b);
    }
    while (a <= 'z') {
        putchar(a);
        a++;
    }
    while (A <= 'Z'){
        putchar(A);
        A++;
    }
    
    putchar('\n');
    
    return 0;
}
