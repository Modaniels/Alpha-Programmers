#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function definitions
int factorial(int);
float exponential(int);

//MAIN FUNCTION
int main()
{
    float result;
    int x,ans;
    printf("Enter the value of x:");
    scanf("%d",&x);
    result=exponential(x);
    printf("Your answer is %.2f",result);
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
float exponential(int x)
{
    int counter=0;
    float sum=1.0;
    //loop
    for (counter=0;counter<=x;counter++){
        sum+=pow(x,counter)/factorial(counter);
    }

    return sum;

}

