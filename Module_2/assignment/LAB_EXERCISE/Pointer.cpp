// Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result. 

#include <stdio.h>
int main() 
{
    int age = 22;             
    int *ptr = &age;        
    printf("Original value of age: %d\n", age);
    *ptr = 30;
    printf("Modified value of age using pointer: %d\n", age);
    printf("Value accessed through pointer: %d\n", *ptr);

    return 0;
}


