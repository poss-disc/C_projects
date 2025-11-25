#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calc.h"

float calculate(){
   

char buff[100];
    int n = 99;

    printf("Type the operation: ");
    fgets(buff, n, stdin);

char *str = buff;

char delimiter[] = " ";

char *token1;
char *token2;
char *operator;

token1 = strtok(str, delimiter);
operator = strtok(NULL, delimiter);
token2 = strtok(NULL, delimiter);

float num1;
float num2;
num1 = atof(token1);
num2 = atof(token2);

switch (*operator){

    case '+':
        printf("%.2f + %.2f = %.2f \n", num1, num2, num1 + num2);
    break;


    case '-':
            printf("%.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
    break;

    case '*':
                printf("%.2f x %.2f = %.2f \n", num1, num2, num1 * num2);
    break;

    case '/':
        if (num2 == 0){
        
        printf("Error: Division by zero is not possible\n");
        
        }
        else{
                printf("%.2f / %.2f = %.2f \n", num1, num2, num1 / num2);
        }
    break;
}

	}




