#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

#define SALESMEN 10
#define ITEMS 5

int main() {
    char salesmen[SALESMEN][50];
    int sales[SALESMEN][ITEMS];
    int grandTotal = 0;


    for (int i = 0; i < SALESMEN; i++) {
        printf("Enter the name of salesman %d: ", i + 1);
        scanf(" %49[^\n]", salesmen[i]);

        int totalSales = 0;
        printf("Enter sales for 5 items for %s:\n", salesmen[i]);
        for (int j = 0; j < ITEMS; j++) {
            printf("  Item %d: ", j + 1);
            scanf("%d", &sales[i][j]);
            totalSales += sales[i][j];
        }

        sales[i][ITEMS] = totalSales;
        grandTotal += totalSales;
    }

    printf("\n%-15s %-7s %-7s %-7s %-7s %-7s %-10s\n",
           "Name", "Item1", "Item2", "Item3", "Item4", "Item5", "Total");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < SALESMEN; i++) {
        printf("%-15s", salesmen[i]);
        for (int j = 0; j < ITEMS; j++) {
            printf("%-7d ", sales[i][j]);
        }
        printf("%-10d\n", sales[i][ITEMS]);
    }

    printf("---------------------------------------------------------------\n");
    printf("%-15s %-7s %-7s %-7s %-7s %-7s %-10d\n",
           "GrandTotal", "-", "-", "-", "-", "-", grandTotal);

    return 0;
}
