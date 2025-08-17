//String Reversal 
//	Write a C program that takes a string as input and reverses it using a function. 
//	Challenge: Write the program without using built-in string handling functions. 

#include<stdio.h>
#include<string.h>
void rev_string(char str[]);
int main()
{
	char str[100];
	
	printf("Enter Is String:");
	scanf("%s",&str);
	
	
    rev_string(str);
    printf("Reversed string: %s\n", str);
	return 0 ;
}
void rev_string(char str[])
{
	  int length = 0;
   
    while (str[length] != '\0') 
    {
        length++;
    }

    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end)  
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
