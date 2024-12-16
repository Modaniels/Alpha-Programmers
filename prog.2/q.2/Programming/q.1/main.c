#include <stdio.h>
#include <stdlib.h>
int reverseNumber(int number){
   int reverse;
   reverse=0;
   while(number!=0){
         reverse=reverse*10+(number%10);
         number/=10;
   }
   return reverse;
}
int main(){
    int number,reverse;
    printf("Enter a number:");
    scanf("%d",&number);

    reverse=reverseNumber(number);

    printf("The reverse of the number is %d\n",reverse);
    return 0;
}
