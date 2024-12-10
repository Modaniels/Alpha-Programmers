#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter1,customers,quantity,counter2;
    float credit_limit,price,total_price;
    counter1=0;
    printf("Enter the number of customers:");
    scanf("%d",&customers);

    while (counter1<customers)
    {
        counter1=counter1+1;
        total_price=0;
        printf("Customer:%d \n",counter1);
        printf("Enter your credit limit:");
        scanf("%f",&credit_limit);
        printf("Enter your quantity of items:");
        scanf("%d",&quantity);
        counter2=0;

        while(counter2<quantity){
            counter2=counter2+1;
            printf("Enter the price of an item:");
            scanf("%f",&price);
            total_price=total_price+price;

        }




        if (total_price>credit_limit)
        {
            printf("Sorry you cannot purchase goods worthy such a value on credit\n");
            while (credit_limit<total_price)
            {
                printf("Enter the another quantity of item:");
                scanf("%d",&quantity);
                total_price=0;
                counter2=0;
                while(counter2<quantity){
                    counter2=counter2+1;
                    printf("Enter the price of an item:");
                    scanf("%f",&price);
                    total_price=total_price+price;

                }
                printf("\nYour total cost is %.2f \n",total_price);
                printf("Thank You for purchasing from us\n");
            }
        }else
        {
            printf("Your total cost is %.2f \n",total_price);
            printf("Thank You for purchasing from us\n");
        }


    }


    return 0;
}
