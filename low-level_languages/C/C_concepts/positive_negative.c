#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
* main - program to assign a random number to variable n and prints out whether positive or negative
* n - variable to the assigned number
*/ 
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0){
        printf("%d is positive\n", n);
    }
    else if(n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);

}
