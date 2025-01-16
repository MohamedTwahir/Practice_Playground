#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Mapping the morse code according to international morse code for english alphabets
const char *morse[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", // A-J
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",  // K-T
    "..-", "...-", ".--", "-..-", "-.--", "--..",                        // U-Z
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." // 0-9
};
// Demapping the morse code to english alphabet and numerics
const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

// Function to encode morse code from string of words provided by the user.
void encode(const char *input)
{
    for (int i = 0; i < strlen(input);  i++)
    {
        char c = toupper(input[i]); // converting the input to upper case
        if (c >= 'A' && c <= 'Z')
        {
            printf("%s", morse[c - 'A']); // Dealing with the alphabets first
        }
        else if (c >= '0' && c <= '9')
        {
            printf("%s ", morse[c - '0' + 26] ); // Dealing with the numerics
        }
        else
        {
            printf("\nThe words input are not in English am only able to encode english language at this time\n");
        }
    }
    printf("\n");
}
// Function to decode morse code to english alphabet/numerics
char decoder(const char *code)
{
    for (int i = 0; i < 36; i++)
    {
        if (strcmp(morse[i], code) == 0)
        {
            return alphabet[i];
        }
    
    }
    printf("Morse character Unknown\n");
}


void decoderToText(const char *input) 
{
    char buffer[10]; // Temporary storage for a Morse sequence
    int bufferIndex = 0;
    
    for (int i = 0; i <= strlen(input); i++) {
        if (input[i] == ' ' || input[i] == '\0') {
            if (bufferIndex > 0) {
                buffer[bufferIndex] = '\0'; // Null-terminate the buffer
                char decoded = decoder(buffer);
                printf("%c", decoded);
                bufferIndex = 0; // Reset buffer for the next sequence
            }
            if (input[i] == ' ' && input[i + 1] == ' ') {
                printf(" "); // Add a space for word separation
                i++; // Skip the second space
            }
        } else {
            buffer[bufferIndex++] = input[i]; // Add character to buffer
        }
    }
    printf("\n");
}

// Main program
int main()
{
    int action;
    char input[300];

    do
    {
        printf("\n--- This Program Encodes Alphabet to Morse or Decodes Morse to Alphabet ---\n");
        printf("Input 1. to Encode text to Morse code\n");
        printf("Inout 2. to Decode Morse code to text\n");
        printf("Input 3. to Exit\n");
        printf("Choose an option: ");
        scanf("%d", &action);
        getchar(); // Consume the newline character left by scanf

        switch (action) {
            case 1:
                printf("Please Enter text to encode: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0'; // Condition to remove newline character
                printf("Morse Code: ");
                encode(input);
                break;
            case 2:
                printf("Please Enter Morse code to decode (use / or double spaces or for word separation): ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0'; // Remove newline character
                printf("Decoded Text: ");
                decoderToText(input);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (action != 3);
    
    return 0;
}