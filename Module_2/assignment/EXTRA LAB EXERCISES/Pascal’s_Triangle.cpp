//Pascal's Triangle 
//	Write a C program that generates Pascal's Triangle up to N rows using loops. 
//	Challenge: Implement the same program using a recursive function. 


#include <stdio.h>
int pascal(int n, int k);
int main() 
{
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j <= i; j++) 
		{
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }
    return 0;
}


int pascal(int n, int k) 
{
    
    if (k == 0 || k == n) 
    {
    	return 1;
	}
    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

