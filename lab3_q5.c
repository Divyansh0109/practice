#include <stdio.h>
int main() {
    int age;
    // Input: Read age from the user
    printf("Enter your age: ");
    scanf("%d", &age);
    // Check eligibility using nested if and conditional operator
    if (age >= 18) {
        printf("You are eligible to cast a vote.\n");
        
        if (age >= 21) {
            printf("You are eligible to get married.\n");
            
            if (age >= 25) {
                printf("You are eligible to contest elections.\n");
                
                if (age >= 35) {
                    printf("You are eligible to be the President of India.\n");
                } else {
                    printf("You are not eligible to be the President of India.\n");
                }
            } else {
                printf("You are not eligible to contest elections.\n");
            }
        } else {
            printf("You are not eligible to get married.\n");
        }
     } else {
        printf("You are not eligible to cast a vote.\n");
    }
    return 0;
}