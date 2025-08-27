#include <stdio.h>

int main() {
    char gender, qualification;
    int years, salary;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter years of service: ");
    scanf("%d", &years);

    printf("Enter qualification (G for Graduate / P for Post-Graduate): ");
    scanf(" %c", &qualification);

    if (gender == 'M' || gender == 'm') {
        if (years >= 10) {
            if (qualification == 'P' || qualification == 'p')
                salary = 15000;
            else
                salary = 10000;
        } else {
            if (qualification == 'P' || qualification == 'p')
                salary = 10000;
            else
                salary = 7000;
        }
    } 
    else if (gender == 'F' || gender == 'f') {
        if (years >= 10) {
            if (qualification == 'P' || qualification == 'p')
                salary = 12000;
            else
                salary = 9000;
        } else {
            if (qualification == 'P' || qualification == 'p')
                salary = 10000;
            else
                salary = 6000;
        }
    } 
    else {
        printf("Invalid gender input!\n");
        return 0;
    }

    printf("The salary is: %d\n", salary);
    return 0;
}
