#include <stdio.h>

// Function to copy source string to destination string using pointers
void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Append null terminator to mark the end of the string
}

int main() {
    char sourceString[] = "Hello, World!"; // Source string
    char destinationString[50]; // Destination string buffer

    // Copy sourceString to destinationString using pointers
    stringCopy(sourceString, destinationString);

    // Displaying the copied string
    printf("Source String: %s\n", sourceString);
    printf("Copied String: %s\n", destinationString);

    return 0;
}
