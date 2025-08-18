#include <stdio.h>

int main() {
    int age,s1,s2,s3,s4;
    char gender;
    printf("give your age: ");
    scanf("%d", &age);
    printf("give your gender: ");
   fflush(stdin);
    scanf("%c", &gender);
    printf("enter the marks of four subjects: ");
    fflush(stdin);
    scanf("%d%d%d%d", &s1, &s2, &s3, &s4);
    float avg = (s1+s2+s3+s4)/4.0;
    printf("average marks = %f", avg);
    printf("  age of the student is %d", age);
    printf("  gender of the student is %c", gender);

    return 0;
}