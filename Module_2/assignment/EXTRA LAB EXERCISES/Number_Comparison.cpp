//LAB EXERCISE 2: Number Comparison 
//	Write a C program that takes three numbers from the user and determines: 
		//o The largest number. 
		//o The smallest number. 
	//Challenge: Solve the problem using both if-else and switch-case statements. 



#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter The First Number:");
	scanf("%d",&num1);
		
	printf("Enter The Second Number:");
	scanf("%d",&num2);
	
	printf("Enter The Third Number:");
	scanf("%d",&num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("Largest number: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("Largest number: %d\n", num2);
    }
    else
    {
        printf("Largest number: %d\n", num3);
    }
    
    if (num1 <= num2 && num1 <= num3)
    {
        printf("Smallest number: %d\n", num1);
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        printf("Smallest number: %d\n", num2);
    }
    else
    {
        printf("Smallest number: %d\n", num3);
    }

printf("\n");
printf("\n");

//Switch Case:

printf("Using Switch Case Statements\n \n");
int ch;
printf("Enter The Choice:");
scanf("%d",&ch);
switch(ch)
    {
        case 1:
        
            if (num1 >= num2 && num1 >= num3)
            {
                printf("Largest number: %d\n", num1);
            }
            else if (num2 >= num1 && num2 >= num3)
            {
                printf("Largest number: %d\n", num2);
            }
            else
            {
                printf("Largest number: %d\n", num3);
            }
            break;
        
        case 2:
        
            if (num1 <= num2 && num1 <= num3)
            {
                printf("Smallest number: %d\n", num1);
            }
            else if (num2 <= num1 && num2 <= num3)
            {
                printf("Smallest number: %d\n", num2);
            }
            else
            {
                printf("Smallest number: %d\n"  , num3);
            }
            break;
       
        default:
        
            printf("Invalid choice.\n");
            break;
        
    }
	return 0;
}


