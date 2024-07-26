#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Create Rock, Paper & Scissors Game

Player1: rock
Player2 (Computer) : scissors
---> player 1 gets 1 point

Write a C program to allow user to play this game 3 times with computer
Log the scores of computer and player
Display the name of the winner at the end
Take username as input in the start of the game
*/

int PlrSc = 0;
int CompSc = 0;

// Syntax to generate a random number
int generateRandomNumber(int n){
    srand(time(NULL));
    return rand() % n;
}

void RPS(char* UserName){
    char plrCh;
    int quit = 0;
    while (quit==0)
    {
        printf("\n%s's Turn - ",UserName);
        getchar();
        scanf("%c",&plrCh);
        char computerChoice[3] = {'r','p','s'};
        char compCh = computerChoice[generateRandomNumber(3)];
        if (plrCh==compCh) {
            printf("Computer's Turn - %c\n",compCh);
            printf("Its a Draw\n");
        } else if (plrCh=='r') {
            if (compCh=='p') {
                printf("Computer's Turn - %c\n",compCh);
                printf("Computer Wins\n");
                CompSc++;
            } else if (compCh=='s') {
                printf("Computer's Turn - %c\n",compCh);
                printf("Player Wins\n");
                PlrSc++;
            }
        } else if (plrCh=='p') {
            if (compCh=='s') {
                printf("Computer's Turn - %c\n",compCh);
                printf("Computer Wins\n");
                CompSc++;
            } else if (compCh=='r') {
                printf("Computer's Turn - %c\n",compCh);
                printf("Player Wins\n");
                PlrSc++;
            }
        } else if (plrCh=='s') {
            if (compCh=='r') {
                printf("Computer's Turn - %c\n",compCh);
                printf("Computer Wins\n");
                CompSc++;
            } else if (compCh=='p') {
                printf("Computer's Turn - %c\n",compCh);
                printf("Player Wins\n");
                PlrSc++;
            }
        } else if (plrCh=='q') {
            printf("Quitting the Program\n");
            quit=1;
            continue;
        } else {
            printf("Type Correct choice\n");
        };
    }
    printf("\nFinal Scores are -\n%s's Score - %d\nComputer's Score - %d\n\n",UserName,PlrSc,CompSc);
    if (CompSc==PlrSc) {
        printf("Finally Its a Draw\n");
    } else if (CompSc<PlrSc) {
        printf("Finally %s Wins\n",UserName);
    } else if (CompSc>PlrSc) {
        printf("Finally Computer Wins\n");
    }
    
}

int main(){
    printf("\nRock, Paper & Scissors Game\n\n");
    char*UserName;
    UserName = (char*) malloc(sizeof(char));
    printf("Type your UserName - ");
    scanf("%s",UserName);
    printf("\n************\nInstructions -\nType r for rock,\np for paper and\ns for scissors\nq to quit the game\nexactly like written here\n************\n");
    RPS(UserName);
    return 0;
}