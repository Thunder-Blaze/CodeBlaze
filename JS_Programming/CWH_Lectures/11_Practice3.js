// Q1. Write a Program to print the marks of a student
//     in a object using for loop
//
// let marks = {
//     harry:98,
//     rohan:70,
//     aakash:7
// }
// for (let i = 0; i < Object.keys(marks).length; i++) {
//     console.log("The marks of "+Object.keys(marks)[i]+" is",Object.values(marks)[i]);
//     // Object.values(marks)[i]
//     //         and
//     // marks[Object.keys(marks)[i]]
//     //
//     // both works
// }









// Q2. Write the Program in Q1 using for-in loop
//
// for (let i in marks) {
//     console.log("The marks of "+i+" is",marks[i]);
// }









// Q3. Write a Program to print "Try Again" until the user
//     enters the correct number
//
let usrin = prompt("Type 34");
usrin = Number.parseInt(usrin);
let attempts = 0;
while (usrin!=34){
    usrin = prompt("Type 34");
    usrin = Number.parseInt(usrin);
    console.log("Try Again");
    attempts++;
}
console.log("You Typed it Right in",attempts,"attempts");









// Q4. Write a function to find Mean of 5 numbers
//
// let a = prompt("Type Number1");
// let b = prompt("Type Number2");
// let c = prompt("Type Number3");
// let d = prompt("Type Number4");
// let e = prompt("Type Number5");
// let mean = ((a+b+c+d+e)/5)
// console.log("The Mean of the five numbers is",mean);