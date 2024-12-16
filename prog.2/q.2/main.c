#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char computerInput(){
     int computerRandom;
     srand(time(0));
     computerRandom= rand()%3;
     if(computerRandom==0){
        return 'S';
     }
     else if(computerRandom==1){
        return 'K';
     }
     else{
        return 'P';
     }
}
int main(){
     char playerChoice;
     char computerChoice;
     printf("Enter your choice[S][K][P]:");
     scanf("%c",&playerChoice);

     computerChoice=computerInput();
     printf("Your choice is %c\n",playerChoice);
     printf("Computer's choice is %c\n",computerChoice);

     if(playerChoice==computerChoice){
        printf("No one wins.");
     }
     else if((playerChoice!='S')&&(playerChoice!='K')&&(playerChoice!='P')){
        printf("Invalid Choice");
     }
     else if((playerChoice=='S'&&computerChoice=='K')||
             (playerChoice=='K'&&computerChoice=='P')||
             (playerChoice=='P'&&computerChoice=='S')){
                printf("You win!");
     }
     else{
        printf("Computer wins!");
     }
     return 0;

}
