//LAB EXERCISE 3: Sum of Array Elements 
//	Write a C program that takes N numbers from the user and stores them in an array. The program should then calculate and display the sum of all array elements. 
//	Challenge: Modify the program to also find the average of the numbers. 

#include <stdio.h>
int main() 
{
    int n, i,sum = 0, average;

    printf("Enter Number : ");
    scanf("%d",&n);
	
	 int numbers[n];
	 
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
	{
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = sum / n;
    printf("Sum of all numbers = %d\n", sum);
    printf("Average of all numbers = %d\n", average);

    return 0;
}

