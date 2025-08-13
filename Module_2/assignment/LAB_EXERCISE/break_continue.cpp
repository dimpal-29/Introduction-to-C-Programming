//Write a C program that uses the break statement to stop printing numbers when it reaches 5.
//Modify the program to skip printing the number 3 using the continue statement. 

#include<stdio.h>
int main()
{
	int i ;
	
	printf("Number 5 break :\n");
	for(i=1; i<=5; i++)
	{
	 	if(i == 5)
	 	{
	 		break;
		}
		printf("%d\n",i);
	}
	
	printf("\n");
	
	printf("Skipping Number  3 continue :\n");
	for(i=1; i<=5; i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}

