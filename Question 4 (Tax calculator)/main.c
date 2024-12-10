#include <stdio.h>

int main() {
    float gross_pay, net_pay, tax_rate , tax_payable;
    int dependants;
do{

    printf("Enter your gross pay (KSh): \n");
    scanf("%f", &gross_pay);
    }while(gross_pay<0);
    printf("Enter the number of dependants: \n");

    scanf("%d", &dependants);


    if (gross_pay > 0 && gross_pay <= 10000) {

        tax_rate = 0.0;
    } else if (gross_pay > 10000 && gross_pay <= 20000) {

        if (dependants < 3) {
            tax_rate = 0.15;
        } else {
            tax_rate = 0.10;
        }
    } else {

        if (dependants < 3) {
            tax_rate = 0.35;
        } else {
            tax_rate = 0.25;
        }
    }


    tax_payable = gross_pay * tax_rate;
    net_pay = gross_pay - tax_payable;


    printf("Your tax Payment details are as follows:\n");
    printf("Gross Pay: Ksh %.2f\n", gross_pay);
    printf("Tax Payable: Ksh %.2f\n", tax_payable);
    printf("Net Pay: Ksh %.2f\n", net_pay);

    return 0;
}
