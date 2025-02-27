#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* main - program to assign random number to variable n 
* then will check the value of last digit using place value concept by dividing by 10.
*/  
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    // calculate the last digit
    last_digit = n % 10;

    // check if last digit is less than 5
    if (last_digit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
    }
    // check if last digit is less than 6 and not zero
    else if(last_digit < 6 && last_digit != 0)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
    }
    // Assume the number left is zero
    else
    {
        printf("Last digit of %d is %d and is o\n", n, last_digit);
    }

    return (0);


}
