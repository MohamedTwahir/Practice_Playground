#include <stdio.h>

/* Function that return a maximum between tow numbers */
int max(int num1, int num2){
    
    int result; // variable declaration

    if (num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }

    return result;

}

int main(){
    
    int maximum = max(5, 15);
    printf("The number is : %d", maximum);

    return 0;
}