#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to clean out the input
void cleaner(char *input, char *cleaned) //pointer to the inout and one to the output
{ 
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) { // loop till the end of the string character(null)
        if (isalnum(input[i])) { // check if the character is alphanumeric
            cleaned[j++] = tolower(input[i]); // convert to lowercase and add to cleaned
        }
    }
    cleaned[j] = '\0'; // null-terminate the cleaned string
}

// Function to check if a string is a palindrome
int palindromer(char *str) { // not sure if palindromer is an english word lol
    int left = 0; // starting from the forward assuming it employs normal word reading and writing.
    int right = strlen(str) - 1;// right side being the last character of a string.

    while (left < right) {
        if (str[left] != str[right]) { // 
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}
int main() {
    char input[1000];
    char cleaned[1000];

    printf("Enter a string, number, or phrase: ");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline from fgets
    input[strcspn(input, "\n")] = 0;

    cleaner(input, cleaned);

    if (palindromer(cleaned)) {
        printf("It's a palindrome!\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}