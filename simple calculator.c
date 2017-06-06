#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

char operation;
float num1,num2;
float result;
printf("select operation:\n");          // enter operation
scanf("%c",&operation);
printf("enter num 1 and num 2:\n");      // enter numbers
scanf("%f%f",&num1,&num2);


switch(operation){

case '+':
    result=num1+num2;
    printf("sum is = %f",result);
    break;
case '-':
    result=num1-num2;
    printf("subtraction is = %f",result);
    break;
case '*':
    result=num1*num2;
    printf("multiplication is = %f",result);
    break;
case '/':
    result=num1/num2;
    printf("multiplication is =%f",result);
    break;
}
return 0;
getch();
}

