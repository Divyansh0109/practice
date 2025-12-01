//Write user input program to find index values of first and last occurrence of a character in a
//given string. For example, in the string “Engineering” index values of first and last occurrence of character
//‘n’ is 1 and 9 respectively.
#include <stdio.h>

int main() {
    char str[100], ch;
    int arr[100];
    int index=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            arr[index++] = i;
        }
    }
    if(index == 0) {
        printf("Character '%c' not found in the string.\n", ch);
    } else {
        printf("First occurrence of character '%c' is at index: %d\n", ch, arr[0]);
        printf("Last occurrence of character '%c' is at index: %d\n", ch, arr[index - 1]);  
    }

        return 0;
