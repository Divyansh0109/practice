#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("'%c' is a Capital Letter.\n", ch);
    }
    else if (ch >= 97 && ch <= 122) {
        printf("'%c' is a Small Letter.\n", ch);
    }
    else if (ch >= 48 && ch <= 57) {
        printf("'%c' is a Digit.\n", ch);
    }
    else {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}
