   //Armstrong Number 
//	Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3). 
//	Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 


#include <stdio.h>
int Armstrong_check(int num);  
int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (Armstrong_check(number))
    {
        printf("%d is an Armstrong number.\n", number);
	}
    else
    {
    	 printf("%d is not an Armstrong number.\n", number);
	}
       

    printf("\nArmstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) 
    {
        if (Armstrong_check(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
int Armstrong_check(int num) 
{
    int original = num;
    int sum = 0, digits = 0, temp = num;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) 
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) 
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return (sum == original);
}

