//Write a C program that accepts two integers from the user and performs arithmetic, relational, 
//and logical operations on them. Display the results. 

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter number1:");
	scanf("%d",&a);
	
	printf("Enter number2:");
	scanf("%d",&b);
	
	//arithmetic
	printf("---------------------arithmetic--------------------\n");
	printf("\n");
	printf("Addition is : %d\n",a+b);
	printf("Subtraction is : %d\n",a-b);
	printf("Multiplication is : %d\n",a*b);
	printf("Division is : %d\n",a/b);
	printf("Module is : %d\n",a%b);
	
	printf("\n");
	printf("-----------------------Relational:----------------------\n");
	printf("Greater than value is: %d\n",a>b);
	printf("Less than value is: %d\n",a<b);
	printf("Greater or equal value is: %d\n",a>=b);
	printf("Less or equal value is: %d\n",a<=b);
	printf("equal value is: %d\n",a==b);
	printf("Not equal value is:%d\n",a!=b);
	
	printf("\n");
	printf("-----------------------Logical---------------------------\n");
	printf("AND Ans is :%d\n",a > b && b < a);
	printf("OR Ans is %d\n",a > b || b < a);
	printf("NOT Equal Ans is :%d",!(a < b || b < a));	
	
	return 0;
}
