// Factorial Calculation 
//	Write a C program that calculates the factorial of a given number using a function. 
//	Challenge: Implement both an iterative and a recursive version of the factorial function and compare their performance for large numbers. 


#include <stdio.h>
int fact_recursive(int num);
int fact_iterative(int num);

int main()
{
    int num;

    printf("Enter the number to find factorial: ");
    scanf("%d", &num);

    printf("Factorial In Recursive of %d : %d\n", num, fact_recursive(num));
    printf("Factorial In Iterative of %d : %d\n", num, fact_iterative(num));

    return 0;
}
int fact_recursive(int num)
 {
	    if (num == 0)
	    {
	    	return 1;
		}
        
    return num * fact_recursive(num - 1);
}

int fact_iterative(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}


