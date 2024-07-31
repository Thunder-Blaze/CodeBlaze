let num = [3, 54, 1, 2, 4];


// // Using For Loop
// for (let i = 0; i < num.length; i++) {
//     console.log(num[i]);
// }






// // For Each Loop
// num.forEach((element) => {
//     console.log(element*element);
// });



// // Array.from() is used to convert something to array
// let nam = "Anime";
// let arr = Array.from(nam);
// console.log(arr);




// // for...of
// for (let i of num) {
//     console.log(i);
// }





// // for...in
for (let i in num) {
    console.log(i,":",num[i]);
}