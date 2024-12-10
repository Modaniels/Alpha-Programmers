#include <stdio.h>

int main() {
    int admission_number;
    float average_mark, subject1, subject2, subject3;
    char name[100];
    char select;

    do {
        printf("Enter your name: \n");
        scanf("%s", name);
        printf("Enter your Admission number:\n");
        scanf("%d", &admission_number);
        printf("Name: %s\n Admission: %d \n", name, admission_number);

        printf("Enter marks for subject 1: ");
        scanf("%f", &subject1);

        printf("Enter marks for subject 2: ");
        scanf("%f", &subject2);

        printf("Enter marks for subject 3: ");
        scanf("%f", &subject3);

        average_mark = (subject1 + subject2 + subject3) / 3;

        printf("Your average mark is %.2f\n", average_mark);

        if (average_mark >= 70 && average_mark <= 100) {
            printf("You scored grade A\n");
        } else if (average_mark >= 60 && average_mark <= 69) {
            printf("You scored grade B\n");
        } else if (average_mark >= 50 && average_mark <= 59) {
            printf("You scored grade C\n");
        } else if (average_mark >= 40 && average_mark <= 49) {
            printf("You scored grade D\n");
        } else {
            printf("Fail!\n");
        }

        printf("Do you want to calculate average marks for another student? (y/n)\n");
        scanf(" %c", &select);



    } while (select == 'y' || select == 'Y');

    printf("You have completed your calculations\n");

    return 0;
}













