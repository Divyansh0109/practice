#include<stdio.h>
#include<string.h>
int main(){
    char qual[50], gen[10];
    int year;

    printf("Enter your qualification: ");
    fgets(qual, sizeof(qual), stdin);

    printf("Enter your gender: ");
    fgets(gen, sizeof(gen), stdin);

    printf("Enter years of services : ");
    scanf("%d", &year);

    if (strcmp(gen, "male\n") == 0) {
        if (strcmp(qual, "Post-Graduate\n") == 0) {
            if (year >= 10) {
                printf("Salary: 15000\n");
            } else {
                printf("Salary: 10000\n");
            }
        } else if (strcmp(qual, "Graduate\n") == 0) {
            if (year >= 10) {
                printf("Salary: 19000\n");
            } else {
                printf("Salary: 7000\n");
            }
        } 
        
    }
    else if (strcmp(gen, "female\n") == 0) {
        if (strcmp(qual, "Post-Graduate\n") == 0) {
            if (year >= 10) {
                printf("Salary: 12000\n");
            } else {
                printf("Salary: 9000\n");
            }
        } else if (strcmp(qual, "Graduate\n") == 0) {
            if (year >= 10) {
                printf("Salary: 10000\n");
            } else {
                printf("Salary: 6000\n");
            }
        } 
    } else {
        printf("Invalid input\n");
    }

    return 0;
}