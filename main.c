// This is game which ask user for guessing a number, if the number is guessed correct then it displays how many guesses you take. On the basis of your guess it tell the number is bigger or smaller. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator with current time
    srand(time(NULL));
    int guessed_number;
    int random_number;
    int number_of_guesses = 0;

    // Generate one random number between 1 and 100
    random_number = (rand() % 100) + 1;  // Random number between 1 and 100

    printf("Welcome to the number guessing game!\n");
    printf("Guess a number between 1 to 100.\n");
   
    do {
    printf("Guess a number:\n");
    scanf("%d", &guessed_number);

    if(guessed_number == 0 || guessed_number > 100)
    {
        printf("Enter number between 1 and 100\n");
    }
   
    else if(guessed_number > random_number)
    {
        printf("Lower number please:\n");
    }
    else if (guessed_number < random_number)
    {
        printf("Greater number please.\n");
    }
    else
     {
         printf("Congrats!\n");
     }
    
    number_of_guesses++;
    
    }while(guessed_number != random_number);

    
    printf("You guessed the number right in %d guesses.\n", number_of_guesses);
    printf("Thank you for playing.");

    return 0;
}


/*
PS D:\programming\c\project1> cd "d:\programming\c\project1\" ; if ($?) { gcc main.c -o main } ; if ($?) { .\main }

Welcome to the number guessing game!
Guess a number between 1 to 100.
Guess a number:
48
Greater number please.
Guess a number:       
56
Greater number please.
Guess a number:       
86
Lower number please:
Guess a number:     
75
Lower number please:
Guess a number:     
60
Lower number please:
Guess a number:     
58
Greater number please.
Guess a number:       
59
Congrats!
You guessed the number right in 7 guesses.
Thank you for playing.
PS D:\programming\c\project1>*/
