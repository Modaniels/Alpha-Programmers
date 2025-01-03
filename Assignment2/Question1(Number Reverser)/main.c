#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, reversed = 0, remainder;
    bool isNegative ;

    printf("Welcome to my number reverser program!\n");
    printf("***************************\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        is-negative = true;
        num = -num; 
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (isNegative) {
        reversed = -reversed; 
    }

    printf("Reversed number is %d\n", reversed);
    printf("Goodbye!\n");
    return 0;
}
