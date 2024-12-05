#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rounds, lucky_number, secret_number, remainder,counter;
    int score = 0;


    srand(time(0));


    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);

    for (counter = 0; counter<rounds; counter++) {

        printf ("\nRound %d \n",counter+1);
        printf("Enter your lucky number: ");

        scanf("%d", &lucky_number);


        secret_number = rand() % 100 + 1;


        remainder = lucky_number % secret_number;


        if (remainder == 0) {
            printf("Draw\n");
            score += 1;
        } else if (remainder % 2 == 0) {
            printf("Win!\n");
            score += 3;
        } else {
            printf("Loss!\n");
            score -= 3;
        }



        printf("Lucky Number: %d\n",lucky_number);
        printf("Secret Number: %d\n",secret_number);
        printf("Remainder: %d\n",remainder);
        printf("Current Score: %d\n",score);
    }


    printf("\nFinal Score: %d\n", score);
    if (score>0) {
        printf("You have won the game.");
    }
    else if (score<0) {
        printf("You have lost the game.");
    }


    return 0;
}
