//LAB EXERCISE 1: Grade Calculator	
//	Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions: 
//	o Marks > 90: Grade A 
//  o Marks > 75 and <= 90: Grade B 
//    o Marks > 50 and <= 75: Grade C 
//    o Marks <= 50: Grade D 
//Use if-else or switch statements for the decision-making process 

#include <stdio.h>
int main() 
{
    int marks, grade;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    if (marks > 90)
    {
    	 grade = 1;
	}  
    else if (marks > 75)
    {
    	 grade = 2;
	}  
    else if (marks > 50)
    {
    	 grade = 3;
	}  
    else
    {
    	 grade = 4;
	}
    
    switch (grade) 
	{
        case 1:
            printf("Grade A\n");
            break;
        case 2:
            printf("Grade B\n");
            break;
        case 3:
            printf("Grade C\n");
            break;
        case 4:
            printf("Grade D\n");
            break;
        default:
            printf("Invalid marks\n");
    }

    return 0;
}

