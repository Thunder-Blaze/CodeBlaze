#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnum(){
    // Initialise Random Number Generator
    srand(time(0));
    // Generate Random Number from 1 to 100
    int random = (rand() % 100) + 1;
    // Return the random number
    return random;
}

int main(){
    int random_num = randnum();
    int user_guess = 0;
    int attempts = 0;
    // printf("Number Guessing Game\n\nGuess a Number b/w 0 to 100");
    // scanf("%d",user_guess);
    printf("Number Guessing Game\n\n");
    while (random_num != user_guess)
    {
        printf("Guess a Number b/w 0 to 100 => ");
        scanf("%d", &user_guess);
        if (random_num>user_guess)
        {
            printf("You Typed Lower Number\n");
        } else if (random_num<user_guess) {
            printf("You Typed Higher Number\n");
        }
        attempts++;
        
    }
    
    printf("Congratulations !!! You have Guessed Correctly \n\nYour Number of attempts are %d", attempts);

    return 0;
}