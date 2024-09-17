#include <stdlib.h>
#include <stdio.h>


int sum(int a, int b) {
    return (a+b);
}

float sub(float a, float b) {
    return (a-b);
}


float mul(float a, float b) {
    return (a*b);
}

float divide(float a, float b) {
    return (a/b);
}


int main() {

    float num1, num2, result;
    int op, count = 0;
    char symbol, loop;

    printf(" _______________________________________________ \n");
    printf("|###############################################|\n");
    printf("|#*********************************************#|\n");
    printf("|#*      WELCOME TO C CALCULATOR PROGRAM      *#|\n");
    printf("|#*                                           *#|\n");
    printf("|#*       ////Written By: Chelon////          *#|\n");
    printf("|#*********************************************#|\n");
    printf("|###############################################|\n");

    start:

    count +=1;
    printf("\nOperation %d\n",count);
    printf("Enter num1:");
    scanf("%f",&num1);

    printf("Choose operator: add(+) = 1, sub(-) = 2, mul(*) = 3, div(/) = 4 :\n");
    scanf("%i",&op);

    printf("Enter num2:");
    scanf("%f",&num2);

    if(op == 1)
        {
            result = sum(num1,num2);
            symbol = '+';
            printf("Result = (%.2f %c %.2f = %.2f)\n", num1, symbol, num2, result);
        }
    else if(op == 2)
        {
            result = sub(num1, num2);
            symbol = '-';
            printf("Result = (%.2f %c %.2f = %.2f)\n", num1, symbol, num2, result);
        }
    else if(op == 3)
        {
            result = mul(num1, num2);
            symbol = '*';
            printf("Result = (%.2f %c %.2f = %.2f)\n", num1, symbol, num2, result);
        }
    else if(op == 4)
        {
            result = divide(num1, num2);
            symbol = '/';
            printf("Result = (%.2f %c %.2f = %.2f)\n", num1, symbol, num2, result);
        }
    else
        {
            printf("Error: wrong operator input!\n");
        }

    con:
    printf("Continue(y/n):");
    scanf("%s",&loop);

    if(loop=='y' || loop=='Y')
        {
            goto start;
        }
    else if(loop=='n' || loop=='N')
        {
            return(0);
        }
    else
        {
            printf("Wrong Input!\n");
            goto con;
        }
}

