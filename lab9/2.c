// Write user input program to convert lower case letters into upper case and upper case letters
//into lower case of a given string
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char result[100];
    char *p = str;
    char *q = result;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *q = *p - ('a' - 'A'); // Convert to upper case
        } else if (*p >= 'A' && *p <= 'Z') {
            *q = *p + ('a' - 'A'); // Convert to lower case
        } else {
            *q = *p; // Non-alphabetic characters remain unchanged
        }
        p++;
        q++;
    }
    *q = '\0'; // Null-terminate the result string
    printf("Converted string: %s", result);
    return 0;
}