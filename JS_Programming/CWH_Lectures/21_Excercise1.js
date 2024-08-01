/*

Write a JS program to generate a random number and store it in a variable
the program then takes and input from the user to tell them whether the guess
was correct, greater or lesser than the original number

100-(no of guesses) is the score of the user, the program is expected to
terminate once the number is guessed. Number should be between 1-100

*/

let rnum = Math.floor((Math.random() * 100) + 1);
let gnum;
let score=100;
do {
    gnum = prompt("Type the number");
    if (rnum!=gnum) {
        alert("You Guessed Wrong\nThe Correct Number is "+(rnum>gnum?"Greater":"Lesser"));
        score--;
    }
} while (rnum!=gnum);
alert("Congratulations !!! You have Guessed Correctly\nThe Number was "+rnum+"\nYour score is "+score);