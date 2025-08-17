//Write a C program that defines a structure to store a student's details (name, roll number, and marks). 
//Use an array of structures to store details of 3 students and print them. 

#include <stdio.h>
struct Student 
{	
    char name[50];
    int roll_number;
    float marks;
};
int main() 
{
    struct Student s1[3]; 
    for (int i = 0; i < 3; i++) 
	{
        printf("Enter details for student \n", i);

        printf("Name: ");
        scanf("%s", s1[i].name);  
        printf("Roll Number: ");
        scanf("%d", &s1[i].roll_number);
        printf("Marks: ");
        scanf("%f", &s1[i].marks);
        printf("\n");
    }    
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 3; i++) 
	{
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Roll Number: %d\n", s1[i].roll_number);
        printf("Marks: %f\n", s1[i].marks);
        printf("\n");
    }
    return 0;
}

