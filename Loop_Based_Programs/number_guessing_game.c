#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;
    srand(time(0));
    secret_number = (rand() % 100) + 1;

    printf("--- Welcome to the Number Guessing Game! ---\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it in as few attempts as possible!\n\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the right number: %d\n", secret_number);
            printf("It took you %d attempts.\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
