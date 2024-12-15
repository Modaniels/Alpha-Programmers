#include <stdio.h>
#include <stdlib.h>

#define SALESMEN 10
#define ITEMS 5

int main() {
    char names[SALESMEN][50];
    int sales[SALESMEN][ITEMS];
    int totalSales[SALESMEN] = {0};
    int grandTotal = 0;

    printf("Enter the details of %d salesmen:\n", SALESMEN);
    for (int i = 0; i < SALESMEN; i++) {
        printf("Enter name of salesman %d: ", i + 1);
        scanf("%49s", names[i]); 
        while (getchar() != '\n'); 

        printf("Enter sales for 5 items by %s: ", names[i]);
        for (int j = 0; j < ITEMS; j++) {
            while (scanf("%d", &sales[i][j]) != 1) {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n'); 
            }
            totalSales[i] += sales[i][j];
        }
        grandTotal += totalSales[i];
    }

   
    printf("\n%-20s", "Name");
    for (int i = 1; i <= ITEMS; i++) printf(" Item%-3d", i);
    printf(" Total\n");

    for (int i = 0; i < SALESMEN; i++) {
        printf("%-20s", names[i]);
        for (int j = 0; j < ITEMS; j++) {
            printf(" %-7d", sales[i][j]);
        }
        printf(" %-7d\n", totalSales[i]);
    }

    printf("\nGrand Total Sales: %d\n", grandTotal);
    return 0;
}