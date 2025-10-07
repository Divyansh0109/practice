#include <stdio.h>

int main() {
    int school, dept;

    printf("===== University School Selection =====\n");
    printf("1. School of Computer Science\n");
    printf("2. School of Engineering\n");
    printf("3. School of Business\n");
    printf("Enter your choice of school (1-3): ");
    scanf("%d", &school);

    switch (school) {
        case 1:
            printf("\nYou selected: School of Computer Science\n");
            printf("Departments:\n");
            printf("1. Department of Informatics\n");
            printf("2. Department of Machine Learning\n");
            printf("Enter your choice of department: ");
            scanf("%d", &dept);

            switch (dept) {
                case 1:
                    printf("You selected Department of Informatics\n");
                    break;
                case 2:
                    printf("You selected Department of Machine Learning\n");
                    break;
                default:
                    printf("Invalid department choice!\n");
            }
            break;

        case 2:
            printf("\nYou selected: School of Engineering\n");
            printf("Departments:\n");
            printf("1. Department of Electronics Engineering\n");
            printf("2. Department of Mechanical Engineering\n");
            printf("Enter your choice of department: ");
            scanf("%d", &dept);

            switch (dept) {
                case 1:
                    printf("You selected Department of Electronics Engineering\n");
                    break;
                case 2:
                    printf("You selected Department of Mechanical Engineering\n");
                    break;
                default:
                    printf("Invalid department choice!\n");
            }
            break;

        case 3:
            printf("\nYou selected: School of Business\n");
            printf("Departments:\n");
            printf("1. Department of Commerce\n");
            printf("2. Department of Purchasing\n");
            printf("Enter your choice of department: ");
            scanf("%d", &dept);

            switch (dept) {
                case 1:
                    printf("You selected Department of Commerce\n");
                    break;
                case 2:
                    printf("You selected Department of Purchasing\n");
                    break;
                default:
                    printf("Invalid department choice!\n");
            }
            break;

        default:
            printf("Invalid school choice!\n");
    }

    return 0;
}
