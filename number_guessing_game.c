/*
we will write a program that generate a randome number and asks the player to guess it if the player guess higher than the actual number the program display "Lower number please". Simlatly if the user's guess is too low , the program prints "higher " number please".
When the user guess the correct number , the program displays the number of guesses the player used to arrive at the number.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; // genrete randome number between 1 to 100
    //printf("The numberis %d", number);
    // keep running the loop untilthe number is guessed

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number plese!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("you guesses it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);

    return 0;
}