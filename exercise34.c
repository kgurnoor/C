#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;

    // Initialize random number generator
    srand(time(NULL));

    // Display menu and get player's choice
    printf("Welcome to Rock-Paper-Scissors Game!\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Choice: ");
    scanf("%d", &playerChoice);

    // Validate player choice
    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
        return 1;
    }

    // Get computer's choice
    computerChoice = rand() % 3 + 1;

    // Display choices
    printf("You chose: %d\n", playerChoice);
    printf("Computer chose: %d\n", computerChoice);

    // Determine the winner
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
