#include <stdio.h>
#include <stdlib.h>
void printf_result(int result){
    printf("The result is %d\n",result);
}
void add(int num1,int num2){
    int result=num1+num2;
    printf_result(result);
}
void subtract(int num1,int num2){
    int result=num1-num2;
    printf_result(result);
}
void multiply(int num1,int num2){
    int result=num1*num2;
    printf_result(result);
}
void divide(int num1,int num2){
    int result=num1/num2;
    printf_result(result);
}

int main(){
  int num1,num2;
  char operator;
  printf("Enter two integers:");
  scanf("%d %d",&num1,&num2);

  printf("\nEnter an operator[a][s][m][d]:");
  scanf(" %c",&operator);

  switch(operator){
    case'a':
    add(num1,num2);
    break;
    case's':
    subtract(num1,num2);
    break;
    case'm':
    multiply(num1,num2);
    break;
    case'd':
      if(num2!=0){
      divide(num1,num2);
      }
      else{
      printf("Invalid input");
      }
    break;
    default:
    printf("Invalid operator");
  }
  return 0;
}
