#include <stdio.h>

int main() {
    int price, quantity,customers, counter = 0;
    float credit_limit, value, balance;
    float totalPrice = 0.0;


    printf("Please enter the number of customers you would like to serve:\n ");
    scanf("%d", &customers);


    while (counter < customers) {
        printf("Customer %d:\n", counter+ 1);


        printf("Enter  your credit limit: ");
        scanf("%f", &credit_limit);
         printf("Enter quantity of goods you wish to purchase: ");
        scanf("%d", &quantity);


    float prices[quantity];

    for (int i = 0; i < quantity; i++) {
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &prices[i]);
        totalPrice += prices[i];
    }


    printf("\nPrices of the items:\n");
    for (int i = 0; i < quantity; i++) {
        printf("Price of item %d: %.2f\n", i + 1, prices[i]);
    }

    printf("\nTotal Price: %.2f\n", totalPrice);






        balance = credit_limit - totalPrice;
        value = totalPrice;

        while (value > credit_limit) {
            printf("Sorry you cannot purchase goods worthy such a value on credit.\n");
              printf("Please enter another quantity of goods you would like to purchase:\n ");
            scanf("%d", &quantity);
            printf("Enter the  price:\n ");
            scanf("%d", &price);


            value = price * quantity;

        }


        printf("Your total purchase is Ksh. %.2f\n", value);
        printf("Your balance is Ksh: %2f\n", balance);


        counter++;
    }
    return 0;
}



