#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    char gender;

    // Taking input from user
    printf("Enter your name: ");
    scanf("%s", name);  // Reads a string (without spaces)

    printf("Enter your age (in years): ");
    scanf("%d", &age);  // Reads an integer

    printf("Enter your height (in feet): ");
    scanf("%f", &height);  // Reads a float

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);  // Note the space before %c to consume leftover newline

    // Displaying the input values
    printf("\nName: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Gender: %c\n", gender);

    return 0;
}
