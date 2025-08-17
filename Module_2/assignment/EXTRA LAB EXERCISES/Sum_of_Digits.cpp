//Sum of Digits 
//	Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop. 
//	Challenge: Extend the program to reverse the digits of the number. 

#include<stdio.h>
int main()
{
	int num, digit, sum = 0, reverse = 0, original;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; 
    
    while(num != 0)
    {
        digit = num % 10;        
        sum = sum + digit;           
        reverse = reverse * 10 + digit; 
        num = num / 10;          
    }

   
    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reversed number = %d\n", reverse);

	return 0;
}
