//Write user input program to remove all repeated characters from a given string. For example,
//if input string is “Technology” then the output string should be “Technolgy”.
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0, found;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(str[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            result[k++] = str[i];
        }
    }
    
    result[k] = '\0';
    printf("Result: %s", result);
    
    return 0;
}