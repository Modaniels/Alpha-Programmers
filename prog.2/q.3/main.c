#include <stdio.h>
#include <stdlib.h>
int compute_exponent(int x,int terms){
    int result=1;
    int term=1;;
    for(int n=1;n<terms;n++){
        term*=x/n;
        result+=term;
    }
    return result;
}
int main(){
    int x,terms;
    printf("Enter a value for x:");
    scanf("%d",&x);
    printf("Enter the number of terms:");
    scanf("%d",&terms);
    int compute;
    compute=compute_exponent(x,terms);
    printf("The value of e^%d for %d terms is %d\n",x,terms, compute);
    return 0;
}
