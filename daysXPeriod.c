#include <stdio.h>

int main() {
    char timetable[7][10][10];  // [days][periods][subject_code]
    int days, periods;
    int i, j;
    char code[10];

    printf("Enter number of days in timetable: ");
    scanf("%d", &days);

    printf("Enter number of periods per day: ");
    scanf("%d", &periods);

    printf("\nEnter the subject code for each day and period:\n");
    for (i = 0; i < days; i++) {
        printf("\nDay %d:\n", i + 1);
        for (j = 0; j < periods; j++) {
            printf("Period %d: ", j + 1);
            scanf("%s", timetable[i][j]);
        }
    }

    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Display Complete Timetable\n");
        printf("2. Search Subject in a Period\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nComplete Weekly Timetable:\n");
            for (i = 0; i < days; i++) {
                printf("Day %d: ", i + 1);
                for (j = 0; j < periods; j++) {
                    printf("%s ", timetable[i][j]);
                }
                printf("\n");
            }
        }

        else if (choice == 2) {
            int d, p;
            printf("Enter day number (1-%d): ", days);
            scanf("%d", &d);
            printf("Enter period number (1-%d): ", periods);
            scanf("%d", &p);

            if (d >= 1 && d <= days && p >= 1 && p <= periods) {
                printf("Subject in Day %d Period %d: %s\n", d, p, timetable[d-1][p-1]);
            } else {
                printf("Invalid day or period!\n");
            }
        }

    } while (choice != 0);

    printf("Program Ended.\n");
    return 0;
}
