//Write a C program that stores 5 integers in a one-dimensional array and prints them. 
//Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements. 

#include <stdio.h>
int main() 
{
	int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Element %d:",i);
        scanf("%d", &arr[i]);
    }
    printf("One-Dimensional Array Elements:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    int matrix[3][3], sum = 0;
    printf("\n\nEnter elements for 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum =  sum + matrix[i][j]; 
        }
    }
    printf(" Matrix Elements:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
  }

    printf("Sum of all matrix elements = %d\n", sum);
    return 0;
}

