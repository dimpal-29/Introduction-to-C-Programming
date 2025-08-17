//LAB EXERCISE 1: Simple Calculator 
	//Write a C program that acts as a simple calculator. The program should take two numbers and an operator as input from the user 
	//and perform the respective operation (addition, subtraction, multiplication, division, or modulus) using operators. 
	//Challenge: Extend the program to handle invalid operator inputs. 


#include <stdio.h>
int main()
{
    int num1, num2, result;
    char ch;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &ch);  

    printf("Enter second number: ");
    scanf("%d", &num2);
    switch(ch) 
	{
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
                printf("Result: %d\n", result);
            }
			else 
			{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) 
			{
                result = num1 % num2;
                printf("Result: %d\n", result);
            } 
			else 
			{
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

