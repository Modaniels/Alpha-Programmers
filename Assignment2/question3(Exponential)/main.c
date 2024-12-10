#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function definitions
int factorial(int);
int exponetial(int);

//MAIN FUNCTION
int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    exponential(x);
    return 0;
}

//Factorial
int factorial(int x)
{
    if (x == 0) {
        return 1;  // Base case: 0! is 1
    } else {
        return x * factorial(x - 1);  // Recursive case
    }
}

//EXPONENTIAL
int exponential(int x)
{
    int counter=0;
    float sum=1.0;
    //loop
    for (counter=0;counter<x;counter++){
        sum+=pow(x,counter)/factorial(counter);
    }
    printf("Your answer is %.2f",sum);
}


