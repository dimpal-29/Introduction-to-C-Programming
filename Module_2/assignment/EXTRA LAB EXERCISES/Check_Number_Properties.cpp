//LAB EXERCISE 2: Check Number Properties 	
//	Write a C program that takes an integer from the user and checks the following using different operators: 
//		o Whether the number is even or odd. 
//		o Whether the number is positive, negative, or zero. 
//		o Whether the number is a multiple of both 3 and 5. 
	 
#include<stdio.h>
int main()
 {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
	    printf("The number is Even.\n");
	}
    else
    {
        printf("The number is Odd.\n");
    }
    if (num > 0)
    {
        printf("The number is Positive.\n");
	}
    else if (num < 0)
    {
        printf("The number is Negative.\n");
	}
    else
    {	
        printf("The number is Zero.\n");
	}

    if (num % 3 == 0 && num % 5 == 0)
    {
	
        printf("The number is a multiple of both 3 and 5.\n");
	}
    else
    {
        printf("The number is NOT a multiple of both 3 and 5.\n");
	}

    return 0;
}

