#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    char playerChoice, computerChoice;
    int randomValue;
    
    srand(time(0));

    
    randomValue = rand() % 3;

    
    if (randomValue == 0) {
        computerChoice = 'S'; 
    } else if (randomValue == 1) {
        computerChoice = 'K'; 
    } else {
        computerChoice = 'P'; 
    }

    
    printf("Enter your choice (S for Stone, K for Knife, P for Paper): ");
    scanf(" %c", &playerChoice);
    playerChoice = toupper(playerChoice);

    
    printf("You chose: %c\n", playerChoice);
    printf("Computer chose: %c\n", computerChoice);

    
    if (playerChoice == computerChoice) {
        printf("It's a tie! Nobody wins.\n");
    } else if ((playerChoice == 'S' && computerChoice == 'K') || 
               (playerChoice == 'K' && computerChoice == 'P') || 
               (playerChoice == 'P' && computerChoice == 'S')) {
        printf("You win! Your %c beats Computer's %c.\n", playerChoice, computerChoice);
    } else {
        printf("Computer wins! Computer's %c beats your %c.\n", computerChoice, playerChoice);
    }

    return 0;
}
