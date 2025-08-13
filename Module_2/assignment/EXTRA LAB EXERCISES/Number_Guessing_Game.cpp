//Number Guessing Game 
	//Write a C program that implements a simple number guessing game. The program should generate a random number between 1 and 100, and the user should 
	//guess the number within a limited number of attempts. 
	
	//Challenge: Provide hints to the user if the guessed number is too high or too low. 


#include <stdio.h>
int main() 
{
    int secretNumber, guess;
    int maxAttempts = 5;

    printf("Enter the secret number (1 to 100): ");
    scanf("%d", &secretNumber);

    printf("Now try to guess the number!\n");
    printf("You have %d attempts.\n", maxAttempts);

    for (int attempts = 1; attempts <= maxAttempts; attempts++) 
	{
        printf("Attempt %d: Enter your guess: ", attempts);
        scanf("%d", &guess);

        if (guess == secretNumber) 
		{
            printf("Congratulations! You guessed it right.\n");
            break;
        } 
        else if (guess < secretNumber) 
		{
            printf("Too low! Try higher.\n");
        } 
        else 
		{
            printf("Too high! Try lower.\n");
        }

        if (attempts == maxAttempts) 
		{
            printf("Sorry! You used all attempts. The number was %d.\n", secretNumber);
        }
    }
    return 0;
}

