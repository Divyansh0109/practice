#include <stdio.h>
int main() {
    int age;
    char name[50]; char gender;
    float cgpa;
    printf("enter age of student:");
    scanf("%d", &age);
    printf("enter name of student:");
    scanf(" %[^\n]", name);
    printf("enter cgpa of student :");
    scanf("%f", &cgpa);
    printf("enter gender of student:");
    scanf(" %c", &gender);

    printf("---student information---\n");
    printf("age of student is %d\n", age);
    printf("name of student is %s\n", name);
    printf("cgpa of student is %f\n", cgpa);
    printf("gender of student is %c\n", gender);
    return 0;
}