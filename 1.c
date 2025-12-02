// Write user input C-language program to set strong password of at least 8 characters long. Password
//should contain at one lower case letter, one upper case letter, one digit and one special character
//otherwise there be should be message of ‘invalid password’.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    printf("Enter the password: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present
    int length = strlen(str);
    if (length < 8) {
        printf("Invalid password: Password must be at least 8 characters long.\n");
        return 0;
    }
    for (i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') hasLower = 1;
        else if (str[i] >= 'A' && str[i] <= 'Z') hasUpper = 1;
        else if (str[i] >= '0' && str[i] <= '9') hasDigit = 1;
        else hasSpecial = 1;
    }
    if (!hasLower || !hasUpper || !hasDigit || !hasSpecial) {
        printf("Invalid password: Password must contain at least one lowercase letter, one uppercase letter, one digit, and one special character.\n");
        return 0;
    }
    printf("Valid password.\n");
    return 0;
}
