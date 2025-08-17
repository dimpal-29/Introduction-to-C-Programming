//LAB EXERCISE 2: Multiplication Table 
//	Write a C program that takes an integer input from the user and prints its multiplication table using a for loop. 
//	 Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N). 


#include<stdio.h>
int main()
{
    int  no,num, range;

    printf("Enter the number for the table: ");
    scanf("%d", &no);

    printf("Enter the range: ");
    scanf("%d", &range);

    for(int i = 1; i <= range; i++)
    {
        num = no * i;
        printf("%d * %d = %d\n", no, i, num);
    }

    return 0;
}

