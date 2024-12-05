#include <stdio.h>

int main() {
    int price, quantity,customers, counter = 0;
    float credit_limit,  value;


    printf("Please enter the number of customers you would like to serve:\n ");
    scanf("%d", &customers);


    while (counter < customers) {
        printf("Customer %d:\n", counter+ 1);


        printf("Enter  your credit limit: ");
        scanf("%f", &credit_limit);
         printf("Enter quantity of goods you wish to purchase: ");
        scanf("%d", &quantity);

        printf("Enter price of each good you wish to purchase: ");
        scanf("%d", &price);
       

        value= price * quantity;


        while (value > credit_limit) {
            printf("Sorry you cannot purchase goods worthy such a value on credit.\n");
              printf("Please enter another quantity of goods you would like to purchase:\n ");
            scanf("%d", &quantity);
            printf("Enter the  price:\n ");
            scanf("%d", &price);
            

            value = price * quantity;
        }


        printf("Your total purchase is Ksh. %.2f\n", value);


        counter++;
    }


    printf("Thank You for purchasing from us.\n");
    return 0;
}
