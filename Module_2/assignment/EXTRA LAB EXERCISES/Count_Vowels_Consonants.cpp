//Count Vowels and Consonants 
//	Write a C program that takes a string from the user and counts the number of vowels and consonants in the string. 
//	Challenge: Extend the program to also count digits and special characters.


#include<stdio.h>
#include<string.h>

int main()
{
	char name[100];
	int vowel =0,consonants=0,digit=0,special_characters=0;
	
	printf("Enter the String:");
	fgets(name,100,stdin);
	
	for (int i=0; name[i] != '\0';i++)
	{	
			
			if(name[i] == 'a'|| name[i] == 'e'|| name[i] =='i'|| name[i] =='o'|| name[i] =='u')
			{
				vowel++;
			}
			else if(name[i] >= 'a' && name[i] <= 'z')
			{
				consonants++;
			}
			else if(name[i] >= '0' && name[i] <= '9')
			{
				digit++;
			}
			else 
			{
				special_characters++;
			}
	}
	printf("\n vowel is: %d",vowel);
	printf("\nconsonants :%d",consonants);
	printf("\n digit :%d",digit);
	printf("\n special_characters :%d",special_characters);
	
	return 0;
}
