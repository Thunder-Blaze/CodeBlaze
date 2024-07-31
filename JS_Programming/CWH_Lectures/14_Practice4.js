// // Q1. What will the following print in js
// console.log("har\"".length)
// // I think 4 (Escape characters are considered of length 1)









// // Q2. Explore the includes, starts with & ends with functions
// //     of a string
//
// let c = "into the abyss";
// console.log(c.includes("the"));         // true
// console.log(c.startsWith("into"));      // true
// console.log(c.startsWith("nto"));       // false
// console.log(c.startsWith("nto",1));     // true
// console.log(c.endsWith("yss"));         // true
// console.log(c.endsWith("in"));          // false
// console.log(c.endsWith("in",2));        // true










// // Q3. Write a program to convert a given string to lowercase
// let n = prompt("Type something");
// n = n.toLowerCase();
// alert("Its lowercase is - \n"+n);










// // Q4. Extract the amount out of this string
// //     "Please give Rs 1000"
//
// Methord 1 [Works for All Strings]
//
// let str = "Please give Rs 1000";
// let amt="";
// for (let a of str) {
//     // a = parseInt(a);
//     if (a!=' ' && ( a==0 || a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8 || a==9 )) {
//         amt+=a;
//     }
// }
// amt = Number.parseInt(amt);
// console.log("The Amount is",amt);
//
// Methord 2 (Slicing) [Works only for a specific String]
//
// let str = "Please give Rs 1000";
// let amt = str.slice(15);
// console.log("The Amount is",amt);









// Q5. Try to Change 4th character of a given string
//     Were u able to do it ?
//
// let b = "helloo";
// b[3]="d";
// console.log(b);
//
// // It didn't gave an error but the 4th character also didn't
// // changed because strings are immutable (non-modifiable)