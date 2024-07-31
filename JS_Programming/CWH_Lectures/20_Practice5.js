// Q1. Write an array and take input from user 
//     and push that element into the array
//
// let arr = [1,23,46,8,94,67];
// arr.push(Number.parseInt(prompt("Type the Element to Push")));
// alert(arr);









// Q2. Keep Adding Numbers to Array in Q1 until 0 
//     is added to the array
//
// let arr = [];
// let x;
// while (x!=0){
//     x = prompt("Type Element "+arr.length);
//     if (x!=0){
//         arr.push(x);
//     }
// }
// alert(arr);
// console.log(arr);









// Q3. Filter for numbers divisible by 10 from a 
//     given array
//
// let arr = [12,45,30,66,70,52,20]
// let a = arr.filter((x)=>{
//     return (x%10==0);
// })
// console.log("Numbers Divisible by 10 in the array are -",a.join(","))









// Q4. Create an array of square of given numbers
//
// let arr = [2,8,22,7];
// let a = arr.map((n1)=>{
//     return n1**2;
// })
// console.log(a)









// Q5. Use  Reduce to calculate factorial of a given 
// number from an array of first n natural
// numbers (n being the given number)
//
// let n = 6;
// let arr = [];
// // for (let i = n; i ; i--) {
// //     arr.unshift(i);
// // }
// for (let i = 0; i < n; i++) {
//     arr.push(i+1);
// }
// fact = arr.reduce((n1,n2)=>{
//     return n1*n2;
// })
// console.log(fact)









// Q6. Write a Program to take input continously and sum 
//     them until 0 is typed. It should give error when 
//     someone types anything other than a number
//
// let x;
// let sum = 0;
// while(x!='0'){
//     x=prompt("Type a Number, 0 to Exit");
//     sum+=Number.parseInt(x);
//     if (isNaN(sum)==false) {
//         if (x!=0) {
//             alert("The Sum has become "+sum);
//         };
//     } else {
//         alert("You didn't type a number\nThe Program will Exit Now");
//         x=0;
//     };
// };