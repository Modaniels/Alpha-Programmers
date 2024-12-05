#include <stdio.h>
#include <stdlib.h>

#define ADD 'a'
#define SUBTRACT 's'
#define MULTIPLY 'm'
#define DIVIDE 'd'


float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float get_number(const char *input_msg);
char get_operator();
void print_result(float num1, float num2, char choice, float result);

int main() {
    char choice;
    do {
        float num1 = get_number("Enter first number: ");
        float num2 = get_number("Enter second number: ");
        char operator = get_operator();

        float result;
        switch (operator) {
            case ADD: 
                result = add(num1, num2); 
                break;
            case SUBTRACT: 
                result = subtract(num1, num2); 
                break;
            case MULTIPLY: 
                result = multiply(num1, num2); 
                break;
            case DIVIDE: 
                result = divide(num1, num2); 
                break;
            default: 
                printf("Unexpected error: invalid operator.\n");
                continue; 
        }

        print_result(num1, num2, operator, result);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');

    printf("Farewell, soldier!\n");
    return 0;
}

float get_number(const char *input_msg) {
    float num;
    while (1) {
        printf("%s", input_msg);
        if (scanf("%f", &num) == 1) {
            return num;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n'); 
        }
    }
}

char get_operator() {
    char operator;
    while (1) {
        printf("The following are valid operators:\n");
        printf("a - Add\n");
        printf("s - Subtract\n");
        printf("m - Multiply\n");
        printf("d - Divide\n");
        printf("Please enter an operator (a/s/m/d): ");
        scanf(" %c", &operator);
        if (operator == ADD || operator == SUBTRACT || operator == MULTIPLY || operator == DIVIDE) {
            return operator;
        } else {
            printf("Invalid choice! Valid operators are 'a', 's', 'm', or 'd'. Try again.\n");
            while (getchar() != '\n');
        }          
    }
}

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        exit(1);
    }
    return a / b;
}

void print_result(float num1, float num2, char choice, float result) {
    const char *operation;
    switch (choice) {
        case ADD: operation = "+"; break;
        case SUBTRACT: operation = "-"; break;
        case MULTIPLY: operation = "*"; break;
        case DIVIDE: operation = "/"; break;
        default: operation = "?"; break;
    }
    printf("The result of %.2f %s %.2f is: %.2f\n", num1, operation, num2, result);
}
