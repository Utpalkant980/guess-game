#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    const int MAX_NUMBER = 100;

   
    srand(time(0));
    number = rand() % MAX_NUMBER + 1; 
    printf("Welcome to Guess the Number Game!\n");
    printf("I'm thinking of a number between 1 and %d.\n", MAX_NUMBER);

    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}
