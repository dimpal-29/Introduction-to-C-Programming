//Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents. 

#include <stdio.h>
int main() 
{
    FILE *file;
    char str[] = "Hello, this is a file handling example in C!";
    char ch;
    file = fopen("example.txt", "w");  
    if (file == NULL) 
	{
        printf("Error creating file.\n");
        return 1;
	}
    fputs(str, file);
    fclose(file);
    file = fopen("example.txt", "r");
    if (file == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) 
	{
        putchar(ch);
    }
    fclose(file);
 return 0;
}

