// Q1. Write a progam using prompt function to take input of 
//     age as a value from the user and use alert to tell him if
//     he can drive
//
// let a = prompt("What's Your Age ?");
// a = Number.parseInt(a);
// alert("You can "+(a>=18?"Drive":"Not Drive"));









// Q2. In Q1, use confirm to ask if he wants to se promp again
//
// let b=true;
// do {
//     let a = prompt("What's Your Age ?");
//     a = Number.parseInt(a);
//     alert("You can "+(a>=18?"Drive":"Not Drive"));
//     b = confirm("Do You Want to See The Prompt Again ?");
//     console.log(b);
// } while(b!=false);









// Q3. In Previous Question use console error to log error if age
//     entered is negetive
//
// let b=true;
// do {
//     let a = prompt("What's Your Age ?");
//     a = Number.parseInt(a);
//     if (a<0){
//         console.error("Age can't be Negetive");
//         continue;
//     } else {
//         alert("You can "+(a>=18?"Drive":"Not Drive"));
//         b = confirm("Do You Want to See The Prompt Again ?");
//     }
// } while(b!=false);









// Q4. Write a program to change the url to google.com (redirection)
//     if user enters a number greater than 4
//
// let a;
// do {
//     a = prompt("Type a Number>4 to Redirect to Google.com");
//     a = Number.parseInt(a);
//     if (a>4){
//         location.href = "https://google.com";
//     }
// } while(a<=4)









// Q5. Change the Background of the page on user input trough prompt
// let a = prompt("Enter a color");
// document.body.style.background = a;