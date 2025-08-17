//Write a C program that takes two strings from the user and concatenates them using strcat(). 
//Display the concatenated string and its length using strlen(). 

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    strcat(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    printf("Length of concatenated string: %lu\n", strlen(str1));

    return 0;
}


