
/*
Make a Snake Water Gun game
*/


let compsc = 0;
let plyrsc = 0;
let compmvl = ["s","w","g"];
let compmv;
let plyrmv;

let a = () => Math.floor(Math.random() * 3);

do {
    plyrmv = prompt("Choose s for Snake\nw for Water\ng fot Gun\nq to quit");
    compmv = compmvl[a()];
    if (plyrmv == compmv){
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nIts a draw");
    } else if (plyrmv=="s" && compmv == "w"){
        plyrsc++;
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nPlayer Wins");
    } else if (plyrmv=="w" && compmv == "g"){
        plyrsc++;
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nPlayer Wins");
    } else if (plyrmv=="g" && compmv == "s"){
        plyrsc++;
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nPlayer Wins");
    } else if (plyrmv=="w" && compmv == "s"){
        compsc++;
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nComputer Wins");
    } else if (plyrmv=="g" && compmv == "w"){
        compsc++;
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nComputer Wins");
    } else if (plyrmv=="s" && compmv == "g"){
        compsc++;
        alert("You choose "+plyrmv+"\nComp choose "+compmv+"\nComputer Wins");
    } else if (plyrmv=="q"){
        break;
    } else {
        alert("Wrong Input");
    }
} while(plyrmv!="q");

if (compsc!=0 || plyrsc!=0){
    if (compsc == plyrsc){
        alert("Finally its a draw\nPlayer's and Comp's score is "+compsc);
    } else {
        alert("Comp : "+compsc+"\nPlayer : "+plyrsc+"\nFinally "+ ((plyrsc>compmv)?"Player":"Computer") +" Wins");
    }
}