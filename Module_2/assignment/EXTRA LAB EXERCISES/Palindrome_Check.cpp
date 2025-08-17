// Palindrome Check 
//	Write a C program that takes a number as input and checks whether it is a palindrome using a function. 
//	Challenge: Modify the program to check if a given string is a palindrome. 


#include <stdio.h>
#include <string.h>

void number(int num);
void character(char str[]);

int main()
 {
    int num;
    char str[100];

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the string: ");
    scanf("%s", str);

    number(num);     
    character(str); 

    return 0;
}

void number(int num) 
{
    int rev = 0, original = num, digit;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev) 
    {
        printf("Number is palindrome.\n");
    }
	else 
    {
        printf("Number is not palindrome.\n");
    }
}

void character(char str[]) 
{
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) 
    {
        if (str[i] != str[j]) 
        {
            printf("String is not palindrome.\n");
            return;
        } 
		else 
		{
            i++;
            j--;
        }
    }
    printf("String is palindrome.\n");
}

