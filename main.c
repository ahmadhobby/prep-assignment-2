//
//  main.c
//  Assignment 2 Extended 2nd Try
//
//  Created by Ahmad Hobby on 2018-02-12.
//  Copyright © 2018 Ahmad Hobby. All rights reserved.
//


//Goal
//
//Make the program compile
//
//Stretch goals
//
//Make it so the user is asked to play the game over again. If the user presses y start the game from the beginning. If they press n stop the program.


#include <stdio.h>

int main(void) {
    
    char play;
    int choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play);
    
    while (play == 'y') {
        printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");
        scanf("%d", &choice);
        
        char* answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n\n";
        
        switch (choice) {
            case 1:
                printf("%s", answer);
                break;
            case 2:
                printf("%s", answer);
                break;
            case 3:
                printf("%s", answer);
                break;
            default:
                break;
        }
        printf("\nWould you like to play again? y/n: \n");
        scanf(" %c", &play);
    }
    printf("Thanks! Have a nice day!\n");
    return (0);
}
